struct pos {
    int xpos;
    int ypos;
};

void fun(int t) {
    int i;
    for (i = 0; i < t; i++) {
        printf("function called! %d\n", i + 1);
    }
}

int main() {
    struct pos p = {37, 80};
    struct pos *pp = &p;
    int a, b;
    
    int int_array[4] = {
            1, 2, 4, 8
    }; // 배열
    
    fun(3); // 함수호출
    
    a = p.xpos; // 구조체맴버 접근 (period)
    b = pp->ypos; // 구조체맴버 접근 (arrow)
    
    a++; // 후위증가
    b--; // 후위감소
    
    return 0;
}