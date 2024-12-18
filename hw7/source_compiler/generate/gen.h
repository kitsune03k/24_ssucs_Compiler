#include <stdio.h>
#include <string.h>
#include "../common_header.h"

typedef enum op {
    OP_NULL, LOD, LDX, LDXB, LDA, LITI, STO, STOB, STX, STXB,
    SUBI, SUBF, DIVI, DIVF, ADDI, ADDF, OFFSET, MULI, MULF, MOD,
    LSSI, LSSF, GTRI, GTRF, LEQI, LEQF, GEQI, GEQF, NEQI, NEQF, EQLI, EQLF,
    NOT, OR, AND, CVTI, CVTF, JPC, JPCR, JMP, JPT, JPTR, INT,
    INCI, INCF, DECI, DECF, SUP, CAL, ADDR, RET, MINUSI, MINUSF, CHK,
    LDI, LDIB, POP
} OPCODE;

void code_generation(A_NODE *);

void gen_literal_table();

void gen_program(A_NODE *);

void gen_expression(A_NODE *);

void gen_expression_left(A_NODE *);

void gen_arg_expression(A_NODE *);

void gen_statement(A_NODE *, int, int);

void gen_statement_list(A_NODE *, int, int);

void gen_declaration_list(A_ID *);

void gen_declaration(A_ID *);

void gen_code_i(OPCODE, int, int);

void gen_code_f(OPCODE, int, float);

void gen_code_s(OPCODE, int, char *);

void gen_code_l(OPCODE, int, int);

void gen_label_number(int);

void gen_label_name(char *); // 함수 명에만 사용

void gen_error(int, int, char*);

int get_label();

/** 초기화는 강의에서 아예 다루지 않는다 약속했다 */
void gen_initializer_global(A_NODE *, A_TYPE *, int);

void gen_initializer_local(A_NODE *, A_TYPE *, int);