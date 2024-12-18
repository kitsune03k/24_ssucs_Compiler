int gcd(int x, int y) {
    int a, b, tmp;
    a = x;
    b = y;
    
    while (b != 0) {
        tmp = a % b;
        a = b;
        b = tmp;
    }
    
    return a;
}

int lcm(int x, int y) {
    int g;
    g = gcd(x, y);
    
    return x*y/g;
}

void main() {
    int a, b;
    a = 15;
    b = 50;
    
    printf("gcd(%d, %d) = %d\n", a, b, gcd(a, b));
    printf("lcm(%d, %d) = %d\n", a, b, lcm(a, b));
}