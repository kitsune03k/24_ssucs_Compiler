int sData[101];
int sTop;
// 0 = 데이터 없음, 1~100 = 데이터 있음

void sInit() {
    int i;
    for (i = 0; i < 101; i++) {
        sData[i] = 0;
    }
    
    sTop = 0;
}

int sCount() {
    return sTop;
}

int sEmpty() {
    if (!sTop) {
        return 1;
    }
    else {
        return 0;
    }
}

int sPeek() {
    if (!sEmpty()) {
        return sData[sTop];
    }
    else {
        printf("Nothing to peek!\n");
        return -1;
    }
}

int sPop() {
    int ret;
    if (!sEmpty()) {
        ret = sData[sTop--];
        return ret;
    }
    else {
        printf("Nothing to pop!\n");
        return -1;
    }
}

void sPush(int data) {
    // 99까지
    if (sCount() < 100) {
        sData[++sTop] = data;
    }
    else {
        printf("Exceed stack limit!\n");
    }
}

void sClear() {
    sTop = 0;
    printf("Stack cleared!\n");
}

void sShow() {
    int i;
    printf("\n==== STACK ====\n");
    if (!sEmpty()) {
        for (i = sTop; i > 0; i--) {
            if (i == sTop) {
                printf(" TOP -> ");
            }
            else if (i == 1) {
                printf("BASE -> ");
            }
            else {
                printf("        ");
            }
            
            printf("%d", sData[i]);
            printf("\n");
        }
    }
    else {
        printf("Nothing to show!\n");
    }
    printf("===============\n\n");
}


int main() {
    int n, i;
    
    n = 1;
    while (n < 2024) {
        sPush(n);
        n = n * 2;
    }
    
    sShow();
    
    for (i = 0; i < 3; i++) {
        printf("%d popped\n", sPop());
    }
    
    sShow();
    
    for (i = 3; i < 10; i = i + 3) {
        n = i * 111;
        sPush(n);
        printf("%d pushed\n", n);
    }
    
    
    sShow();
    
    sClear();
    
    sShow();
}