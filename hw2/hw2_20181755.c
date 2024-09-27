#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <stdbool.h>


/******************
 * 디버그 관련 *
 ******************/
#define DEBUG 0
#if DEBUG
int debugrec = 0;
char *tokword[] = {"NOTHING", "NUMBER", "PLUS", "MINUS", "STAR", "SLASH", "LPAREL", "RPAREL", "END"};
#endif


/******************
 * 선언 & 정의 *
 ******************/
#define MAX_LINE 1000 // 최대 수식의 갯수, 임의로 정함
#define MAX_LINE_LEN 256 // 수식 최대의 길이, 임의로 정함
#define PRECISION 3 // float의 정밀도, 소숫점 n번째 자리까지, 임의로 정함

typedef enum {
    NOTHING,    // 공백, 그 외 기타
    NUMBER,     // 수 (정수 or 실수)
    PLUS,       // '+'
    MINUS,      // '-'
    STAR,       // '*'
    SLASH,      // '/'
    LPAREL,     // '('
    RPAREL,     // ')'
    END,        // EOF
} token_type; // enum에서 처음을 NULL로 두면 오류가 난다.

typedef enum {
    INT,
    FLOAT,
} num_type;

typedef union {
    int i;
    float f;
} intfloat;

typedef struct {
    num_type t;
    intfloat x;
    int e; /** calc()의 마지막에만 수정 */
} val;

const val VALDFLT = {INT, 0, 0};


/******************
 * 프로그램내에서 공유해야 하는 전역변수 *
 ******************/

// 1. 토큰
token_type token; // 토큰의 종류를 저장
token_type tokenprev; // 숫자 이외 토큰 중복 방지

// 2. 스트링
char *suborigin; // substring의 처음 시작 -> 조작된 '0'
char *subptr; // substring 을 가리키는 포인터

// 3. 숫자
intfloat num; // 파싱하여 나온 숫자 임시 저장
num_type numtype; // 파싱하여 나온 숫자의 종류
char numbuf[MAX_LINE_LEN]; // 여러자리 정수 계산시 임시 저장하는 버퍼
int numbufprog; // 상기 버퍼의 사용량

// 4. 에러
int errstatus; // 에러 상태, 0이 아니면 비정상
#define RETERR return VALDFLT
#define EXITi(errstatus) if(errstatus) RETERR


/******************
 * 함수 *
 ******************/

// 1. recursive-descent parser 핵심 함수

void yylex_number(); // 수를 파싱하는 코드가 너무 길어져서 따로 분리

void yylex();

val expression();

val term();

val factor();


// 2. 수 관련 함수 - 모든 수를 일단 float으로 다룬 후, 변환 가능하면 정수로 변환

void fconv(val lval, val rval, float *tmp1, float *tmp2);

float fcalc(float tmp1, float tmp2, token_type op);

val fcani(val r);


// 3. 편의를 위한 함수

val calc(char *line); // 강의교안 pseudo code의 main()

int countdigits(int number); // 10 degit 자릿수 계산

void printerr(int ecode); // 에러 출력


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
    
    // 정답을 저장할 val 배열
    val *answers = calloc(sizeof(val), MAX_LINE);
    
    
    /** 3. 동적할당 한 메모리에 수식 저장 */
    int count = 0;
    
    while (1) {
        char buf[MAX_LINE_LEN];
        memset(buf, 0, sizeof(char) * MAX_LINE_LEN);
        buf[0] = '0';
        
        char *readline = fgets(buf + 1, MAX_LINE_LEN - 1, fp);
        buf[strcspn(buf, "\n\r")] = 0;
        if (readline == NULL) {
            break;
        }
        
        if(buf[1] == '#' || buf[1] == '\0'){
            continue;
        }
        
        int lidx = 0;
        for(int i=0; i<strlen(buf); i++){
            if(buf[i] != ' '){
                lines[count][lidx++] = buf[i];
            }
        }
        
        count++;
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
    
    float precision = powf(10, PRECISION);
    
    for (int i = 0; i < count; i++) {
        printf("%0*d. %s = ", digit, i + 1, lines[i] + 1);
        
        if (answers[i].e) { // 에러 발생했을 때
            printerr(answers[i].e);
        }
        else {
            if (answers[i].t == INT) {
                printf("%d\n", answers[i].x.i);
            }
            else {
                printf("%.*f\n", PRECISION,
                       (roundf(answers[i].x.f * precision) / precision));
            }
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


// 1. recursive-descent parser 핵심 함수

void yylex_number() {
    memset(numbuf, 0, MAX_LINE_LEN);
    numbufprog = 0;
    
    // 실질적인 숫자 읽기 시작
    numtype = INT;
    bool everdot = false;
    
    while (isdigit(subptr[0])) {
        numbuf[numbufprog++] = subptr[0];
        subptr++;
        
        if (subptr[0] == '.') {
            // 정수가 아닌 실수일 때
            
            // .의 이전이 조작된 0일 때
            if (subptr[-1] == '0' && subptr - 1 == suborigin) {
                token = NOTHING;
                errstatus = -1;
                return;
            }
            
            if (!everdot) {
                // 한 NUMBER에서 처음 나오는 '.'
                everdot = true;
                numtype = FLOAT;
                numbuf[numbufprog++] = subptr[0]; // '.'도 버퍼로 복사
                subptr++;
                
                if(!isdigit(subptr[0])){
                    token = NOTHING;
                    errstatus = -1;
                    return;
                }
            }
            else {
                // 한 NUMBER에서 두 번째 나오는 '.'
                token = NOTHING;
                errstatus = -1; // factor가 제대로 되지 않은 상황
                return;
            }
        }
    }
    
    if (numtype == INT) {
        num.i = (int) strtol(numbuf, NULL, 10);
    }
    else {
        num.f = strtof(numbuf, NULL);
    }
}

void yylex() {
// next token --> token
// number value --> num
    token = NOTHING;

#if DEBUG
    printf("%c, ", subptr[0]);
#endif
    
    /** 어떤 상황인지 판단하여 token 설정 */
    if (isdigit(subptr[0])) { // 수일 때
        token = NUMBER;
        yylex_number(); // subptr++은 yylex_number()의 마지막에서 이루어짐
    }
    else if (subptr[0] == '+') {
        token = PLUS;
        subptr++;
    }
    else if (subptr[0] == '-') {
        token = MINUS;
        subptr++;
    }
    else if (subptr[0] == '*') {
        token = STAR;
        subptr++;
    }
    else if (subptr[0] == '/') {
        token = SLASH;
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
        errstatus = -1;
        subptr++;
    }
    
    /**
     * 중복 가능 토큰 : (, )
     * 이외에는 전부 중복 불가능
     */
    if (!(token == LPAREL || token == RPAREL) && (token == tokenprev)) {
        token = NOTHING;
    }


#if DEBUG
    printf("(tokenprev, token) : (%s, %s)\n", tokword[tokenprev], tokword[token]);
#endif
    
    tokenprev = token;
}

val expression() {

#if DEBUG
    debugrec++;
    for (int i = 0; i < debugrec; i++) {
        printf("    ");
    }
    printf("** expression() **\n");
#endif
    
    val lval = VALDFLT;
    lval = term();
    token_type op = token;
    
    EXITi (errstatus);
    
    while (token == PLUS || token == MINUS) {
        yylex();
        val rval = term();
        
        float tmp1 = 0.0f;
        float tmp2 = 0.0f;
        
        fconv(lval, rval, &tmp1, &tmp2);
        
        val rslt = VALDFLT;
        rslt.t = FLOAT;
        rslt.x.f = fcalc(tmp1, tmp2, op);
        
        // 정수로 변환이 가능할 경우 변환해줌
        lval = fcani(rslt);
    }

#if DEBUG
    for (int i = 0; i < debugrec; i++) {
        printf("    ");
    }
    printf("** ~expression() **\n");
    debugrec--;
#endif
    
    return lval;
}

val term() {

#if DEBUG
    debugrec++;
    for (int i = 0; i < debugrec; i++) {
        printf("    ");
    }
    printf("** term() **\n");
#endif
    
    val lval = VALDFLT;
    lval = factor();
    token_type op = token;
    
    EXITi(errstatus);
    
    while (token == STAR || token == SLASH) {
        yylex();
        val rval = factor();
        
        float tmp1 = 0.0f;
        float tmp2 = 0.0f;
        
        fconv(lval, rval, &tmp1, &tmp2);
        
        /** dif by zero 에러 처리 */
        if (op == SLASH) {
            if ((rval.t == INT && rval.x.i == 0) ||
                (rval.t == FLOAT && rval.x.f == 0.0f)) {
                errstatus = -4;  // div by zero
                RETERR;
            }
        }
        
        val rslt = VALDFLT;
        rslt.t = FLOAT;
        rslt.x.f = fcalc(tmp1, tmp2, op);
        
        // 정수로 변환이 가능할 경우 변환해줌
        lval = fcani(rslt);
        
        op = token;
    }

#if DEBUG
    for (int i = 0; i < debugrec; i++) {
        printf("    ");
    }
    printf("** ~term() **\n");
    debugrec--;
#endif
    
    return lval;
}

val factor() {

#if DEBUG
    debugrec++;
    for (int i = 0; i < debugrec; i++) {
        printf("    ");
    }
    printf("** factor() **\n");
#endif
    
    val result = VALDFLT;
    
    EXITi(errstatus);
    
    if (token == NUMBER) {
        result.t = numtype;
        
        if (numtype == INT) {
            result.x.i = num.i;
        }
        else {
            result.x.f = num.f;
        }
        yylex();
    }
    
    else if (token == LPAREL) {
        yylex();
        result = expression();
        
        if (token == RPAREL) {
            yylex();
        }
        else {
            errstatus = -2;
            RETERR;
        }
    }
    else {
        errstatus = -1;
        RETERR;
    }

#if DEBUG
    for (int i = 0; i < debugrec; i++) {
        printf("    ");
    }
    printf("** ~factor() **\n");
    debugrec--;
#endif
    
    return result;
}


// 2. 수 관련 함수

void fconv(val lval, val rval, float *tmp1, float *tmp2) {
    if (lval.t == INT) {
        *tmp1 = (float) lval.x.i;
    }
    else {
        *tmp1 = lval.x.f;
    }
    
    if (rval.t == INT) {
        *tmp2 = (float) rval.x.i;
    }
    else {
        *tmp2 = rval.x.f;
    }

#if DEBUG
    printf("fconv() : %f %f\n", *tmp1, *tmp2);
#endif

}

float fcalc(float tmp1, float tmp2, token_type op) {
    switch (op) {
        case PLUS: {
            return tmp1 + tmp2;
        }
        case MINUS: {
            return tmp1 - tmp2;
        }
        case STAR: {
            return tmp1 * tmp2;
        }
        case SLASH: {
            return tmp1 / tmp2;
        }
        default: {
            return 0.0f;
        }
    }
}

val fcani(val r) {
    val ret = VALDFLT;

#if DEBUG
    printf("fcani1() : %f\n", r.x.f);
#endif
    
    if (fmod(r.x.f, 1.0) == 0.0) {
        ret.t = INT;
        ret.x.i = (int) r.x.f;
    }
    else {
        ret.t = FLOAT;
        ret.x.f = r.x.f;
    }
    
    ret.e = r.e;

#if DEBUG
    printf("fcani2() : %f\n", ret.x.f);
#endif
    
    return ret;
}


// 3. 편의를 위한 함수

val calc(char *line) {
    subptr = line; // 처음 시작시 string 전체를 substring으로 생각
    suborigin = line;
    
    val result = VALDFLT;
    errstatus = 0;
    tokenprev = NOTHING;
    
    yylex();
    result = expression();
    
    if (errstatus) {
        val errval = {-1, 0, errstatus};
        return errval;
    }
    
    if (token != END) {
        val errval = {-1, 0, -3};
        return errval;
    }
    else {
        return result;
    }
}

int countdigits(int number) {
    int digits = 0;
    
    while (number != 0) {
        number /= 10;
        digits++;
    }
    
    return digits;
}

void printerr(int ecode) {
    printf("ERROR : ");
    
    switch (ecode) {
        case -1: {
            printf("factor is not NUMBER nor expression with PAREL");
            break;
        }
        case -2: {
            printf("PAREL not closed");
            break;
        }
        case -3: {
            printf("given expression did not end properly");
            break;
        }
        case -4: {
            printf("div by zero");
            break;
        }
        default:
            printf("UNKNOWN CRITICAL ERROR");
    }
    
    printf(" (%d)\n", ecode);
}