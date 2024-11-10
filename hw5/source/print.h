#include "common_header.h"

extern A_TYPE *int_type, *float_type, *char_type, *void_type, *string_type;

void print_node(A_NODE *, int);

void print_space(int);

void print_ast(A_NODE *);

void prt_program(A_NODE *, int);

void prt_initializer(A_NODE *, int);

void prt_arg_expr_list(A_NODE *, int);

void prt_statement(A_NODE *, int);

void prt_statement_list(A_NODE *, int);

void prt_for_expression(A_NODE *, int);

void prt_expression(A_NODE *, int);

void prt_STRING(char *, int);

void prt_integer(int, int);

void prt_A_TYPE(A_TYPE *, int);

void prt_A_ID_LIST(A_ID *, int);

void prt_A_ID(A_ID *, int);

void prt_A_ID_NAME(A_ID *, int);