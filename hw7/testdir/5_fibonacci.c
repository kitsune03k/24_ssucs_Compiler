int fibonacci(int x){
    int a, b, i, ret;
    a = 0; // 0항
    b = 1; // 1항
    
    if (x < 0){
        return -1;
    }
    else if (x == 0){
        return a;
    }
    else if (x == 1){
        return b;
    }
    else {
        for(i = 2; i <= x; i++){
            if(i%2){
                b = b + a;
            }
            else{
                a = a + b;
            }
            
            if(i == x){
                if (a > b){
                    return a;
                }
                else{
                    return b;
                }
            }
        }
    }
}

int main(){
   int i;
   
   for(i=1; i<=10; i++){
        printf("F(%d) = %d\n", i, fibonacci(i));
   }
}