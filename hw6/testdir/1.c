typedef struct __ns{
    int si;
    float sf;
} nicestruct;

typedef union __nu{
    int ui;
    float uf;
} niceunion;

// global variable
int g_i;
float g_f;
char g_c;
char *g_str;
nicestruct g_SS;
niceunion g_UU;

int main(){
    // local variable
    int l_i;
    float l_f;
    char l_c;
    char *l_str;
    nicestruct l_SS;
    niceunion l_UU;
    
    // assign global variable
    g_i = 1;
    g_f = 3.4;
    g_str = "this is global variable string";
    g_SS.si = 7;
    g_SS.sf = 8.9;
    g_UU.ui = 11;
    g_UU.uf = 12.34;

    // assign local variable
    l_i = 2;
    l_f = 5.6;
    l_str = "this is local variable string";
    l_SS.si = 9;
    l_SS.sf = 10.234;
    l_UU.ui = 15;
    l_UU.uf = 16.78;
}