int main() {
    int i1 = 7, i2 = 3;
    
    // 단항
    int a = i1;
    int b = !i1;
    int c = ++i2;
    int d = --i2;
    int *ptr = &a;
    int e = *ptr;
    
    // 캐스팅
    float f = (float)i2;
    char g = ((char)i1)+60; // ASCII 67 = 'C'
    
    // 곱셈 관련
    int h = i1 * i2;
    int i = i1 / i2;
    int j = i1 % i2;
    
    // 덧셈 관련
    int k = i1 + i2;
    int l = i1 - i2;
    
    // 관계
    int m = (a < b);
    int n = (a > b);
    int o = (a <= b);
    int p = (a >= b);
    
    // 논리
    int q = (i1 = i2);
    int r = (i1 != i2);
    
    return 0;
}