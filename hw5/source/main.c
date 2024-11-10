/** 주석 처리 한 곳은 syntax analysis 이외 */
#include "common_header.h"
#include "print.h"
#include "syntax_analysis.h"
#include "y.tab.h"

extern A_NODE *root;
extern int syntax_err;

/*
extern int semantic_err;
FILE *fout;

void print_sem_ast();
void semantic_analysis();
void code_generation();
 */

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
    
    /*
    semantic_analysis(root);
    if (semantic_err){
        exit(1);
    }
    
    code_generation(root);
     */
    
    exit(0);
}