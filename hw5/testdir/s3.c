int fibo(int n) {
    if (n < 2) {
        if (n >= 0) { // n is 0 or 1
            return n;
        }
        else { // n is neg
            return -1;
        }
    }
    else {
        int f0, f1, ans, i;
        f0 = 0;
        f1 = 1;
        
        for (i = 2; i <= n; i++) {
            ans = f0 + f1;
            if (i == n) {
                return ans;
            }
            
            f0 = f1;
            f1 = ans;
        }
    }
}

int main() {
    int fibonacci_array[10];
    
    int i;
    i = 0;
    
    while (i < 10) {
        fibonacci_array[i] = fibo(i);
        i++;
    }
    
    i = 0;
    do {
        printf("fibo %d : %d\n", i, fibonacci_array[i]);
        i++;
    } while (i < 10);
}