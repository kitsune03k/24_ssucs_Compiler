void fun(int n) {
    int i, rc, row, col;
    
    char prev, end;
    int endcount;
    
    rc = 2;
    row = 1;
    col = 1;
    
    prev = 0;
    end = 1;
    
    endcount = 2;
    
    for (i = 1; i < n; i++) {
        if (endcount == rc) {
            if (rc % 2 == 0) {
                col++;
            }
            else {
                row++;
            }
            
            rc++;
            endcount = 2;
        }
        else {
            if (rc % 2 == 0) {
                col++;
                row--;
            }
            else {
                row++;
                col--;
            }
            endcount++;
        }
    }
    
    printf("%d/%d", row, col);
}

int main() {
    int i;
    
    for (i = 1; i < 10; i++) {
        printf("Answer %d : ", i);
        fun(i);
        printf("\n");
    }
}