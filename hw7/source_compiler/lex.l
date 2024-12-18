digit           [0-9]
letter          [a-zA-Z_]
delim           [ \t]
line            [\n]
ws              {delim}+

%{
#include "common_header.h"
#include "y.tab.h"

/** y.tab.c */
extern YYSTYPE yylval;

/** syntax_analysis.c */
extern int line_no;
extern A_ID *current_id;

////////////////////////////////
char *makeString(char *s);
int checkIdentifier(char *s);
%}

%%
{ws}                            { }
{line}                          { line_no++; }
auto                            { return(AUTO_SYM); }
break                           { return(BREAK_SYM); }
case                            { return(CASE_SYM); }
continue                        { return(CONTINUE_SYM); }
default                         { return(DEFAULT_SYM); }
do                              { return(DO_SYM); }
else                            { return(ELSE_SYM); }
enum                            { return(ENUM_SYM); }
for                             { return(FOR_SYM); }
if                              { return(IF_SYM); }
return                          { return(RETURN_SYM); }
sizeof                          { return(SIZEOF_SYM); }
static                          { return(STATIC_SYM); }
struct                          { return(STRUCT_SYM); }
switch                          { return(SWITCH_SYM); }
typedef                         { return(TYPEDEF_SYM); }
union                           { return(UNION_SYM); }
while                           { return(WHILE_SYM); }
"++"                            { return(PLUSPLUS); }
"--"                            { return(MINUSMINUS); }
"->"                            { return(ARROW); }
"<"                             { return(LSS); }
">"                             { return(GTR); }
"<="                            { return(LEQ); }
">="                            { return(GEQ); }
"=="                            { return(EQL); }
"!="                            { return(NEQ); }
"&&"                            { return(AMPAMP); }
"||"                            { return(BARBAR); }
"..."                           { return(DOTDOTDOT); }
"("                             { return(LP); }
")"                             { return(RP); }
"["                             { return(LB); }
"]"                             { return(RB); }
"{"                             { return(LR); }
"}"                             { return(RR); }
":"                             { return(COLON); }
"."                             { return(PERIOD); }
","                             { return(COMMA); }
"!"                             { return(EXCL); }
"*"                             { return(STAR); }
"/"                             { return(SLASH); }
"%"                             { return(PERCENT); }
"&"                             { return(AMP); }
";"                             { return(SEMICOLON); }
"+"                             { return(PLUS); }
"-"                             { return(MINUS); }
"="                             { return(ASSIGN); }

{digit}+                        { yylval = atoi(yytext); return(INTEGER_CONSTANT); }        // integer_constant인 경우   yylval은 정수 값
{digit}+\.{digit}+              { yylval = makeString(yytext); return(FLOAT_CONSTANT); }    // float_constant인 경우     yylval은 스트링 주소
{letter}({letter}|{digit})*     { return(checkIdentifier(yytext)); }                        // identifier or type_identifier -> checkIdentifier()
\"([^"\n]|\\["\n])*\"           { yylval = makeString(yytext); return(STRING_LITERAL); }    // string_literal인 경우     yylval은 스트링 주소
\'([^'\n]|\'\')\'               { yylval = *(yytext + 1); return(CHARACTER_CONSTANT); }     // character_constant인 경우 yylval은 문자 값

"//"[^\n]*                      { }  // 한 줄 짜리 주석처리
%%

char *makeString(char *s) {
	char *t;
	t = (char *)malloc(strlen(s) + 1);
	strcpy(t, s);

	return (t);
}

// 일반 identifier인지, type identifier인지
int checkIdentifier(char *s) {
	A_ID *id;
	id = current_id; // current id : 현재 스캔한 id

	while(id) {
		if (!strcmp(id->name, s)) { // 현재 id->name과 입력된 string이 같을 때
			break; /** case 1 : 해당 identifier가 이미 선언되었음 */
		}

		id = id->prev; // 현재 id->name과 입력된 string이 같지 않으면 포인터 뒤로 이동
	}
	/** case 2 : 끝까지 거슬러 올라갔는데도 같은 값이 없어서 0을 가짐 = 해당 string이 identifier로 처음 나옴*/

	if (id == 0) { /** case 2 */
        yylval = makeString(s);
		return IDENTIFIER;
	}
	else { /** case 1 */
	    if (id->kind == ID_TYPE) { // 거슬러 올라갔는데 typedef로 정의한 type이면
		    yylval = id->type; // yylval은 id->type의 스트링 주소
		    return TYPE_IDENTIFIER; // TYPE_IDENTIFIER 반환
	    }
	    else { // 거슬러 올라갔는데 단순 identifier이면
		    yylval = id->name; // yylval은 id->name의 스트링 주소
		    return IDENTIFIER; // IDENTIFIER 반환
	    }
    }

	return (IDENTIFIER);
}