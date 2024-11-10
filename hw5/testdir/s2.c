int sw(int select){
    int sel = select % 3;
    
    switch(sel) {
        case 0:
            return 100;
            break;
        case 1:
            return 101;
            break;
        case 2:
            return 102;
            break;
        default:
            return 0;
    }
}

int main(){
    int a, b;
    a = sw(1248);
    b = sw(8475);
    
    printf("%d, %d", a, b);
}