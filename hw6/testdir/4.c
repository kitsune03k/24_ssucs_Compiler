int main() {
    int a, b, r, i;
    a = 10;
    
    if (a % 2 == 0) {
        b = 11;
    }
    else {
        b = 23;
    }
    
    i = 0;
    r = 100;
    
    while (i < b) {
        r = r + 1;
        i++;
    }
    
    printf("%d", r);
    
    for( ; i>0; i--){
        r = r - 1;
    }
    
    printf("%d", r);
}