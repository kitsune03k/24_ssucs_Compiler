typedef struct __ns{
    int si;
    float sf;
} nicestruct;

typedef union __nu{
    int ui;
    float uf;
} niceunion;

int fun(){
    // static variable
    static int s_i;
    static float s_f;
    static char s_c;
    static char *s_str;
    static nicestruct s_SS;
    static niceunion s_UU;
    
    // assign static variable
    s_i = 123;
    s_f = 456.78;
    s_c = 'u';
    s_str = "this is static variable string";
    s_SS.si = 9;
    s_SS.sf = 10.234;
    
    return 100;
}

int main(){
    int retfun;
    
    retfun = fun();
}