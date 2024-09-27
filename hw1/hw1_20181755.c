#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define DEBUG 0

#define MAX_LINE 1000 // 최대 수식의 갯수, 임의로 정함
#define MAX_LINE_LEN 256 // 수식 최대의 길이, 임의로 정함

typedef enum {
    NOTHING,    // 공백, 그 외 기타
    NUMBER,     // 숫자
    PLUS,       // '+'
    STAR,       // '*'
    LPAREL,     // '('
    RPAREL,     // ')'
    END,        // EOF
} token_type; // enum에서 처음을 NULL로 두면 오류가 난다.


/** 함수들 간 공유해야 하는 전역변수 */

token_type token; // 토큰의 종류를 저장
token_type token_prev; // 숫자 이외 토큰 중복 방지

char *subptr; // substring 을 가리키는 포인터

int num; // 파싱하여 나온 번호 임시 저장
char numbuf[MAX_LINE_LEN]; // 여러자리 정수 계산시 임시 저장하는 버퍼
int numbufprog; // 상기 버퍼의 사용량


int countdigits(int number);

void get_token();

int calc(char *line);

int expression();

int term();

int factor();

int errorhdlr(int i);


int main(int argc, char *argv[]) {
    /** 0. 프로그램 시작
     * 프로그램은 컴파일 이후 다음과 같이 작동하여야 한다
     * ./<program name> <math problems filename>
     */
    
    if (argc < 2) {
        printf("Error: Missing \"math problems file name\"\n");
        printf("Usage: %s <math problems file name>\n", argv[0]);
        exit(1);
    }
    
    
    /** 1. 파일 읽어오기
     * 파일에는 여러 줄의 수식이 있다.
     */
    
    FILE *fp = fopen(argv[1], "rt");
    if (fp == NULL) {
        printf("Error : math problem file does not exist\n");
        exit(1);
    }
    
    
    /** 2. 필요한 메모리 동적할당
     * 여러 수식을 계산할 것이기에, 필요한 메모리를 동적으로 할당해준다.
     */
    
    // 수식을 저장할 char 배열
    char **lines = calloc(sizeof(char *), MAX_LINE);
    
    for (int i = 0; i < 100; i++) {
        lines[i] = calloc(sizeof(char), MAX_LINE_LEN);
    }
    
    // 정답을 저장할 int 배열
    int *answers = calloc(sizeof(int), MAX_LINE);
    
    
    /** 3. 동적할당 한 메모리에 수식 저장 */
    int count = 0;
    
    while (1) {
        char buf[MAX_LINE_LEN];
        memset(buf, 0, sizeof(char) * MAX_LINE_LEN);
        
        char *readline = fgets(buf, MAX_LINE_LEN, fp);
        buf[strcspn(buf, "\n\r")] = 0;
        if (readline == NULL) {
            break;
        }
        
        strncpy(lines[count++], buf, strlen(buf));
    }
    
    
    /** 4. 값 계산 */
    for (int i = 0; i < count; i++) {
        answers[i] = calc(lines[i]);

#if DEBUG
        printf("==============\n");
#endif
    
    }
    
    
    /** 5. 값 출력 */
    int digit = countdigits(count);
    
    for (int i = 0; i < count; i++) {
        if (answers[i] < 0) { // 에러 발생했을 때, 이 프로그램에서 정답은 절대 음수가 나올 수 없다.
            printf("%0*d. %s : Error %d\n", digit, i + 1, lines[i], answers[i]);
        }
        else {
            printf("%0*d. %s = %d\n", digit, i + 1, lines[i], answers[i]);
        }
        
    }
    
    
    /** 6. 동적할당 된 메모리 해제 */
    free(answers);
    
    for (int i = 0; i < MAX_LINE; i++) {
        free(lines[i]);
    }
    
    free(lines);
    
    
    return 0;
}


int countdigits(int number) {
    int digits = 0;
    
    while (number != 0) {
        number /= 10;
        digits++;
    }
    
    return digits;
}


/** get_token은 공백도 처리 가능하나, 숫자 사이에 공백이 있을 경우 에러 발생
 *  ex) 34 + 5 (O)
 *      3 4 +5 (X) -> 에러처리
 */
void get_token() {
// next token --> token
// number value --> num
    token = NOTHING;
    
    /** 공백은 무조건 무시 */
    while (subptr[0] == ' ') {
        token = NOTHING;
        
        subptr++;
    }
    // 이 이후에는 무조건 공백이 아닌 문자가 주어진다.

#if DEBUG
    printf("%c\n", subptr[0]);
#endif
    
    /** 어떤 상황인지 판단하여 token 설정 */
    if (isdigit(subptr[0])) { // 숫자일 때
        token = NUMBER;
        
        memset(numbuf, 0, MAX_LINE_LEN);
        numbufprog = 0;
        
        numbuf[numbufprog++] = subptr[0];
        subptr++;
        
        while (isdigit(subptr[0])) { //
            numbuf[numbufprog++] = subptr[0];
            subptr++;
        }
        
        num = (int) strtol(numbuf, NULL, 10);
    }
    else if (subptr[0] == '+') {
        token = PLUS;
        subptr++;
    }
    else if (subptr[0] == '*') {
        token = STAR;
        subptr++;
    }
    else if (subptr[0] == '(') {
        token = LPAREL;
        subptr++;
    }
    else if (subptr[0] == ')') {
        token = RPAREL;
        subptr++;
    }
    else if (subptr[0] == 0) {
        token = END;
        subptr++;
    }
    else {
        token = NOTHING;
        subptr++;
    }
    
    /**
     * 중복 가능 토큰 : (, )
     * 중복 불가능 토큰 : +, *, NOTHING
     */
    if ((token == PLUS || token == STAR || token == NOTHING) && (token == token_prev)) {
        token = NOTHING;
    }
    
    token_prev = token;
}

int calc(char *line) {
    subptr = line; // 처음 시작시 string 전체를 substring으로 생각
    
    int result = 0;
    
    get_token();
    int cresult = expression();
    
    if (cresult < 0) {
        return cresult;
    }
    
    if (token != END) {
        return errorhdlr(3);
    }
    else {
        result = cresult;
        return result;
    }
}

int expression() {
    int eresult = 0;
    eresult = term();
    
    if (eresult < 0) {
        return eresult;
    }
    
    while (token == PLUS) {
        get_token();
        
        int tresult = term();
        if (tresult < 0) {
            return tresult;
        }
        
        eresult += tresult;
    }
    
    return eresult;
}

int term() {
    int tresult = 0;
    tresult = factor();
    
    if (tresult < 0) {
        return tresult;
    }
    
    while (token == STAR) {
        get_token();
        
        int fresult = factor();
        if (fresult < 0) {
            return fresult;
        }
        
        tresult *= fresult;
    }
    
    return tresult;
}

int factor() {
    int fresult = 0;
    
    if (token == NUMBER) {
        fresult = num;
        get_token();
    }
    else if (token == LPAREL) {
        get_token();
        
        int eresult = expression();
        if (eresult < 0) {
            return eresult;
        }
        
        fresult = eresult;
        
        if (token == RPAREL) {
            get_token();
        }
        else {
            return errorhdlr(2);
        }
    }
    else {
        return errorhdlr(1);
    }
    
    return fresult;
}

/** 개선 필요 */
int errorhdlr(int i) {
    switch (i) {
        case 1:
            return -1;
        case 2:
            return -2;
        case 3:
            return -3;
        default:;
    }
}