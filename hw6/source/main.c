#include "common_header.h"
#include "print/print_syn.h"
#include "print/print_sem.h"
#include "analysis/syntax_analysis.h"
#include "analysis/semantic_analysis.h"
#include "y.tab.h"

#define DEBUG 1
#if DEBUG
#include "semantic_debug/semantic_debug.h"
int ecount;
int earray[100];
#endif

/** syntax_analysis.c */
extern A_NODE *root;
extern int syntax_err;

/** semantic_analysis.c */
extern int semantic_err;

int main(int argc, char *argv[]) {
    /*
    if ((fout = fopen("a.asm", "w")) == NULL) {
        printf("cannot open output file: a.asm\n");
        exit(1);
    }
     */
    
    initialize();
    yyparse();
    
    if (syntax_err) {
        printf("** Syntax Analysis Error **\nExit Program\n");
        exit(1);
    }
    print_ast(root);

#if DEBUG
    earrayInit();
#endif
    
    semantic_analysis(root);

#if DEBUG
    earrayPrint();
#endif
    
    if (semantic_err) {
        printf("** Semantic Analysis Error **\nExit Program\n");
        exit(1);
    }
    print_sem_ast(root);
    
    
    
    /*
    code_generation(root);
    */
    
    return 0;
}