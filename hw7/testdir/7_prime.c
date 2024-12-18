char chk[10001];

void prime(int x) {
    int i, j;
    
    for (i = 0; i < x + 1; i++) {
        chk[i] = 1;
    }
    
    chk[0] = 0;
    chk[1] = 0;
    
    for (i = 2; i * i <= x; i++) {
        if (chk[i] == 1) {
            for (j = i * i; j <= x; j = j + i) {
                chk[j] = 0;
            }
        }
    }
    
    for (i = 2; i <= x; i++) {
        if (chk[i] == 1) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
}


void main() {
    prime(95);
    prime(123);
}