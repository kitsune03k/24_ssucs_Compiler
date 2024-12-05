#include <stdio.h>

#define NL printf("\n");

extern int earray[100];
extern int ecount;

void earrayInit(){
    for(int i=0; i<100; i++){
        earray[i] = -1;
    }
    int error_case[] = {
            13, 18, 19, 21, 24, 27, 28, 29, 31, 32,
            34, 35, 37, 38, 39, 40, 49, 50, 51, 57,
            58, 59, 60, 71, 72, 73, 74, 80, 81, 82,
            83, 84, 85, 86, 89, 90, 93
    };
    
    for(int i=0; i<sizeof(error_case)/sizeof(int); i++){
        earray[error_case[i]] = 0;
    }
}

void earrayPrint() {
    printf("    ");
    for (int i = 0; i < 10; i++) {
        printf("%4d", i);
    }
    NL;
    
    for (int i = 0; i < 10; i++) {
        printf("%4d", i * 10);
        for (int j = 0; j < 10; j++) {
            if (earray[10 * i + j] < 0) {
                printf("    ");
            }
            else {
                if (earray[10 * i + j]) {
                    printf("   O");
                    ++ecount;
                }
                else {
                    printf("   X");
                }
            }
        }
        NL;
    }
    
    printf("%.2f%%\n", (float)ecount/37.00 * 100);
}
