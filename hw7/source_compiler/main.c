#include "common_header.h"
#include "print/print_syn.h"
#include "print/print_sem.h"
#include "analysis/syntax_analysis.h"
#include "analysis/semantic_analysis.h"
#include "generate/gen.h"
#include "y.tab.h"


/** syntax_analysis.c */
extern A_NODE *root;
extern int syntax_err;

/** semantic_analysis.c */
extern int semantic_err;

////////////////////////////////
FILE * fout;  // gen.c에서 사용

int main(int argc, char *argv[]) {
    fout = fopen("a.asm", "w");
    
    if (!fout) {
        printf("cannot open output file: a.asm\n");
        exit(1);
    }
    
    initialize();
    yyparse();
    
    if (syntax_err) {
        printf("** Syntax Analysis Error **\nExit Program\n");
        exit(1);
    }
    print_ast(root);
    
    semantic_analysis(root);
    
    if (semantic_err) {
        printf("** Semantic Analysis Error **\nExit Program\n");
        exit(1);
    }
    print_sem_ast(root);
    
    code_generation(root);
    
    fclose(fout);
    
    return 0;
}