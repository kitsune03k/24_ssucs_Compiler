/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"

#include "common_header.h"
#include "analysis/syntax_analysis.h" // prototype 선언

/** syntax_analysis.c */
extern A_TYPE *int_type;
extern A_NODE *root;

extern int line_no;
extern A_ID *current_id;
extern int current_level;

extern int syntax_err;

////////////////////////////////
int yywrap();
void yyerror(char *s);
extern int yylex();

#line 91 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "y.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_TYPE_IDENTIFIER = 4,            /* TYPE_IDENTIFIER  */
  YYSYMBOL_FLOAT_CONSTANT = 5,             /* FLOAT_CONSTANT  */
  YYSYMBOL_INTEGER_CONSTANT = 6,           /* INTEGER_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 7,         /* CHARACTER_CONSTANT  */
  YYSYMBOL_STRING_LITERAL = 8,             /* STRING_LITERAL  */
  YYSYMBOL_PLUS = 9,                       /* PLUS  */
  YYSYMBOL_PLUSPLUS = 10,                  /* PLUSPLUS  */
  YYSYMBOL_MINUS = 11,                     /* MINUS  */
  YYSYMBOL_MINUSMINUS = 12,                /* MINUSMINUS  */
  YYSYMBOL_BAR = 13,                       /* BAR  */
  YYSYMBOL_AMP = 14,                       /* AMP  */
  YYSYMBOL_BARBAR = 15,                    /* BARBAR  */
  YYSYMBOL_AMPAMP = 16,                    /* AMPAMP  */
  YYSYMBOL_ARROW = 17,                     /* ARROW  */
  YYSYMBOL_SEMICOLON = 18,                 /* SEMICOLON  */
  YYSYMBOL_LSS = 19,                       /* LSS  */
  YYSYMBOL_GTR = 20,                       /* GTR  */
  YYSYMBOL_LEQ = 21,                       /* LEQ  */
  YYSYMBOL_GEQ = 22,                       /* GEQ  */
  YYSYMBOL_EQL = 23,                       /* EQL  */
  YYSYMBOL_NEQ = 24,                       /* NEQ  */
  YYSYMBOL_DOTDOTDOT = 25,                 /* DOTDOTDOT  */
  YYSYMBOL_LP = 26,                        /* LP  */
  YYSYMBOL_RP = 27,                        /* RP  */
  YYSYMBOL_LB = 28,                        /* LB  */
  YYSYMBOL_RB = 29,                        /* RB  */
  YYSYMBOL_LR = 30,                        /* LR  */
  YYSYMBOL_RR = 31,                        /* RR  */
  YYSYMBOL_PERIOD = 32,                    /* PERIOD  */
  YYSYMBOL_COMMA = 33,                     /* COMMA  */
  YYSYMBOL_EXCL = 34,                      /* EXCL  */
  YYSYMBOL_STAR = 35,                      /* STAR  */
  YYSYMBOL_SLASH = 36,                     /* SLASH  */
  YYSYMBOL_PERCENT = 37,                   /* PERCENT  */
  YYSYMBOL_ASSIGN = 38,                    /* ASSIGN  */
  YYSYMBOL_COLON = 39,                     /* COLON  */
  YYSYMBOL_AUTO_SYM = 40,                  /* AUTO_SYM  */
  YYSYMBOL_STATIC_SYM = 41,                /* STATIC_SYM  */
  YYSYMBOL_TYPEDEF_SYM = 42,               /* TYPEDEF_SYM  */
  YYSYMBOL_STRUCT_SYM = 43,                /* STRUCT_SYM  */
  YYSYMBOL_ENUM_SYM = 44,                  /* ENUM_SYM  */
  YYSYMBOL_SIZEOF_SYM = 45,                /* SIZEOF_SYM  */
  YYSYMBOL_UNION_SYM = 46,                 /* UNION_SYM  */
  YYSYMBOL_IF_SYM = 47,                    /* IF_SYM  */
  YYSYMBOL_ELSE_SYM = 48,                  /* ELSE_SYM  */
  YYSYMBOL_WHILE_SYM = 49,                 /* WHILE_SYM  */
  YYSYMBOL_DO_SYM = 50,                    /* DO_SYM  */
  YYSYMBOL_FOR_SYM = 51,                   /* FOR_SYM  */
  YYSYMBOL_CONTINUE_SYM = 52,              /* CONTINUE_SYM  */
  YYSYMBOL_BREAK_SYM = 53,                 /* BREAK_SYM  */
  YYSYMBOL_RETURN_SYM = 54,                /* RETURN_SYM  */
  YYSYMBOL_SWITCH_SYM = 55,                /* SWITCH_SYM  */
  YYSYMBOL_CASE_SYM = 56,                  /* CASE_SYM  */
  YYSYMBOL_DEFAULT_SYM = 57,               /* DEFAULT_SYM  */
  YYSYMBOL_YYACCEPT = 58,                  /* $accept  */
  YYSYMBOL_program = 59,                   /* program  */
  YYSYMBOL_translate_unit = 60,            /* translate_unit  */
  YYSYMBOL_external_declaration = 61,      /* external_declaration  */
  YYSYMBOL_function_definition = 62,       /* function_definition  */
  YYSYMBOL_63_1 = 63,                      /* @1  */
  YYSYMBOL_declaration_list_opt = 64,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 65,          /* declaration_list  */
  YYSYMBOL_declaration = 66,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 67,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 68,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 69,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 70,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 71,           /* init_declarator  */
  YYSYMBOL_initializer = 72,               /* initializer  */
  YYSYMBOL_initializer_list = 73,          /* initializer_list  */
  YYSYMBOL_type_specifier = 74,            /* type_specifier  */
  YYSYMBOL_struct_type_specifier = 75,     /* struct_type_specifier  */
  YYSYMBOL_76_2 = 76,                      /* @2  */
  YYSYMBOL_77_3 = 77,                      /* @3  */
  YYSYMBOL_78_4 = 78,                      /* @4  */
  YYSYMBOL_79_5 = 79,                      /* @5  */
  YYSYMBOL_struct_or_union = 80,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 81,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 82,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 83,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 84,         /* struct_declarator  */
  YYSYMBOL_enum_type_specifier = 85,       /* enum_type_specifier  */
  YYSYMBOL_86_6 = 86,                      /* @6  */
  YYSYMBOL_87_7 = 87,                      /* @7  */
  YYSYMBOL_enumerator_list = 88,           /* enumerator_list  */
  YYSYMBOL_enumerator = 89,                /* enumerator  */
  YYSYMBOL_90_8 = 90,                      /* @8  */
  YYSYMBOL_declarator = 91,                /* declarator  */
  YYSYMBOL_pointer = 92,                   /* pointer  */
  YYSYMBOL_direct_declarator = 93,         /* direct_declarator  */
  YYSYMBOL_94_9 = 94,                      /* @9  */
  YYSYMBOL_parameter_type_list_opt = 95,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 96,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 97,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 98,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 99,   /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 100,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 101, /* direct_abstract_declarator  */
  YYSYMBOL_statement_list_opt = 102,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 103,           /* statement_list  */
  YYSYMBOL_statement = 104,                /* statement  */
  YYSYMBOL_labeled_statement = 105,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 106,       /* compound_statement  */
  YYSYMBOL_107_10 = 107,                   /* @10  */
  YYSYMBOL_expression_statement = 108,     /* expression_statement  */
  YYSYMBOL_selection_statement = 109,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 110,      /* iteration_statement  */
  YYSYMBOL_for_expression = 111,           /* for_expression  */
  YYSYMBOL_expression_opt = 112,           /* expression_opt  */
  YYSYMBOL_jump_statement = 113,           /* jump_statement  */
  YYSYMBOL_arg_expression_list_opt = 114,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 115,      /* arg_expression_list  */
  YYSYMBOL_constant_expression_opt = 116,  /* constant_expression_opt  */
  YYSYMBOL_constant_expression = 117,      /* constant_expression  */
  YYSYMBOL_expression = 118,               /* expression  */
  YYSYMBOL_comma_expression = 119,         /* comma_expression  */
  YYSYMBOL_assignment_expression = 120,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 121,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 122,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 123,   /* logical_and_expression  */
  YYSYMBOL_bitwise_or_expression = 124,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 125,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 126,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 127,      /* equality_expression  */
  YYSYMBOL_relational_expression = 128,    /* relational_expression  */
  YYSYMBOL_shift_expression = 129,         /* shift_expression  */
  YYSYMBOL_additive_expression = 130,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 131, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 132,          /* cast_expression  */
  YYSYMBOL_unary_expression = 133,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 134,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 135,       /* primary_expression  */
  YYSYMBOL_type_name = 136                 /* type_name  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   415

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   312


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    33,    33,    37,    38,    42,    43,    47,    47,    52,
      53,    57,    58,    62,    66,    67,    68,    69,    73,    74,
      75,    79,    80,    84,    85,    89,    90,    94,    95,    99,
     100,   104,   105,   106,   110,   111,   110,   113,   114,   113,
     116,   120,   121,   125,   126,   130,   134,   135,   139,   143,
     143,   145,   145,   147,   151,   152,   156,   157,   157,   162,
     163,   167,   168,   172,   173,   174,   175,   175,   180,   181,
     185,   186,   190,   191,   195,   196,   200,   201,   205,   206,
     207,   211,   212,   213,   214,   215,   219,   220,   224,   225,
     229,   230,   231,   232,   233,   234,   238,   239,   243,   243,
     248,   249,   253,   254,   255,   259,   260,   261,   265,   268,
     269,   273,   274,   275,   279,   280,   284,   285,   289,   290,
     294,   298,   302,   306,   307,   311,   315,   316,   320,   321,
     325,   329,   333,   337,   338,   339,   343,   344,   345,   346,
     347,   351,   355,   356,   357,   361,   362,   363,   364,   368,
     369,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   386,   387,   388,   389,   390,   391,   392,   396,   397,
     398,   399,   400,   401,   405
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER",
  "TYPE_IDENTIFIER", "FLOAT_CONSTANT", "INTEGER_CONSTANT",
  "CHARACTER_CONSTANT", "STRING_LITERAL", "PLUS", "PLUSPLUS", "MINUS",
  "MINUSMINUS", "BAR", "AMP", "BARBAR", "AMPAMP", "ARROW", "SEMICOLON",
  "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ", "DOTDOTDOT", "LP", "RP", "LB",
  "RB", "LR", "RR", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT",
  "ASSIGN", "COLON", "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM",
  "ENUM_SYM", "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM",
  "DO_SYM", "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM",
  "SWITCH_SYM", "CASE_SYM", "DEFAULT_SYM", "$accept", "program",
  "translate_unit", "external_declaration", "function_definition", "@1",
  "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@2", "@3", "@4", "@5", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@6", "@7", "enumerator_list", "enumerator", "@8", "declarator",
  "pointer", "direct_declarator", "@9", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@10",
  "expression_statement", "selection_statement", "iteration_statement",
  "for_expression", "expression_opt", "jump_statement",
  "arg_expression_list_opt", "arg_expression_list",
  "constant_expression_opt", "constant_expression", "expression",
  "comma_expression", "assignment_expression", "conditional_expression",
  "logical_or_expression", "logical_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "bitwise_and_expression", "equality_expression", "relational_expression",
  "shift_expression", "additive_expression", "multiplicative_expression",
  "cast_expression", "unary_expression", "postfix_expression",
  "primary_expression", "type_name", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-227)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-58)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      82,  -227,  -227,  -227,  -227,  -227,    17,  -227,    37,    82,
    -227,  -227,  -227,   140,    82,    82,  -227,    48,  -227,    54,
      59,  -227,  -227,  -227,   140,    46,    95,    98,  -227,   -15,
      32,   109,  -227,  -227,   108,   118,   119,   157,   138,  -227,
    -227,   140,   286,   142,   109,  -227,   299,   150,  -227,   157,
     133,   114,  -227,  -227,  -227,   146,  -227,  -227,  -227,  -227,
    -227,   299,   340,   299,   340,   299,   147,   286,   299,   299,
     353,  -227,  -227,  -227,  -227,  -227,  -227,   180,   186,  -227,
    -227,  -227,     3,    12,  -227,   174,    56,  -227,   170,   383,
    -227,  -227,  -227,    82,   195,  -227,  -227,    39,   163,   177,
    -227,   157,  -227,  -227,   299,  -227,  -227,  -227,  -227,   104,
     200,   205,  -227,   197,  -227,  -227,   147,  -227,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,  -227,  -227,   232,   299,   299,   236,    82,   141,
     213,  -227,   221,  -227,  -227,    39,   140,    26,  -227,  -227,
     299,  -227,   364,   299,   179,  -227,  -227,   210,  -227,   299,
    -227,   286,   215,   186,  -227,    12,    12,   174,   174,   174,
     174,    56,    56,  -227,  -227,  -227,  -227,  -227,   216,   224,
    -227,   230,  -227,   211,    82,  -227,   140,   244,  -227,    51,
    -227,  -227,   209,   166,    96,  -227,  -227,  -227,  -227,  -227,
     242,   246,   245,   210,    82,   299,  -227,  -227,  -227,  -227,
     299,  -227,  -227,   249,   250,   211,   251,   253,   260,   299,
     254,   299,   243,   252,   211,  -227,  -227,  -227,  -227,  -227,
    -227,  -227,   263,  -227,  -227,  -227,  -227,  -227,   140,  -227,
    -227,  -227,   272,   274,  -227,   299,   299,   265,   299,  -227,
    -227,   283,  -227,   299,   276,   211,  -227,  -227,  -227,  -227,
    -227,  -227,   290,   291,   293,   295,   305,  -227,   297,   211,
    -227,   211,   211,   299,   211,   299,   211,  -227,   278,  -227,
     300,  -227,   310,  -227,   211,   311,   299,  -227,  -227,  -227
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    33,    18,    19,    20,    41,    51,    42,     0,     2,
       3,     5,     6,    21,    15,    14,    31,    37,    32,    53,
       0,     1,     4,    63,     0,    61,     0,    22,    23,    25,
       0,    60,    17,    16,    40,     0,     0,     0,     0,    62,
      13,     0,     0,     0,    59,    66,   118,     0,    38,     0,
      56,     0,    54,    64,    24,    25,   168,   170,   169,   171,
     172,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,   120,   121,   122,   123,   125,   126,   128,
     130,   131,   132,   133,   136,   141,   142,   145,   149,   151,
     161,    98,     8,    68,     0,   119,    35,     0,     0,     0,
      52,     0,   158,   149,     0,   152,   157,   153,   154,    76,
       0,     0,    29,     0,   156,   155,     0,   159,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   166,   167,     0,   114,     0,     0,     9,    76,
       0,    69,    70,    72,    65,     0,     0,     0,    43,    50,
       0,    55,    68,   118,    79,   174,    77,    78,   173,     0,
      28,     0,     0,   127,   129,   134,   135,   137,   138,   139,
     140,   143,   144,   146,   147,   148,   124,   165,     0,   115,
     116,     0,   164,    86,    10,    11,    21,    68,    74,    79,
      75,    67,     0,     0,     0,    46,    48,    39,    44,    58,
       0,     0,     0,    80,    68,   118,   150,    30,   160,   163,
       0,   162,   100,     0,     0,     0,     0,     0,     0,   109,
       0,     0,     0,     0,    87,    88,    90,    91,    92,    93,
      94,    95,     0,    12,    71,    73,    36,    45,     0,    84,
      81,    82,     0,     0,   117,     0,     0,     0,   109,   112,
     113,     0,   110,     0,     0,     0,    99,    89,   101,    47,
      85,    83,     0,     0,     0,     0,     0,   111,     0,     0,
      97,     0,     0,     0,     0,   109,     0,    96,   102,   105,
       0,   107,     0,   104,     0,     0,   109,   103,   106,   108
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -227,  -227,  -227,   321,  -227,  -227,  -227,  -227,  -131,     2,
    -227,  -227,  -227,   294,   -49,  -227,   -84,  -227,  -227,  -227,
    -227,  -227,  -227,   187,  -126,  -227,    99,  -227,  -227,  -227,
     287,   237,  -227,   -12,   -19,   -25,  -227,   -83,  -227,  -227,
     148,   202,  -143,  -118,  -227,  -227,  -196,  -227,   296,  -227,
    -227,  -227,  -227,  -227,  -226,  -227,  -227,  -227,  -139,   -43,
     -42,  -227,  -123,  -227,  -227,   235,   223,  -227,  -227,  -227,
     -56,  -227,    76,    15,   -13,   -23,  -227,  -227,   239
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,     8,     9,    10,    11,    43,   183,   184,    12,   139,
      14,    26,    27,    28,    71,   113,    15,    16,    47,   145,
      35,    97,    17,   147,   148,   194,   195,    18,    36,    20,
      51,    52,    99,    38,    30,    31,    93,   200,   141,   142,
     143,   155,   156,   157,   223,   224,   225,   226,   227,   138,
     228,   229,   230,   265,   251,   231,   178,   179,    94,    72,
     232,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   111
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,    29,    13,    95,    73,    44,    39,   185,   176,   201,
     140,    13,   180,   146,   202,    -7,    32,    33,   112,   247,
      19,   198,   266,    42,   110,    73,   120,   121,   257,    55,
       1,   122,   123,   124,   125,    23,   203,    21,   103,   105,
     103,   107,   103,     1,   201,   103,   103,   117,   102,   282,
     106,    34,   108,   233,    23,   114,   115,   197,    24,   270,
     289,   146,   110,   146,   165,   166,   243,   198,   109,     5,
       6,   203,     7,   277,   110,   278,   279,   187,   281,   153,
     283,    25,     5,     6,   -49,     7,     1,   244,   287,    37,
     154,   128,   129,   130,   181,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,   199,   146,
      95,    73,   207,    40,   237,   173,   174,   175,   109,    73,
     189,   242,     2,     3,     4,     5,     6,   188,     7,   238,
     152,    41,   153,   154,   196,    45,   103,    46,   -34,    25,
     186,   171,   172,    23,    23,   100,   206,   101,    48,    49,
      56,     1,    57,    58,    59,    60,    61,    62,    63,    64,
      50,    65,    95,    73,    44,    53,    24,   187,   189,   153,
       1,   -57,    91,    66,    55,    25,    25,   252,   254,    73,
      96,    68,    69,   126,    42,   127,   186,     2,     3,     4,
       5,     6,    70,     7,   149,   118,   101,   236,   167,   168,
     169,   170,   119,   262,   263,   152,   252,   153,   131,     5,
       6,   268,     7,     1,    56,   150,    57,    58,    59,    60,
      61,    62,    63,    64,   144,    65,   196,   158,   160,   212,
     161,   280,   159,   252,   234,   177,   204,    66,   205,   182,
     191,    91,   208,   209,   252,    68,    69,    23,     1,     2,
       3,     4,     5,     6,   192,     7,    70,   210,   213,   211,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   239,
     187,   249,   153,   240,   241,   245,   246,   248,   250,    25,
     253,   258,   255,   256,     2,     3,     4,     5,     6,    56,
       7,    57,    58,    59,    60,    61,    62,    63,    64,   260,
      65,   267,    56,   261,    57,    58,    59,    60,    61,    62,
      63,    64,    66,    65,   264,   269,    67,   271,   272,   273,
      68,    69,   274,   275,   276,    66,   284,   285,   286,   288,
      22,    70,   193,    68,    69,    54,    98,   259,   151,    92,
     235,   190,   164,    56,    70,    57,    58,    59,    60,    61,
      62,    63,    64,   163,    65,   162,    56,     0,    57,    58,
      59,    60,    61,    62,    63,    64,   104,    65,     1,     0,
       0,     0,     0,     0,    68,    69,     0,     0,     0,   116,
       0,     0,     0,     0,     0,    70,     0,    68,    69,     0,
     152,     0,   153,   132,     0,   133,     0,     0,    70,    25,
     134,     0,     0,     0,     2,     3,     4,     5,     6,   135,
       7,   136,     0,     0,     0,   137
};

static const yytype_int16 yycheck[] =
{
      42,    13,     0,    46,    46,    30,    25,   138,   131,   152,
      93,     9,   135,    97,   153,    30,    14,    15,    67,   215,
       3,   147,   248,    38,    66,    67,    23,    24,   224,    41,
       4,    19,    20,    21,    22,     3,   154,     0,    61,    62,
      63,    64,    65,     4,   187,    68,    69,    70,    61,   275,
      63,     3,    65,   184,     3,    68,    69,    31,    26,   255,
     286,   145,   104,   147,   120,   121,   205,   193,    66,    43,
      44,   189,    46,   269,   116,   271,   272,    26,   274,    28,
     276,    35,    43,    44,    30,    46,     4,   210,   284,    30,
     109,    35,    36,    37,   136,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   150,   193,
     153,   153,   161,    18,    18,   128,   129,   130,   116,   161,
     139,   204,    40,    41,    42,    43,    44,   139,    46,    33,
      26,    33,    28,   152,   146,    26,   159,    28,    30,    35,
     138,   126,   127,     3,     3,    31,   159,    33,    30,    30,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
       3,    14,   205,   205,   189,    27,    26,    26,   187,    28,
       4,    38,    30,    26,   186,    35,    35,   219,   221,   221,
      30,    34,    35,     9,    38,    11,   184,    40,    41,    42,
      43,    44,    45,    46,    31,    15,    33,    31,   122,   123,
     124,   125,    16,   245,   246,    26,   248,    28,    38,    43,
      44,   253,    46,     4,     3,    38,     5,     6,     7,     8,
       9,    10,    11,    12,    29,    14,   238,    27,    31,    18,
      33,   273,    27,   275,    25,     3,    26,    26,    28,     3,
      27,    30,    27,    27,   286,    34,    35,     3,     4,    40,
      41,    42,    43,    44,    33,    46,    45,    33,    47,    29,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    27,
      26,    18,    28,    27,    29,    26,    26,    26,    18,    35,
      26,    18,    39,    31,    40,    41,    42,    43,    44,     3,
      46,     5,     6,     7,     8,     9,    10,    11,    12,    27,
      14,    18,     3,    29,     5,     6,     7,     8,     9,    10,
      11,    12,    26,    14,    49,    39,    30,    27,    27,    26,
      34,    35,    27,    18,    27,    26,    48,    27,    18,    18,
       9,    45,   145,    34,    35,    41,    49,   238,   101,    43,
     192,   139,   119,     3,    45,     5,     6,     7,     8,     9,
      10,    11,    12,   118,    14,   116,     3,    -1,     5,     6,
       7,     8,     9,    10,    11,    12,    26,    14,     4,    -1,
      -1,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    45,    -1,    34,    35,    -1,
      26,    -1,    28,    10,    -1,    12,    -1,    -1,    45,    35,
      17,    -1,    -1,    -1,    40,    41,    42,    43,    44,    26,
      46,    28,    -1,    -1,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    40,    41,    42,    43,    44,    46,    59,    60,
      61,    62,    66,    67,    68,    74,    75,    80,    85,     3,
      87,     0,    61,     3,    26,    35,    69,    70,    71,    91,
      92,    93,    67,    67,     3,    78,    86,    30,    91,    92,
      18,    33,    38,    63,    93,    26,    28,    76,    30,    30,
       3,    88,    89,    27,    71,    91,     3,     5,     6,     7,
       8,     9,    10,    11,    12,    14,    26,    30,    34,    35,
      45,    72,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,    30,   106,    94,   116,   117,    30,    79,    88,    90,
      31,    33,   132,   133,    26,   133,   132,   133,   132,    67,
     118,   136,    72,    73,   132,   132,    26,   133,    15,    16,
      23,    24,    19,    20,    21,    22,     9,    11,    35,    36,
      37,    38,    10,    12,    17,    26,    28,    32,   107,    67,
      95,    96,    97,    98,    29,    77,    74,    81,    82,    31,
      38,    89,    26,    28,    92,    99,   100,   101,    27,    27,
      31,    33,   136,   123,   124,   128,   128,   130,   130,   130,
     130,   131,   131,   132,   132,   132,   120,     3,   114,   115,
     120,   118,     3,    64,    65,    66,    67,    26,    91,    92,
      99,    27,    33,    81,    83,    84,    91,    31,    82,   118,
      95,   100,   116,   101,    26,    28,   132,    72,    27,    27,
      33,    29,    18,    47,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   102,   103,   104,   105,   106,   108,   109,
     110,   113,   118,    66,    25,    98,    31,    18,    33,    27,
      27,    29,    95,   116,   120,    26,    26,   104,    26,    18,
      18,   112,   118,    26,   117,    39,    31,   104,    18,    84,
      27,    29,   118,   118,    49,   111,   112,    18,   118,    39,
     104,    27,    27,    26,    27,    18,    27,   104,   104,   104,
     118,   104,   112,   104,    48,    27,    18,   104,    18,   112
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    63,    62,    64,
      64,    65,    65,    66,    67,    67,    67,    67,    68,    68,
      68,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    74,    76,    77,    75,    78,    79,    75,
      75,    80,    80,    81,    81,    82,    83,    83,    84,    86,
      85,    87,    85,    85,    88,    88,    89,    90,    89,    91,
      91,    92,    92,    93,    93,    93,    94,    93,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     100,   101,   101,   101,   101,   101,   102,   102,   103,   103,
     104,   104,   104,   104,   104,   104,   105,   105,   107,   106,
     108,   108,   109,   109,   109,   110,   110,   110,   111,   112,
     112,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   118,   119,   120,   120,   121,   122,   122,   123,   123,
     124,   125,   126,   127,   127,   127,   128,   128,   128,   128,
     128,   129,   130,   130,   130,   131,   131,   131,   131,   132,
     132,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   134,   134,   134,   134,   134,   134,   134,   135,   135,
     135,   135,   135,   135,   136
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       1,     1,     2,     3,     1,     1,     2,     2,     1,     1,
       1,     0,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     1,     1,     0,     0,     7,     0,     0,     6,
       2,     1,     1,     1,     2,     3,     1,     3,     1,     0,
       6,     0,     5,     2,     1,     3,     1,     0,     4,     2,
       1,     1,     2,     1,     3,     4,     0,     5,     0,     1,
       1,     3,     1,     3,     2,     2,     0,     1,     1,     1,
       2,     3,     3,     4,     3,     4,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     4,     3,     0,     5,
       1,     2,     5,     7,     5,     5,     7,     5,     5,     0,
       1,     3,     2,     2,     0,     1,     1,     3,     0,     1,
       1,     1,     1,     1,     3,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       4,     1,     4,     4,     3,     3,     2,     2,     1,     1,
       1,     1,     1,     3,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: translate_unit  */
#line 33 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                     {root = makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkForwardReference();}
#line 1470 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 3: /* translate_unit: external_declaration  */
#line 37 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                           {yyval = yyvsp[0];}
#line 1476 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 4: /* translate_unit: translate_unit external_declaration  */
#line 38 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                          {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1482 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 42 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 1488 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 43 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                  {yyval = yyvsp[0];}
#line 1494 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 47 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                        {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1500 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 48 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                       {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1506 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 9: /* declaration_list_opt: %empty  */
#line 52 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
      {yyval = NIL;}
#line 1512 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 10: /* declaration_list_opt: declaration_list  */
#line 53 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                       {yyval = yyvsp[0];}
#line 1518 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 11: /* declaration_list: declaration  */
#line 57 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                  {yyval = yyvsp[0];}
#line 1524 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 12: /* declaration_list: declaration_list declaration  */
#line 58 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                   {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1530 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 13: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 62 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                                {yyval = setDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1536 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 14: /* declaration_specifiers: type_specifier  */
#line 66 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                     {yyval = makeSpecifier(yyvsp[0], NIL);}
#line 1542 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 15: /* declaration_specifiers: storage_class_specifier  */
#line 67 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                              {yyval = makeSpecifier(NIL, yyvsp[0]);}
#line 1548 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 16: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 68 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                            {yyval = updateSpecifier(yyvsp[0], yyvsp[-1], NIL);}
#line 1554 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 17: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 69 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                     {yyval = updateSpecifier(yyvsp[0], NIL, yyvsp[-1]);}
#line 1560 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 18: /* storage_class_specifier: AUTO_SYM  */
#line 73 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
               {yyval = S_AUTO;}
#line 1566 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 19: /* storage_class_specifier: STATIC_SYM  */
#line 74 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                 {yyval = S_STATIC;}
#line 1572 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 20: /* storage_class_specifier: TYPEDEF_SYM  */
#line 75 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                  {yyval = S_TYPEDEF;}
#line 1578 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 21: /* init_declarator_list_opt: %empty  */
#line 79 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
      {yyval = NIL;}
#line 1584 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 22: /* init_declarator_list_opt: init_declarator_list  */
#line 80 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                           {yyval = yyvsp[0];}
#line 1590 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 23: /* init_declarator_list: init_declarator  */
#line 84 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                      {yyval = yyvsp[0];}
#line 1596 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 24: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 85 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                 {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1602 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 25: /* init_declarator: declarator  */
#line 89 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                 {yyval = yyvsp[0];}
#line 1608 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 26: /* init_declarator: declarator ASSIGN initializer  */
#line 90 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                    {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1614 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 27: /* initializer: constant_expression  */
#line 94 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = makeNode(N_INIT_LIST_ONE, NIL, yyvsp[0], NIL);}
#line 1620 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 28: /* initializer: LR initializer_list RR  */
#line 95 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                             {yyval = yyvsp[-1];}
#line 1626 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 29: /* initializer_list: initializer  */
#line 99 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                  {yyval = makeNode(N_INIT_LIST, yyvsp[0], NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL, NIL));}
#line 1632 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 30: /* initializer_list: initializer_list COMMA initializer  */
#line 100 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                         {yyval = makeNodeList(N_INIT_LIST, yyvsp[-2], yyvsp[0]);}
#line 1638 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 31: /* type_specifier: struct_type_specifier  */
#line 104 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 1644 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 32: /* type_specifier: enum_type_specifier  */
#line 105 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 1650 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 33: /* type_specifier: TYPE_IDENTIFIER  */
#line 106 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                      {yyval = yyvsp[0];}
#line 1656 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 34: /* @2: %empty  */
#line 110 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                 {yyval = setTypeStructOrEnumIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1662 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 35: /* @3: %empty  */
#line 111 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
       {yyval = current_id; ++current_level;}
#line 1668 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 36: /* struct_type_specifier: struct_or_union IDENTIFIER @2 LR @3 struct_declaration_list RR  */
#line 112 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                               {checkForwardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); --current_level; current_id = yyvsp[-2];}
#line 1674 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 37: /* @4: %empty  */
#line 113 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                      {yyval = makeType(yyvsp[0]);}
#line 1680 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 38: /* @5: %empty  */
#line 114 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
       {yyval = current_id; ++current_level;}
#line 1686 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 39: /* struct_type_specifier: struct_or_union @4 LR @5 struct_declaration_list RR  */
#line 115 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                               {checkForwardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); --current_level; current_id = yyvsp[-2];}
#line 1692 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 40: /* struct_type_specifier: struct_or_union IDENTIFIER  */
#line 116 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                 {yyval = getTypeOfStructOrEnumRefIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1698 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 41: /* struct_or_union: STRUCT_SYM  */
#line 120 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                 {yyval = T_STRUCT;}
#line 1704 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 42: /* struct_or_union: UNION_SYM  */
#line 121 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                {yyval = T_UNION;}
#line 1710 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 43: /* struct_declaration_list: struct_declaration  */
#line 125 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                         {yyval = yyvsp[0];}
#line 1716 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 44: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 126 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                 {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1722 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 45: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 130 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                      {yyval = setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1728 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 46: /* struct_declarator_list: struct_declarator  */
#line 134 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                        {yyval = yyvsp[0];}
#line 1734 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 47: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 135 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                     {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1740 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 48: /* struct_declarator: declarator  */
#line 139 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                 {yyval = yyvsp[0];}
#line 1746 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 49: /* @6: %empty  */
#line 143 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1752 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 50: /* enum_type_specifier: ENUM_SYM IDENTIFIER @6 LR enumerator_list RR  */
#line 144 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1758 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 51: /* @7: %empty  */
#line 145 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
               {yyval = makeType(T_ENUM);}
#line 1764 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 52: /* enum_type_specifier: ENUM_SYM @7 LR enumerator_list RR  */
#line 146 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1770 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 53: /* enum_type_specifier: ENUM_SYM IDENTIFIER  */
#line 147 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = getTypeOfStructOrEnumRefIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1776 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 54: /* enumerator_list: enumerator  */
#line 151 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                 {yyval = yyvsp[0];}
#line 1782 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 55: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 152 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                       {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1788 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 56: /* enumerator: IDENTIFIER  */
#line 156 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                 {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1794 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 57: /* @8: %empty  */
#line 157 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                 {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1800 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 58: /* enumerator: IDENTIFIER @8 ASSIGN expression  */
#line 158 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                      {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1806 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 59: /* declarator: pointer direct_declarator  */
#line 162 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                {yyval = setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 1812 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 60: /* declarator: direct_declarator  */
#line 163 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                        {yyval = yyvsp[0];}
#line 1818 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 61: /* pointer: STAR  */
#line 167 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
           {yyval = makeType(T_POINTER);}
#line 1824 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 62: /* pointer: STAR pointer  */
#line 168 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                   {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 1830 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 63: /* direct_declarator: IDENTIFIER  */
#line 172 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                 {yyval = makeIdentifier(yyvsp[0]);}
#line 1836 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 64: /* direct_declarator: LP declarator RP  */
#line 173 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                       {yyval = yyvsp[-1];}
#line 1842 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 65: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 174 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                      {yyval = setDeclaratorElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 1848 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 66: /* @9: %empty  */
#line 175 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                           {yyval = current_id; ++current_level;}
#line 1854 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 67: /* direct_declarator: direct_declarator LP @9 parameter_type_list_opt RP  */
#line 176 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                               {checkForwardReference(); --current_level; current_id = yyvsp[-2]; yyval = setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 1860 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 68: /* parameter_type_list_opt: %empty  */
#line 180 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
      {yyval = NIL;}
#line 1866 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 69: /* parameter_type_list_opt: parameter_type_list  */
#line 181 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 1872 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 70: /* parameter_type_list: parameter_list  */
#line 185 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                     {yyval = yyvsp[0];}
#line 1878 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 71: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 186 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                     {yyval = linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 1884 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 72: /* parameter_list: parameter_declaration  */
#line 190 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 1890 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 73: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 191 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                 {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1896 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 74: /* parameter_declaration: declaration_specifiers declarator  */
#line 195 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                        {yyval = setParameterDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1902 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 75: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 196 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                     {yyval = setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 1908 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 76: /* abstract_declarator_opt: %empty  */
#line 200 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
      {yyval = NIL;}
#line 1914 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 77: /* abstract_declarator_opt: abstract_declarator  */
#line 201 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 1920 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 78: /* abstract_declarator: direct_abstract_declarator  */
#line 205 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                 {yyval = yyvsp[0];}
#line 1926 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 79: /* abstract_declarator: pointer  */
#line 206 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
              {yyval = makeType(T_POINTER);}
#line 1932 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 80: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 207 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                         {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 1938 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 81: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 211 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                {yyval = yyvsp[-1];}
#line 1944 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 82: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 212 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                    {yyval = setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 1950 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 83: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 213 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                               {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 1956 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 84: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 214 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                    {yyval = setTypeExpr(makeType(T_FUNC), yyvsp[-1]);}
#line 1962 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 85: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 215 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                               {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_FUNC), yyvsp[-1]));}
#line 1968 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 86: /* statement_list_opt: %empty  */
#line 219 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
      {yyval = makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
#line 1974 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 87: /* statement_list_opt: statement_list  */
#line 220 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                     {yyval = yyvsp[0];}
#line 1980 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 88: /* statement_list: statement  */
#line 224 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                {yyval = makeNode(N_STMT_LIST, yyvsp[0], NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
#line 1986 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 89: /* statement_list: statement_list statement  */
#line 225 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                               {yyval = makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 1992 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 90: /* statement: labeled_statement  */
#line 229 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                        {yyval = yyvsp[0];}
#line 1998 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 91: /* statement: compound_statement  */
#line 230 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                         {yyval = yyvsp[0];}
#line 2004 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 92: /* statement: expression_statement  */
#line 231 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                           {yyval = yyvsp[0];}
#line 2010 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 93: /* statement: selection_statement  */
#line 232 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2016 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 94: /* statement: iteration_statement  */
#line 233 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2022 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 95: /* statement: jump_statement  */
#line 234 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                     {yyval = yyvsp[0];}
#line 2028 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 96: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 238 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                   {yyval = makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2034 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 97: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 239 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                  {yyval = makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2040 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 98: /* @10: %empty  */
#line 243 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
         {yyval = current_id; ++current_level;}
#line 2046 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 99: /* compound_statement: LR @10 declaration_list_opt statement_list_opt RR  */
#line 244 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                               {checkForwardReference(); yyval = makeNode(N_STMT_COMPOUND, yyvsp[-2], NIL, yyvsp[-1]); --current_level; current_id = yyvsp[-3];}
#line 2052 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 100: /* expression_statement: SEMICOLON  */
#line 248 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                {yyval = makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2058 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 101: /* expression_statement: expression SEMICOLON  */
#line 249 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                           {yyval = makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2064 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 102: /* selection_statement: IF_SYM LP expression RP statement  */
#line 253 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                        {yyval = makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2070 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 103: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 254 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                           {yyval = makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2076 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 104: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 255 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                            {yyval = makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2082 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 105: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 259 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                           {yyval = makeNode(N_STMT_WHILE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2088 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 106: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 260 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                            {yyval = makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2094 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 107: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 261 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                             {yyval = makeNode(N_STMT_FOR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2100 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 108: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 265 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                                       {yyval = makeNode(N_FOR_EXP, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2106 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 109: /* expression_opt: %empty  */
#line 268 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
      {yyval = NIL;}
#line 2112 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 110: /* expression_opt: expression  */
#line 269 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                 {yyval = yyvsp[0];}
#line 2118 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 111: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 273 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                          {yyval = makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2124 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 112: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 274 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                             {yyval = makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2130 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 113: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 275 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2136 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 114: /* arg_expression_list_opt: %empty  */
#line 279 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
      {yyval = makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2142 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 115: /* arg_expression_list_opt: arg_expression_list  */
#line 280 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2148 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 116: /* arg_expression_list: assignment_expression  */
#line 284 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                            {yyval = makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2154 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 117: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 285 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                      {yyval = makeNodeList(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2160 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 118: /* constant_expression_opt: %empty  */
#line 289 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
      {yyval = NIL;}
#line 2166 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 119: /* constant_expression_opt: constant_expression  */
#line 290 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2172 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 120: /* constant_expression: expression  */
#line 294 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                 {yyval = yyvsp[0];}
#line 2178 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 121: /* expression: comma_expression  */
#line 298 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                       {yyval = yyvsp[0];}
#line 2184 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 122: /* comma_expression: assignment_expression  */
#line 302 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 2190 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 123: /* assignment_expression: conditional_expression  */
#line 306 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                             {yyval = yyvsp[0];}
#line 2196 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 124: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 307 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2202 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 125: /* conditional_expression: logical_or_expression  */
#line 311 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 2208 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 126: /* logical_or_expression: logical_and_expression  */
#line 315 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                             {yyval = yyvsp[0];}
#line 2214 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 127: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 316 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                          {yyval = makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2220 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 128: /* logical_and_expression: bitwise_or_expression  */
#line 320 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 2226 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 129: /* logical_and_expression: logical_and_expression AMPAMP bitwise_or_expression  */
#line 321 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                          {yyval = makeNode(N_EXP_AND, yyvsp[-2], NIL, yyvsp[0]);}
#line 2232 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 130: /* bitwise_or_expression: bitwise_xor_expression  */
#line 325 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                             {yyval = yyvsp[0];}
#line 2238 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 131: /* bitwise_xor_expression: bitwise_and_expression  */
#line 329 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                             {yyval = yyvsp[0];}
#line 2244 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 132: /* bitwise_and_expression: equality_expression  */
#line 333 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2250 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 133: /* equality_expression: relational_expression  */
#line 337 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 2256 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 134: /* equality_expression: equality_expression EQL relational_expression  */
#line 338 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_EQL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2262 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 135: /* equality_expression: equality_expression NEQ relational_expression  */
#line 339 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_NEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2268 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 136: /* relational_expression: shift_expression  */
#line 343 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                       {yyval = yyvsp[0];}
#line 2274 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 137: /* relational_expression: relational_expression LSS additive_expression  */
#line 344 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2280 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 138: /* relational_expression: relational_expression GTR additive_expression  */
#line 345 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2286 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 139: /* relational_expression: relational_expression LEQ additive_expression  */
#line 346 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2292 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 140: /* relational_expression: relational_expression GEQ additive_expression  */
#line 347 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2298 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 141: /* shift_expression: additive_expression  */
#line 351 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2304 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 142: /* additive_expression: multiplicative_expression  */
#line 355 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                {yyval = yyvsp[0];}
#line 2310 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 143: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 356 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                         {yyval = makeNode(N_EXP_ADD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2316 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 144: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 357 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                          {yyval = makeNode(N_EXP_SUB, yyvsp[-2], NIL, yyvsp[0]);}
#line 2322 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 145: /* multiplicative_expression: cast_expression  */
#line 361 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                      {yyval = yyvsp[0];}
#line 2328 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 146: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 362 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                     {yyval = makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2334 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 147: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 363 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                      {yyval = makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2340 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 148: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 364 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                        {yyval = makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2346 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 149: /* cast_expression: unary_expression  */
#line 368 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                       {yyval = yyvsp[0];}
#line 2352 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 150: /* cast_expression: LP type_name RP cast_expression  */
#line 369 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                      {yyval = makeNode(N_EXP_CAST, yyvsp[-2], NIL, yyvsp[0]);}
#line 2358 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 151: /* unary_expression: postfix_expression  */
#line 373 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                         {yyval = yyvsp[0];}
#line 2364 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 152: /* unary_expression: PLUSPLUS unary_expression  */
#line 374 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                {yyval = makeNode(N_EXP_PRE_INC, NIL, yyvsp[0], NIL);}
#line 2370 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 153: /* unary_expression: MINUSMINUS unary_expression  */
#line 375 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                  {yyval = makeNode(N_EXP_PRE_DEC, NIL, yyvsp[0], NIL);}
#line 2376 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 154: /* unary_expression: AMP cast_expression  */
#line 376 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                          {yyval = makeNode(N_EXP_AMP, NIL, yyvsp[0], NIL);}
#line 2382 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 155: /* unary_expression: STAR cast_expression  */
#line 377 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                           {yyval = makeNode(N_EXP_STAR, NIL, yyvsp[0], NIL);}
#line 2388 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 156: /* unary_expression: EXCL cast_expression  */
#line 378 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                           {yyval = makeNode(N_EXP_NOT, NIL, yyvsp[0], NIL);}
#line 2394 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 157: /* unary_expression: MINUS cast_expression  */
#line 379 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                            {yyval = makeNode(N_EXP_MINUS, NIL, yyvsp[0], NIL);}
#line 2400 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 158: /* unary_expression: PLUS cast_expression  */
#line 380 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                           {yyval = makeNode(N_EXP_PLUS, NIL, yyvsp[0], NIL);}
#line 2406 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 159: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 381 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                  {yyval = makeNode(N_EXP_SIZE_EXP, NIL, yyvsp[0], NIL);}
#line 2412 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 160: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 382 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                 {yyval = makeNode(N_EXP_SIZE_TYPE, NIL, yyvsp[-1], NIL);}
#line 2418 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 161: /* postfix_expression: primary_expression  */
#line 386 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                         {yyval = yyvsp[0];}
#line 2424 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 162: /* postfix_expression: postfix_expression LB expression RB  */
#line 387 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                          {yyval = makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2430 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 163: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 388 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                       {yyval = makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2436 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 164: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 389 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                           {yyval = makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2442 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 165: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 390 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                          {yyval = makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2448 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 166: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 391 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                  {yyval = makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2454 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 167: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 392 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                    {yyval = makeNode(N_EXP_POST_DEC, NIL, yyvsp[-1], NIL);}
#line 2460 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 168: /* primary_expression: IDENTIFIER  */
#line 396 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                 {yyval = makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2466 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 169: /* primary_expression: INTEGER_CONSTANT  */
#line 397 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                       {yyval = makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2472 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 170: /* primary_expression: FLOAT_CONSTANT  */
#line 398 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                     {yyval = makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2478 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 171: /* primary_expression: CHARACTER_CONSTANT  */
#line 399 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                         {yyval = makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2484 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 172: /* primary_expression: STRING_LITERAL  */
#line 400 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                     {yyval = makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2490 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 173: /* primary_expression: LP expression RP  */
#line 401 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                       {yyval = yyvsp[-1];}
#line 2496 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;

  case 174: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 405 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"
                                                     {yyval = setTypeNameSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2502 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"
    break;


#line 2506 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 407 "/mnt/c/Users/kh/Dropbox/2-2_Files/complier/hw6/source/yacc.y"


int yywrap (void) {
    return (1);
}

extern char *yytext; /** lex.yy.c */
void yyerror(char *s) {
    syntax_err++;
    printf("** ERROR ** : line %d - %s near %s \n", line_no, s, yytext);

}
