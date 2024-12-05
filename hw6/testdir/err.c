void f1() {
    {
        char *str;
        int result;
        
        str = "Hello, World!";
        result = -str; // case 13, 58 - minus는 arithmetic type에만 적용 가능
    }
    
    {
        int a;
        int x, y, z;
        a = 0;
        y = 10;
        
        switch (a) {
            case z:
                // case 19, 51 - case label은 constant expression
                ;
            case y + 1: // case 19, 18, 51 - y+1은 constant expression이 아님
                ;
            default:;
        }
    }
    
    {
        int notfunction, i;
        notfunction = 1;
        i = notfunction(100); // case 21, 58 - function이 아닌데 function처럼 호출
    }
    
    {
        struct nicestruct {
            int i;
        };
        
        int num, sum;
        struct nicestruct ns, nns;
        
        num = 12;
        ns.i = 34;
        
        sum = num + ns; // case 24, 58 - struct는 덧셈 가능하지 않음
        
        nns = !ns; // case 27, 58 - struct는 not 가능하지 않음 (scalar type만 가능)
    }
    
    {
        int a, result1, result2;
        int *b;
        
        a = 1;
        b = &a;
        
        result1 = a / b; // case 28, 58 - div 연산은 arithmetic type이 필요함
        result2 = a % b; // case 29, 58 - mod 연산은 integral type이 필요함
    }
    
    {
        int x, y, value;
        
        value = *(x + y); // case 31, 58 - 역참조 연산에는 포인터가 필요함
        
        y[4] = 1; // case 32, 58 - 배열 연산에는 배열이 필요함
        // 좀 더 정확히 말하자면, arr[i] = *(arr+i)이기 때문
    }
}

int fun(int x, float y) {
    return 0;
}

void gun() {
    return;
}

void f2() {
    {
        int a, b;
        a = fun(1, 2, 3); // case 34 - 너무 많은 매개변수
        b = fun(4); // case 35 - 너무 적은 매개변수
    }
    
    {
        struct nicestruct {
            int i;
        };
        
        int i;
        struct nicestruct ns;
        
        i = 0;
        ns.f = 1.00;
        // case 37 - ns에 존재하지 않는 필드 접근
        // case 60, 58 - 추후에 다른 코드로 설명
        
        i = nicestruct + 100; // case 38 - nicestruct는 identifier가 아님
        
        i = sizeof(fun); // case 39 - 함수는 sizeof의 대상이 아님
    }
    
    {
        int a, result;
        int *b;
        int array[2];
        
        result = a < b; // case 40 - int와 int*형은 비교가 불가능
        
        for (a = 0; gun(); a++) { // case 49 - for문의 중간 조건은 scalar 타입이 필요함
            printf("hello");
        }
    }
    
    {
        float x;
        x = 1.2;
        switch (x) { // case 50 - switch은 integral type(int, char, enum)을 필요로 함
            case 1:;
            default:;
        }
    }
    
    // case 57은 만들어내지 못했습니다
    
    {
        int i;
        float f;
        int *ptr;
        
        f = 123.45;
        
        ptr = (int) i; // case 58 - float -> 포인터 캐스팅 불가
    }
}

int *f3() {
    float f;
    f = 456.789;
    
    return f; // case 57 - return시 float -> 포인터 묵시적 형변환 불가
}

// case 59는 만들지 못했습니다

void f4() {
    {
        ++1; // case 60 - 1은 lvalue가 아님
    }
    
    {
        int i;
        switch (i) {
            default:;
        }
        
        case 1: // case 71 - case label이 switch문 안에 쓰이지 않음
            ;
        default: // case 72 - default label이 switch문 안에 쓰이지 않음
            ;
    }
    
    {
        break; // case 73 - break가 loop문이나 switch문 안에 쓰이지 않음
        continue; // case 74 - continue가 loop문 안에 쓰이지 않음
        
        while (0) { ;
        }
    }
    
    // case 80은 만들지 못했습니다
    
    {
        enum e {MON = 1.4, TUE, WED}; // case 81 - enum은 integer type이어야 함
        
        int arr1[4.5]; // case 82, 86 - array의 사이즈는 interger type이어야 함
        
        void arr2[7]; // case 83 - void array는 만들 수 없음
        
        enum e EE = MON;
    }
    
    {
        struct s {
            void v;
        };
        
        struct s nicestruct; // case 84 - void는 struct or union의 멤버가 될 수 없음
    }
}

// case 85, 89는 만들지 못했습니다

// case 90, 93은 만들려 해도 만들기가 어려웠습니다