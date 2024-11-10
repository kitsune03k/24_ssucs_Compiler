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
#line 1 "/home/kh/compiler/hw5/source/yacc.y"

#include "common_header.h"
#include "syntax_analysis.h" // prototype 선언

extern int line_no, syntax_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;

int yywrap();
void yyerror(char *s);
extern int yylex();

#line 86 "/home/kh/compiler/hw5/source/y.tab.c"

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
  YYSYMBOL_64_2 = 64,                      /* @2  */
  YYSYMBOL_declaration_list_opt = 65,      /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 66,          /* declaration_list  */
  YYSYMBOL_declaration = 67,               /* declaration  */
  YYSYMBOL_declaration_specifiers = 68,    /* declaration_specifiers  */
  YYSYMBOL_storage_class_specifier = 69,   /* storage_class_specifier  */
  YYSYMBOL_init_declarator_list_opt = 70,  /* init_declarator_list_opt  */
  YYSYMBOL_init_declarator_list = 71,      /* init_declarator_list  */
  YYSYMBOL_init_declarator = 72,           /* init_declarator  */
  YYSYMBOL_initializer = 73,               /* initializer  */
  YYSYMBOL_initializer_list = 74,          /* initializer_list  */
  YYSYMBOL_type_specifier = 75,            /* type_specifier  */
  YYSYMBOL_struct_type_specifier = 76,     /* struct_type_specifier  */
  YYSYMBOL_77_3 = 77,                      /* @3  */
  YYSYMBOL_78_4 = 78,                      /* @4  */
  YYSYMBOL_79_5 = 79,                      /* @5  */
  YYSYMBOL_80_6 = 80,                      /* @6  */
  YYSYMBOL_struct_or_union = 81,           /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 82,   /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 83,        /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 84,    /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 85,         /* struct_declarator  */
  YYSYMBOL_enum_type_specifier = 86,       /* enum_type_specifier  */
  YYSYMBOL_87_7 = 87,                      /* @7  */
  YYSYMBOL_88_8 = 88,                      /* @8  */
  YYSYMBOL_enumerator_list = 89,           /* enumerator_list  */
  YYSYMBOL_enumerator = 90,                /* enumerator  */
  YYSYMBOL_91_9 = 91,                      /* @9  */
  YYSYMBOL_declarator = 92,                /* declarator  */
  YYSYMBOL_pointer = 93,                   /* pointer  */
  YYSYMBOL_direct_declarator = 94,         /* direct_declarator  */
  YYSYMBOL_95_10 = 95,                     /* @10  */
  YYSYMBOL_parameter_type_list_opt = 96,   /* parameter_type_list_opt  */
  YYSYMBOL_parameter_type_list = 97,       /* parameter_type_list  */
  YYSYMBOL_parameter_list = 98,            /* parameter_list  */
  YYSYMBOL_parameter_declaration = 99,     /* parameter_declaration  */
  YYSYMBOL_abstract_declarator_opt = 100,  /* abstract_declarator_opt  */
  YYSYMBOL_abstract_declarator = 101,      /* abstract_declarator  */
  YYSYMBOL_direct_abstract_declarator = 102, /* direct_abstract_declarator  */
  YYSYMBOL_statement_list_opt = 103,       /* statement_list_opt  */
  YYSYMBOL_statement_list = 104,           /* statement_list  */
  YYSYMBOL_statement = 105,                /* statement  */
  YYSYMBOL_labeled_statement = 106,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 107,       /* compound_statement  */
  YYSYMBOL_108_11 = 108,                   /* @11  */
  YYSYMBOL_expression_statement = 109,     /* expression_statement  */
  YYSYMBOL_selection_statement = 110,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 111,      /* iteration_statement  */
  YYSYMBOL_for_expression = 112,           /* for_expression  */
  YYSYMBOL_expression_opt = 113,           /* expression_opt  */
  YYSYMBOL_jump_statement = 114,           /* jump_statement  */
  YYSYMBOL_arg_expression_list_opt = 115,  /* arg_expression_list_opt  */
  YYSYMBOL_arg_expression_list = 116,      /* arg_expression_list  */
  YYSYMBOL_constant_expression_opt = 117,  /* constant_expression_opt  */
  YYSYMBOL_constant_expression = 118,      /* constant_expression  */
  YYSYMBOL_expression = 119,               /* expression  */
  YYSYMBOL_comma_expression = 120,         /* comma_expression  */
  YYSYMBOL_assignment_expression = 121,    /* assignment_expression  */
  YYSYMBOL_conditional_expression = 122,   /* conditional_expression  */
  YYSYMBOL_logical_or_expression = 123,    /* logical_or_expression  */
  YYSYMBOL_logical_and_expression = 124,   /* logical_and_expression  */
  YYSYMBOL_bitwise_or_expression = 125,    /* bitwise_or_expression  */
  YYSYMBOL_bitwise_xor_expression = 126,   /* bitwise_xor_expression  */
  YYSYMBOL_bitwise_and_expression = 127,   /* bitwise_and_expression  */
  YYSYMBOL_equality_expression = 128,      /* equality_expression  */
  YYSYMBOL_relational_expression = 129,    /* relational_expression  */
  YYSYMBOL_shift_expression = 130,         /* shift_expression  */
  YYSYMBOL_additive_expression = 131,      /* additive_expression  */
  YYSYMBOL_multiplicative_expression = 132, /* multiplicative_expression  */
  YYSYMBOL_cast_expression = 133,          /* cast_expression  */
  YYSYMBOL_unary_expression = 134,         /* unary_expression  */
  YYSYMBOL_postfix_expression = 135,       /* postfix_expression  */
  YYSYMBOL_primary_expression = 136,       /* primary_expression  */
  YYSYMBOL_type_name = 137                 /* type_name  */
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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   458

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  293

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
       0,    28,    28,    32,    33,    37,    38,    42,    42,    44,
      44,    49,    50,    54,    55,    59,    63,    64,    65,    66,
      70,    71,    72,    76,    77,    81,    82,    86,    87,    91,
      92,    96,    97,   101,   102,   103,   107,   108,   107,   110,
     111,   110,   113,   117,   118,   122,   123,   127,   131,   132,
     136,   140,   140,   142,   142,   144,   148,   149,   153,   154,
     154,   159,   160,   164,   165,   169,   170,   171,   172,   172,
     177,   178,   182,   183,   187,   188,   192,   193,   197,   198,
     202,   203,   204,   208,   209,   210,   211,   212,   216,   217,
     221,   222,   226,   227,   228,   229,   230,   231,   235,   236,
     240,   240,   245,   246,   250,   251,   252,   256,   257,   258,
     262,   265,   266,   270,   271,   272,   276,   277,   281,   282,
     286,   287,   291,   295,   299,   303,   304,   308,   312,   313,
     317,   318,   322,   326,   330,   334,   335,   336,   340,   341,
     342,   343,   344,   348,   352,   353,   354,   358,   359,   360,
     361,   365,   366,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   383,   384,   385,   386,   387,   388,   389,
     393,   394,   395,   396,   397,   398,   402
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
  "@2", "declaration_list_opt", "declaration_list", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "initializer", "initializer_list", "type_specifier",
  "struct_type_specifier", "@3", "@4", "@5", "@6", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_type_specifier",
  "@7", "@8", "enumerator_list", "enumerator", "@9", "declarator",
  "pointer", "direct_declarator", "@10", "parameter_type_list_opt",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "abstract_declarator_opt", "abstract_declarator",
  "direct_abstract_declarator", "statement_list_opt", "statement_list",
  "statement", "labeled_statement", "compound_statement", "@11",
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

#define YYPACT_NINF (-224)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-60)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     137,  -224,  -224,    39,    -2,  -224,  -224,  -224,  -224,    35,
    -224,    45,   137,  -224,  -224,  -224,    39,    81,    81,  -224,
      61,  -224,  -224,    28,    22,    67,  -224,    70,    75,  -224,
    -224,    95,    84,  -224,    41,  -224,  -224,    90,   102,   112,
      22,  -224,   204,  -224,   121,   155,  -224,    39,   359,   112,
     132,  -224,  -224,  -224,    81,  -224,  -224,  -224,  -224,  -224,
     204,   372,   204,   372,   204,   315,   204,   204,   413,   135,
    -224,  -224,  -224,  -224,  -224,   151,   166,  -224,  -224,  -224,
      57,   222,  -224,    50,    52,  -224,   147,   270,  -224,   155,
     148,    79,  -224,  -224,   159,   359,  -224,  -224,  -224,  -224,
      53,    81,    34,   171,  -224,   160,  -224,  -224,  -224,   204,
    -224,  -224,  -224,  -224,     6,   172,   175,  -224,  -224,   315,
    -224,  -224,   204,   204,   204,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,  -224,  -224,   201,   204,
     204,   203,    85,   179,  -224,   155,  -224,    97,    53,    39,
      32,  -224,   260,    81,  -224,    39,   103,   204,  -224,    23,
    -224,  -224,   107,  -224,   180,   302,   131,  -224,  -224,   204,
     192,   166,  -224,   222,   222,    50,    50,    50,    50,    52,
      52,  -224,  -224,  -224,  -224,  -224,   198,   194,  -224,   199,
    -224,  -224,   204,  -224,  -224,   359,   130,    10,  -224,  -224,
    -224,  -224,  -224,   206,   207,   260,   209,   211,   213,   204,
     219,   204,   225,   215,   260,  -224,  -224,  -224,  -224,  -224,
    -224,  -224,   230,  -224,   210,   246,   247,   107,    81,   204,
    -224,  -224,  -224,  -224,  -224,   204,  -224,  -224,  -224,  -224,
    -224,    39,   204,   204,   226,   204,  -224,  -224,   259,  -224,
     204,   240,   260,  -224,  -224,  -224,  -224,  -224,  -224,   254,
     255,  -224,  -224,   256,   258,   262,   264,   271,  -224,   265,
     260,  -224,  -224,  -224,   260,   260,   204,   260,   204,   260,
    -224,   245,  -224,   272,  -224,   282,  -224,   260,   283,   204,
    -224,  -224,  -224
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    35,     0,    63,    20,    21,    22,    43,    53,
      44,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,     0,    64,    55,     0,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,    66,     0,     0,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   170,   172,   171,   173,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   133,
     134,   135,   138,   143,   144,   147,   151,   153,   163,     0,
      58,     0,    56,    26,    27,     0,    28,    29,     8,    37,
       0,    11,    78,     0,    71,    72,    74,   160,   151,     0,
     154,   159,   155,   156,    78,     0,     0,   158,   157,     0,
     161,    67,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,     0,   116,
       0,     0,     0,     0,    54,     0,    31,     0,     0,     0,
       0,    45,    88,    12,    13,    23,    70,   120,    76,    81,
      77,    79,    80,    69,     0,    70,    81,   176,   175,     0,
       0,   129,   131,   136,   137,   139,   140,   141,   142,   145,
     146,   148,   149,   150,   126,   167,     0,   117,   118,     0,
     166,    52,     0,    57,    30,     0,     0,     0,    48,    50,
      41,    46,   102,     0,     0,     0,     0,     0,     0,   111,
       0,     0,     0,     0,    89,    90,    92,    93,    94,    95,
      96,    97,     0,    14,     0,     0,     0,    82,    70,   120,
      73,    75,   152,   162,   165,     0,   164,    60,    32,    38,
      47,     0,     0,     0,     0,   111,   114,   115,     0,   112,
       0,     0,     0,   101,    91,   103,    86,    83,    84,     0,
       0,   119,    49,     0,     0,     0,     0,     0,   113,     0,
       0,    99,    87,    85,     0,     0,     0,     0,   111,     0,
      98,   104,   107,     0,   109,     0,   106,     0,     0,   111,
     105,   108,   110
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -224,  -224,  -224,   291,  -224,  -224,  -224,  -224,  -224,   -83,
       7,  -224,  -224,  -224,   257,   -84,  -224,   -92,  -224,  -224,
    -224,  -224,  -224,  -224,   187,  -123,  -224,    98,  -224,  -224,
    -224,   249,   163,  -224,    -1,     0,   -20,  -224,   -53,  -224,
    -224,   176,   233,  -121,  -119,  -224,  -224,  -184,  -224,   -10,
    -224,  -224,  -224,  -224,  -224,  -223,  -224,  -224,  -224,  -137,
     -43,   -42,  -224,  -126,  -224,  -224,   214,   228,  -224,  -224,
    -224,    12,  -224,   205,    40,   -50,   128,  -224,  -224,   234
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    96,   147,    18,    19,    50,
     148,    38,   100,    20,   150,   151,   197,   198,    21,    44,
      28,    91,    92,   143,    22,    23,    24,    54,   224,   104,
     105,   106,   160,   161,   162,   213,   214,   215,   216,   217,
     101,   218,   219,   220,   266,   248,   221,   186,   187,    69,
      70,   222,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   116
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,   103,    25,    40,    26,    97,    71,    16,   149,   184,
     107,   146,   111,   188,   113,    34,   117,   118,   154,    16,
     226,   244,   267,   115,    35,    36,     1,   201,   240,    53,
     254,     1,   165,     4,   157,   225,     2,     1,    27,    98,
     227,     4,     1,   241,   225,    29,    94,   227,    41,   156,
      42,   157,    97,    71,     3,   285,   149,     2,   149,   130,
     156,   131,   157,   200,    37,     3,   292,   115,   271,     4,
     223,    -7,   114,   201,     4,     8,     9,   115,    10,    48,
     124,   125,   181,   182,   183,     2,   280,   132,   133,   134,
     281,   282,   260,   284,    43,   286,     8,     9,   189,    10,
     -51,   158,   159,   290,   149,    45,     1,     2,   155,   261,
     144,   238,   145,    46,   166,    71,   191,    47,   145,   232,
     -36,     5,     6,     7,     8,     9,   114,    10,   194,   156,
     195,   157,    51,   228,     2,   229,   173,   174,     4,    40,
       1,     2,    52,     5,     6,     7,     8,     9,   199,    10,
     237,    89,    97,    71,    94,    25,   159,   165,    90,   157,
     155,   239,    99,     3,   121,   166,   122,   249,   251,    71,
     179,   180,     4,     8,     9,   259,    10,     5,     6,     7,
       8,     9,   123,    10,     2,   135,   -59,    71,   108,   110,
     108,   112,   108,   164,   108,   108,   120,    48,   163,   168,
     263,   264,   169,   249,   185,   230,   190,    55,   269,    56,
      57,    58,    59,    60,    61,    62,    63,   192,    64,   233,
       5,     6,     7,     8,     9,   234,    10,   235,   236,   246,
      65,   247,   242,   243,   283,   245,   249,   256,    66,    67,
     199,   126,   127,   128,   129,   250,   253,   249,   255,    68,
     108,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,    55,   252,    56,    57,    58,    59,    60,
      61,    62,    63,   257,    64,   265,   258,   268,   202,   270,
     136,   272,   137,   274,   273,   275,    65,   138,   276,   278,
      52,   277,   279,   287,    66,    67,   139,   108,   140,   288,
     289,   291,   141,    30,    93,    68,     2,   203,   193,   204,
     205,   206,   207,   208,   209,   210,   211,   212,    55,     2,
      56,    57,    58,    59,    60,    61,    62,    63,   165,    64,
     157,   175,   176,   177,   178,   196,   171,     4,   142,   262,
     231,    65,     5,     6,     7,     8,     9,   167,    10,    66,
      67,   172,     0,   170,     0,     5,     6,     7,     8,     9,
      68,    10,    55,     0,    56,    57,    58,    59,    60,    61,
      62,    63,     0,    64,     0,    55,     0,    56,    57,    58,
      59,    60,    61,    62,    63,    65,    64,     0,     0,    95,
       0,     0,     0,    66,    67,     0,     0,     0,   109,     0,
       0,     0,     0,     0,    68,     0,    66,    67,     0,     0,
       0,     0,     0,     0,     0,     0,    55,    68,    56,    57,
      58,    59,    60,    61,    62,    63,     0,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
       0,     0,     0,     0,     0,     0,     0,    66,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,     3,    23,     4,    48,    48,     0,   100,   135,
      60,    95,    62,   139,    64,    16,    66,    67,   101,    12,
     157,   205,   245,    65,    17,    18,     3,   150,    18,    39,
     214,     3,    26,    35,    28,   156,     4,     3,     3,    49,
     159,    35,     3,    33,   165,     0,    47,   166,    26,    26,
      28,    28,    95,    95,    26,   278,   148,     4,   150,     9,
      26,    11,    28,    31,     3,    26,   289,   109,   252,    35,
     153,    30,    65,   196,    35,    43,    44,   119,    46,    38,
      23,    24,   132,   133,   134,     4,   270,    35,    36,    37,
     274,   275,   229,   277,    27,   279,    43,    44,   140,    46,
      30,   102,   102,   287,   196,    30,     3,     4,   101,   235,
      31,   195,    33,    18,   114,   157,    31,    33,    33,   169,
      30,    40,    41,    42,    43,    44,   119,    46,    31,    26,
      33,    28,    30,    26,     4,    28,   124,   125,    35,   159,
       3,     4,    30,    40,    41,    42,    43,    44,   149,    46,
     192,    30,   195,   195,   155,   156,   156,    26,     3,    28,
     153,    31,    30,    26,    29,   165,    15,   209,   211,   211,
     130,   131,    35,    43,    44,   228,    46,    40,    41,    42,
      43,    44,    16,    46,     4,    38,    38,   229,    60,    61,
      62,    63,    64,    33,    66,    67,    68,    38,    27,    27,
     242,   243,    27,   245,     3,    25,     3,     3,   250,     5,
       6,     7,     8,     9,    10,    11,    12,    38,    14,    27,
      40,    41,    42,    43,    44,    27,    46,    33,    29,    18,
      26,    18,    26,    26,   276,    26,   278,    27,    34,    35,
     241,    19,    20,    21,    22,    26,    31,   289,    18,    45,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,     3,    39,     5,     6,     7,     8,     9,
      10,    11,    12,    27,    14,    49,    29,    18,    18,    39,
      10,    27,    12,    27,    29,    27,    26,    17,    26,    18,
      30,    27,    27,    48,    34,    35,    26,   169,    28,    27,
      18,    18,    32,    12,    47,    45,     4,    47,   145,    49,
      50,    51,    52,    53,    54,    55,    56,    57,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    26,    14,
      28,   126,   127,   128,   129,   148,   122,    35,    89,   241,
     164,    26,    40,    41,    42,    43,    44,   114,    46,    34,
      35,   123,    -1,   119,    -1,    40,    41,    42,    43,    44,
      45,    46,     3,    -1,     5,     6,     7,     8,     9,    10,
      11,    12,    -1,    14,    -1,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    26,    14,    -1,    -1,    30,
      -1,    -1,    -1,    34,    35,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    45,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    45,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    14,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    26,    35,    40,    41,    42,    43,    44,
      46,    59,    60,    61,    62,    67,    68,    69,    75,    76,
      81,    86,    92,    93,    94,    92,    93,     3,    88,     0,
      61,    70,    71,    72,    92,    68,    68,     3,    79,    64,
      94,    26,    28,    27,    87,    30,    18,    33,    38,    63,
      77,    30,    30,   107,    95,     3,     5,     6,     7,     8,
       9,    10,    11,    12,    14,    26,    34,    35,    45,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    30,
       3,    89,    90,    72,    92,    30,    73,   118,   107,    30,
      80,   108,    68,    96,    97,    98,    99,   133,   134,    26,
     134,   133,   134,   133,    68,   119,   137,   133,   133,    26,
     134,    29,    15,    16,    23,    24,    19,    20,    21,    22,
       9,    11,    35,    36,    37,    38,    10,    12,    17,    26,
      28,    32,    89,    91,    31,    33,    73,    74,    78,    75,
      82,    83,    65,    66,    67,    68,    26,    28,    92,    93,
     100,   101,   102,    27,    33,    26,    93,   100,    27,    27,
     137,   124,   125,   129,   129,   131,   131,   131,   131,   132,
     132,   133,   133,   133,   121,     3,   115,   116,   121,   119,
       3,    31,    38,    90,    31,    33,    82,    84,    85,    92,
      31,    83,    18,    47,    49,    50,    51,    52,    53,    54,
      55,    56,    57,   103,   104,   105,   106,   107,   109,   110,
     111,   114,   119,    67,    96,   101,   117,   102,    26,    28,
      25,    99,   133,    27,    27,    33,    29,   119,    73,    31,
      18,    33,    26,    26,   105,    26,    18,    18,   113,   119,
      26,   118,    39,    31,   105,    18,    27,    27,    29,    96,
     117,   121,    85,   119,   119,    49,   112,   113,    18,   119,
      39,   105,    27,    29,    27,    27,    26,    27,    18,    27,
     105,   105,   105,   119,   105,   113,   105,    48,    27,    18,
     105,    18,   113
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    63,    62,    64,
      62,    65,    65,    66,    66,    67,    68,    68,    68,    68,
      69,    69,    69,    70,    70,    71,    71,    72,    72,    73,
      73,    74,    74,    75,    75,    75,    77,    78,    76,    79,
      80,    76,    76,    81,    81,    82,    82,    83,    84,    84,
      85,    87,    86,    88,    86,    86,    89,    89,    90,    91,
      90,    92,    92,    93,    93,    94,    94,    94,    95,    94,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   102,   102,   102,   102,   102,   103,   103,
     104,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     108,   107,   109,   109,   110,   110,   110,   111,   111,   111,
     112,   113,   113,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   118,   119,   120,   121,   121,   122,   123,   123,
     124,   124,   125,   126,   127,   128,   128,   128,   129,   129,
     129,   129,   129,   130,   131,   131,   131,   132,   132,   132,
     132,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   135,   135,   135,   135,   135,   135,   135,
     136,   136,   136,   136,   136,   136,   137
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     4,     3,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     1,     3,     3,     1,     3,     3,
       3,     1,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     4,     1,     4,     4,     3,     3,     2,     2,
       1,     1,     1,     1,     1,     3,     2
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
#line 28 "/home/kh/compiler/hw5/source/yacc.y"
                     {root = makeNode(N_PROGRAM, NIL, yyvsp[0], NIL); checkForwardReference();}
#line 1477 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 3: /* translate_unit: external_declaration  */
#line 32 "/home/kh/compiler/hw5/source/yacc.y"
                           {yyval = yyvsp[0];}
#line 1483 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 4: /* translate_unit: translate_unit external_declaration  */
#line 33 "/home/kh/compiler/hw5/source/yacc.y"
                                          {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1489 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 5: /* external_declaration: function_definition  */
#line 37 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 1495 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 6: /* external_declaration: declaration  */
#line 38 "/home/kh/compiler/hw5/source/yacc.y"
                  {yyval = yyvsp[0];}
#line 1501 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 7: /* @1: %empty  */
#line 42 "/home/kh/compiler/hw5/source/yacc.y"
                                        {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1507 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 8: /* function_definition: declaration_specifiers declarator @1 compound_statement  */
#line 43 "/home/kh/compiler/hw5/source/yacc.y"
                       {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1513 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 9: /* @2: %empty  */
#line 44 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = setFunctionDeclaratorSpecifier(yyvsp[0], makeSpecifier(int_type, NIL));}
#line 1519 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 10: /* function_definition: declarator @2 compound_statement  */
#line 45 "/home/kh/compiler/hw5/source/yacc.y"
                       {yyval = setFunctionDeclaratorBody(yyvsp[-1], yyvsp[0]);}
#line 1525 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 11: /* declaration_list_opt: %empty  */
#line 49 "/home/kh/compiler/hw5/source/yacc.y"
      {yyval = NIL;}
#line 1531 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 12: /* declaration_list_opt: declaration_list  */
#line 50 "/home/kh/compiler/hw5/source/yacc.y"
                       {yyval = yyvsp[0];}
#line 1537 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 13: /* declaration_list: declaration  */
#line 54 "/home/kh/compiler/hw5/source/yacc.y"
                  {yyval = yyvsp[0];}
#line 1543 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 14: /* declaration_list: declaration_list declaration  */
#line 55 "/home/kh/compiler/hw5/source/yacc.y"
                                   {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1549 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 15: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 59 "/home/kh/compiler/hw5/source/yacc.y"
                                                                {yyval = setDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1555 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 16: /* declaration_specifiers: type_specifier  */
#line 63 "/home/kh/compiler/hw5/source/yacc.y"
                     {yyval = makeSpecifier(yyvsp[0], NIL);}
#line 1561 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 17: /* declaration_specifiers: storage_class_specifier  */
#line 64 "/home/kh/compiler/hw5/source/yacc.y"
                              {yyval = makeSpecifier(NIL, yyvsp[0]);}
#line 1567 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 18: /* declaration_specifiers: type_specifier declaration_specifiers  */
#line 65 "/home/kh/compiler/hw5/source/yacc.y"
                                            {yyval = updateSpecifier(yyvsp[0], yyvsp[-1], NIL);}
#line 1573 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 19: /* declaration_specifiers: storage_class_specifier declaration_specifiers  */
#line 66 "/home/kh/compiler/hw5/source/yacc.y"
                                                     {yyval = updateSpecifier(yyvsp[0], NIL, yyvsp[-1]);}
#line 1579 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 20: /* storage_class_specifier: AUTO_SYM  */
#line 70 "/home/kh/compiler/hw5/source/yacc.y"
               {yyval = S_AUTO;}
#line 1585 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 21: /* storage_class_specifier: STATIC_SYM  */
#line 71 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = S_STATIC;}
#line 1591 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 22: /* storage_class_specifier: TYPEDEF_SYM  */
#line 72 "/home/kh/compiler/hw5/source/yacc.y"
                  {yyval = S_TYPEDEF;}
#line 1597 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 23: /* init_declarator_list_opt: %empty  */
#line 76 "/home/kh/compiler/hw5/source/yacc.y"
      {yyval = NIL;}
#line 1603 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 24: /* init_declarator_list_opt: init_declarator_list  */
#line 77 "/home/kh/compiler/hw5/source/yacc.y"
                           {yyval = yyvsp[0];}
#line 1609 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 25: /* init_declarator_list: init_declarator  */
#line 81 "/home/kh/compiler/hw5/source/yacc.y"
                      {yyval = yyvsp[0];}
#line 1615 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 26: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 82 "/home/kh/compiler/hw5/source/yacc.y"
                                                 {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1621 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 27: /* init_declarator: declarator  */
#line 86 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = yyvsp[0];}
#line 1627 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 28: /* init_declarator: declarator ASSIGN initializer  */
#line 87 "/home/kh/compiler/hw5/source/yacc.y"
                                    {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1633 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 29: /* initializer: constant_expression  */
#line 91 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = makeNode(N_INIT_LIST_ONE, NIL, yyvsp[0], NIL);}
#line 1639 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 30: /* initializer: LR initializer_list RR  */
#line 92 "/home/kh/compiler/hw5/source/yacc.y"
                             {yyval = yyvsp[-1];}
#line 1645 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 31: /* initializer_list: initializer  */
#line 96 "/home/kh/compiler/hw5/source/yacc.y"
                  {yyval = makeNode(N_INIT_LIST, yyvsp[0], NIL, makeNode(N_INIT_LIST_NIL, NIL, NIL, NIL));}
#line 1651 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 32: /* initializer_list: initializer_list COMMA initializer  */
#line 97 "/home/kh/compiler/hw5/source/yacc.y"
                                         {yyval = makeNodeList(N_INIT_LIST, yyvsp[-2], yyvsp[0]);}
#line 1657 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 33: /* type_specifier: struct_type_specifier  */
#line 101 "/home/kh/compiler/hw5/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 1663 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 34: /* type_specifier: enum_type_specifier  */
#line 102 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 1669 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 35: /* type_specifier: TYPE_IDENTIFIER  */
#line 103 "/home/kh/compiler/hw5/source/yacc.y"
                      {yyval = yyvsp[0];}
#line 1675 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 36: /* @3: %empty  */
#line 107 "/home/kh/compiler/hw5/source/yacc.y"
                                 {yyval = setTypeStructOrEnumIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1681 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 37: /* @4: %empty  */
#line 108 "/home/kh/compiler/hw5/source/yacc.y"
       {yyval = current_id; ++current_level;}
#line 1687 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 38: /* struct_type_specifier: struct_or_union IDENTIFIER @3 LR @4 struct_declaration_list RR  */
#line 109 "/home/kh/compiler/hw5/source/yacc.y"
                               {checkForwardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); --current_level; current_id = yyvsp[-2];}
#line 1693 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 39: /* @5: %empty  */
#line 110 "/home/kh/compiler/hw5/source/yacc.y"
                      {yyval = makeType(yyvsp[0]);}
#line 1699 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 40: /* @6: %empty  */
#line 111 "/home/kh/compiler/hw5/source/yacc.y"
       {yyval = current_id; ++current_level;}
#line 1705 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 41: /* struct_type_specifier: struct_or_union @5 LR @6 struct_declaration_list RR  */
#line 112 "/home/kh/compiler/hw5/source/yacc.y"
                               {checkForwardReference(); yyval = setTypeField(yyvsp[-4], yyvsp[-1]); --current_level; current_id = yyvsp[-2];}
#line 1711 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 42: /* struct_type_specifier: struct_or_union IDENTIFIER  */
#line 113 "/home/kh/compiler/hw5/source/yacc.y"
                                 {yyval = getTypeOfStructOrEnumRefIdentifier(yyvsp[-1], yyvsp[0], ID_STRUCT);}
#line 1717 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 43: /* struct_or_union: STRUCT_SYM  */
#line 117 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = T_STRUCT;}
#line 1723 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 44: /* struct_or_union: UNION_SYM  */
#line 118 "/home/kh/compiler/hw5/source/yacc.y"
                {yyval = T_UNION;}
#line 1729 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 45: /* struct_declaration_list: struct_declaration  */
#line 122 "/home/kh/compiler/hw5/source/yacc.y"
                         {yyval = yyvsp[0];}
#line 1735 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 46: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 123 "/home/kh/compiler/hw5/source/yacc.y"
                                                 {yyval = linkDeclaratorList(yyvsp[-1], yyvsp[0]);}
#line 1741 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 47: /* struct_declaration: type_specifier struct_declarator_list SEMICOLON  */
#line 127 "/home/kh/compiler/hw5/source/yacc.y"
                                                      {yyval = setStructDeclaratorListSpecifier(yyvsp[-1], yyvsp[-2]);}
#line 1747 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 48: /* struct_declarator_list: struct_declarator  */
#line 131 "/home/kh/compiler/hw5/source/yacc.y"
                        {yyval = yyvsp[0];}
#line 1753 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 49: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 132 "/home/kh/compiler/hw5/source/yacc.y"
                                                     {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1759 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 50: /* struct_declarator: declarator  */
#line 136 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = yyvsp[0];}
#line 1765 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 51: /* @7: %empty  */
#line 140 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = setTypeStructOrEnumIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1771 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 52: /* enum_type_specifier: ENUM_SYM IDENTIFIER @7 LR enumerator_list RR  */
#line 141 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1777 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 53: /* @8: %empty  */
#line 142 "/home/kh/compiler/hw5/source/yacc.y"
               {yyval = makeType(T_ENUM);}
#line 1783 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 54: /* enum_type_specifier: ENUM_SYM @8 LR enumerator_list RR  */
#line 143 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = setTypeField(yyvsp[-3], yyvsp[-1]);}
#line 1789 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 55: /* enum_type_specifier: ENUM_SYM IDENTIFIER  */
#line 144 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = getTypeOfStructOrEnumRefIdentifier(T_ENUM, yyvsp[0], ID_ENUM);}
#line 1795 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 56: /* enumerator_list: enumerator  */
#line 148 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = yyvsp[0];}
#line 1801 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 57: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 149 "/home/kh/compiler/hw5/source/yacc.y"
                                       {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1807 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 58: /* enumerator: IDENTIFIER  */
#line 153 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1813 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 59: /* @9: %empty  */
#line 154 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = setDeclaratorKind(makeIdentifier(yyvsp[0]), ID_ENUM_LITERAL);}
#line 1819 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 60: /* enumerator: IDENTIFIER @9 ASSIGN expression  */
#line 155 "/home/kh/compiler/hw5/source/yacc.y"
                      {yyval = setDeclaratorInit(yyvsp[-2], yyvsp[0]);}
#line 1825 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 61: /* declarator: pointer direct_declarator  */
#line 159 "/home/kh/compiler/hw5/source/yacc.y"
                                {yyval = setDeclaratorElementType(yyvsp[0], yyvsp[-1]);}
#line 1831 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 62: /* declarator: direct_declarator  */
#line 160 "/home/kh/compiler/hw5/source/yacc.y"
                        {yyval = yyvsp[0];}
#line 1837 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 63: /* pointer: STAR  */
#line 164 "/home/kh/compiler/hw5/source/yacc.y"
           {yyval = makeType(T_POINTER);}
#line 1843 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 64: /* pointer: STAR pointer  */
#line 165 "/home/kh/compiler/hw5/source/yacc.y"
                   {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 1849 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 65: /* direct_declarator: IDENTIFIER  */
#line 169 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = makeIdentifier(yyvsp[0]);}
#line 1855 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 66: /* direct_declarator: LP declarator RP  */
#line 170 "/home/kh/compiler/hw5/source/yacc.y"
                       {yyval = yyvsp[-1];}
#line 1861 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 67: /* direct_declarator: direct_declarator LB constant_expression_opt RB  */
#line 171 "/home/kh/compiler/hw5/source/yacc.y"
                                                      {yyval = setDeclaratorElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 1867 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 68: /* @10: %empty  */
#line 172 "/home/kh/compiler/hw5/source/yacc.y"
                           {yyval = current_id; ++current_level;}
#line 1873 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 69: /* direct_declarator: direct_declarator LP @10 parameter_type_list_opt RP  */
#line 173 "/home/kh/compiler/hw5/source/yacc.y"
                               {checkForwardReference(); --current_level; current_id = yyvsp[-2]; yyval = setDeclaratorElementType(yyvsp[-4], setTypeField(makeType(T_FUNC), yyvsp[-1]));}
#line 1879 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 70: /* parameter_type_list_opt: %empty  */
#line 177 "/home/kh/compiler/hw5/source/yacc.y"
      {yyval = NIL;}
#line 1885 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 71: /* parameter_type_list_opt: parameter_type_list  */
#line 178 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 1891 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 72: /* parameter_type_list: parameter_list  */
#line 182 "/home/kh/compiler/hw5/source/yacc.y"
                     {yyval = yyvsp[0];}
#line 1897 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 73: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 183 "/home/kh/compiler/hw5/source/yacc.y"
                                     {yyval = linkDeclaratorList(yyvsp[-2], setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 1903 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 74: /* parameter_list: parameter_declaration  */
#line 187 "/home/kh/compiler/hw5/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 1909 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 75: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 188 "/home/kh/compiler/hw5/source/yacc.y"
                                                 {yyval = linkDeclaratorList(yyvsp[-2], yyvsp[0]);}
#line 1915 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 76: /* parameter_declaration: declaration_specifiers declarator  */
#line 192 "/home/kh/compiler/hw5/source/yacc.y"
                                        {yyval = setParameterDeclaratorSpecifier(yyvsp[0], yyvsp[-1]);}
#line 1921 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 77: /* parameter_declaration: declaration_specifiers abstract_declarator_opt  */
#line 193 "/home/kh/compiler/hw5/source/yacc.y"
                                                     {yyval = setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), yyvsp[0]), yyvsp[-1]);}
#line 1927 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 78: /* abstract_declarator_opt: %empty  */
#line 197 "/home/kh/compiler/hw5/source/yacc.y"
      {yyval = NIL;}
#line 1933 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 79: /* abstract_declarator_opt: abstract_declarator  */
#line 198 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 1939 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 80: /* abstract_declarator: direct_abstract_declarator  */
#line 202 "/home/kh/compiler/hw5/source/yacc.y"
                                 {yyval = yyvsp[0];}
#line 1945 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 81: /* abstract_declarator: pointer  */
#line 203 "/home/kh/compiler/hw5/source/yacc.y"
              {yyval = makeType(T_POINTER);}
#line 1951 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 82: /* abstract_declarator: pointer direct_abstract_declarator  */
#line 204 "/home/kh/compiler/hw5/source/yacc.y"
                                         {yyval = setTypeElementType(yyvsp[0], makeType(T_POINTER));}
#line 1957 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 83: /* direct_abstract_declarator: LP abstract_declarator RP  */
#line 208 "/home/kh/compiler/hw5/source/yacc.y"
                                {yyval = yyvsp[-1];}
#line 1963 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 84: /* direct_abstract_declarator: LB constant_expression_opt RB  */
#line 209 "/home/kh/compiler/hw5/source/yacc.y"
                                    {yyval = setTypeExpr(makeType(T_ARRAY), yyvsp[-1]);}
#line 1969 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 85: /* direct_abstract_declarator: direct_abstract_declarator LB constant_expression_opt RB  */
#line 210 "/home/kh/compiler/hw5/source/yacc.y"
                                                               {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_ARRAY), yyvsp[-1]));}
#line 1975 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 86: /* direct_abstract_declarator: LP parameter_type_list_opt RP  */
#line 211 "/home/kh/compiler/hw5/source/yacc.y"
                                    {yyval = setTypeExpr(makeType(T_FUNC), yyvsp[-1]);}
#line 1981 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 87: /* direct_abstract_declarator: direct_abstract_declarator LP parameter_type_list_opt RP  */
#line 212 "/home/kh/compiler/hw5/source/yacc.y"
                                                               {yyval = setTypeElementType(yyvsp[-3], setTypeExpr(makeType(T_FUNC), yyvsp[-1]));}
#line 1987 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 88: /* statement_list_opt: %empty  */
#line 216 "/home/kh/compiler/hw5/source/yacc.y"
      {yyval = makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
#line 1993 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 89: /* statement_list_opt: statement_list  */
#line 217 "/home/kh/compiler/hw5/source/yacc.y"
                     {yyval = yyvsp[0];}
#line 1999 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 90: /* statement_list: statement  */
#line 221 "/home/kh/compiler/hw5/source/yacc.y"
                {yyval = makeNode(N_STMT_LIST, yyvsp[0], NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
#line 2005 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 91: /* statement_list: statement_list statement  */
#line 222 "/home/kh/compiler/hw5/source/yacc.y"
                               {yyval = makeNodeList(N_STMT_LIST, yyvsp[-1], yyvsp[0]);}
#line 2011 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 92: /* statement: labeled_statement  */
#line 226 "/home/kh/compiler/hw5/source/yacc.y"
                        {yyval = yyvsp[0];}
#line 2017 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 93: /* statement: compound_statement  */
#line 227 "/home/kh/compiler/hw5/source/yacc.y"
                         {yyval = yyvsp[0];}
#line 2023 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 94: /* statement: expression_statement  */
#line 228 "/home/kh/compiler/hw5/source/yacc.y"
                           {yyval = yyvsp[0];}
#line 2029 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 95: /* statement: selection_statement  */
#line 229 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2035 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 96: /* statement: iteration_statement  */
#line 230 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2041 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 97: /* statement: jump_statement  */
#line 231 "/home/kh/compiler/hw5/source/yacc.y"
                     {yyval = yyvsp[0];}
#line 2047 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 98: /* labeled_statement: CASE_SYM constant_expression COLON statement  */
#line 235 "/home/kh/compiler/hw5/source/yacc.y"
                                                   {yyval = makeNode(N_STMT_LABEL_CASE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2053 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 99: /* labeled_statement: DEFAULT_SYM COLON statement  */
#line 236 "/home/kh/compiler/hw5/source/yacc.y"
                                  {yyval = makeNode(N_STMT_LABEL_DEFAULT, NIL, yyvsp[0], NIL);}
#line 2059 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 100: /* @11: %empty  */
#line 240 "/home/kh/compiler/hw5/source/yacc.y"
         {yyval = current_id; ++current_level;}
#line 2065 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 101: /* compound_statement: LR @11 declaration_list_opt statement_list_opt RR  */
#line 241 "/home/kh/compiler/hw5/source/yacc.y"
                                               {checkForwardReference(); yyval = makeNode(N_STMT_COMPOUND, yyvsp[-2], NIL, yyvsp[-1]); --current_level; current_id = yyvsp[-3];}
#line 2071 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 102: /* expression_statement: SEMICOLON  */
#line 245 "/home/kh/compiler/hw5/source/yacc.y"
                {yyval = makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2077 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 103: /* expression_statement: expression SEMICOLON  */
#line 246 "/home/kh/compiler/hw5/source/yacc.y"
                           {yyval = makeNode(N_STMT_EXPRESSION, NIL, yyvsp[-1], NIL);}
#line 2083 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 104: /* selection_statement: IF_SYM LP expression RP statement  */
#line 250 "/home/kh/compiler/hw5/source/yacc.y"
                                        {yyval = makeNode(N_STMT_IF, yyvsp[-2], NIL, yyvsp[0]);}
#line 2089 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 105: /* selection_statement: IF_SYM LP expression RP statement ELSE_SYM statement  */
#line 251 "/home/kh/compiler/hw5/source/yacc.y"
                                                           {yyval = makeNode(N_STMT_IF_ELSE, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2095 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 106: /* selection_statement: SWITCH_SYM LP expression RP statement  */
#line 252 "/home/kh/compiler/hw5/source/yacc.y"
                                            {yyval = makeNode(N_STMT_SWITCH, yyvsp[-2], NIL, yyvsp[0]);}
#line 2101 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 107: /* iteration_statement: WHILE_SYM LP expression RP statement  */
#line 256 "/home/kh/compiler/hw5/source/yacc.y"
                                           {yyval = makeNode(N_STMT_WHILE, yyvsp[-2], NIL, yyvsp[0]);}
#line 2107 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 108: /* iteration_statement: DO_SYM statement WHILE_SYM LP expression RP SEMICOLON  */
#line 257 "/home/kh/compiler/hw5/source/yacc.y"
                                                            {yyval = makeNode(N_STMT_DO, yyvsp[-5], NIL, yyvsp[-2]);}
#line 2113 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 109: /* iteration_statement: FOR_SYM LP for_expression RP statement  */
#line 258 "/home/kh/compiler/hw5/source/yacc.y"
                                             {yyval = makeNode(N_STMT_FOR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2119 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 110: /* for_expression: expression_opt SEMICOLON expression_opt SEMICOLON expression_opt  */
#line 262 "/home/kh/compiler/hw5/source/yacc.y"
                                                                       {yyval = makeNode(N_FOR_EXP, yyvsp[-4], yyvsp[-2], yyvsp[0]);}
#line 2125 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 111: /* expression_opt: %empty  */
#line 265 "/home/kh/compiler/hw5/source/yacc.y"
      {yyval = NIL;}
#line 2131 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 112: /* expression_opt: expression  */
#line 266 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = yyvsp[0];}
#line 2137 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 113: /* jump_statement: RETURN_SYM expression_opt SEMICOLON  */
#line 270 "/home/kh/compiler/hw5/source/yacc.y"
                                          {yyval = makeNode(N_STMT_RETURN, NIL, yyvsp[-1], NIL);}
#line 2143 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 114: /* jump_statement: CONTINUE_SYM SEMICOLON  */
#line 271 "/home/kh/compiler/hw5/source/yacc.y"
                             {yyval = makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2149 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 115: /* jump_statement: BREAK_SYM SEMICOLON  */
#line 272 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2155 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 116: /* arg_expression_list_opt: %empty  */
#line 276 "/home/kh/compiler/hw5/source/yacc.y"
      {yyval = makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2161 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 117: /* arg_expression_list_opt: arg_expression_list  */
#line 277 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2167 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 118: /* arg_expression_list: assignment_expression  */
#line 281 "/home/kh/compiler/hw5/source/yacc.y"
                            {yyval = makeNode(N_ARG_LIST, yyvsp[0], NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2173 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 119: /* arg_expression_list: arg_expression_list COMMA assignment_expression  */
#line 282 "/home/kh/compiler/hw5/source/yacc.y"
                                                      {yyval = makeNodeList(N_ARG_LIST, yyvsp[-2], yyvsp[0]);}
#line 2179 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 120: /* constant_expression_opt: %empty  */
#line 286 "/home/kh/compiler/hw5/source/yacc.y"
      {yyval = NIL;}
#line 2185 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 121: /* constant_expression_opt: constant_expression  */
#line 287 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2191 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 122: /* constant_expression: expression  */
#line 291 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = yyvsp[0];}
#line 2197 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 123: /* expression: comma_expression  */
#line 295 "/home/kh/compiler/hw5/source/yacc.y"
                       {yyval = yyvsp[0];}
#line 2203 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 124: /* comma_expression: assignment_expression  */
#line 299 "/home/kh/compiler/hw5/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 2209 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 125: /* assignment_expression: conditional_expression  */
#line 303 "/home/kh/compiler/hw5/source/yacc.y"
                             {yyval = yyvsp[0];}
#line 2215 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 126: /* assignment_expression: unary_expression ASSIGN assignment_expression  */
#line 304 "/home/kh/compiler/hw5/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_ASSIGN, yyvsp[-2], NIL, yyvsp[0]);}
#line 2221 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 127: /* conditional_expression: logical_or_expression  */
#line 308 "/home/kh/compiler/hw5/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 2227 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 128: /* logical_or_expression: logical_and_expression  */
#line 312 "/home/kh/compiler/hw5/source/yacc.y"
                             {yyval = yyvsp[0];}
#line 2233 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 129: /* logical_or_expression: logical_or_expression BARBAR logical_and_expression  */
#line 313 "/home/kh/compiler/hw5/source/yacc.y"
                                                          {yyval = makeNode(N_EXP_OR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2239 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 130: /* logical_and_expression: bitwise_or_expression  */
#line 317 "/home/kh/compiler/hw5/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 2245 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 131: /* logical_and_expression: logical_and_expression AMPAMP bitwise_or_expression  */
#line 318 "/home/kh/compiler/hw5/source/yacc.y"
                                                          {yyval = makeNode(N_EXP_AND, yyvsp[-2], NIL, yyvsp[0]);}
#line 2251 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 132: /* bitwise_or_expression: bitwise_xor_expression  */
#line 322 "/home/kh/compiler/hw5/source/yacc.y"
                             {yyval = yyvsp[0];}
#line 2257 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 133: /* bitwise_xor_expression: bitwise_and_expression  */
#line 326 "/home/kh/compiler/hw5/source/yacc.y"
                             {yyval = yyvsp[0];}
#line 2263 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 134: /* bitwise_and_expression: equality_expression  */
#line 330 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2269 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 135: /* equality_expression: relational_expression  */
#line 334 "/home/kh/compiler/hw5/source/yacc.y"
                            {yyval = yyvsp[0];}
#line 2275 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 136: /* equality_expression: equality_expression EQL relational_expression  */
#line 335 "/home/kh/compiler/hw5/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_EQL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2281 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 137: /* equality_expression: equality_expression NEQ relational_expression  */
#line 336 "/home/kh/compiler/hw5/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_NEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2287 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 138: /* relational_expression: shift_expression  */
#line 340 "/home/kh/compiler/hw5/source/yacc.y"
                       {yyval = yyvsp[0];}
#line 2293 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 139: /* relational_expression: relational_expression LSS additive_expression  */
#line 341 "/home/kh/compiler/hw5/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_LSS, yyvsp[-2], NIL, yyvsp[0]);}
#line 2299 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 140: /* relational_expression: relational_expression GTR additive_expression  */
#line 342 "/home/kh/compiler/hw5/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_GTR, yyvsp[-2], NIL, yyvsp[0]);}
#line 2305 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 141: /* relational_expression: relational_expression LEQ additive_expression  */
#line 343 "/home/kh/compiler/hw5/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_LEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2311 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 142: /* relational_expression: relational_expression GEQ additive_expression  */
#line 344 "/home/kh/compiler/hw5/source/yacc.y"
                                                    {yyval = makeNode(N_EXP_GEQ, yyvsp[-2], NIL, yyvsp[0]);}
#line 2317 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 143: /* shift_expression: additive_expression  */
#line 348 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = yyvsp[0];}
#line 2323 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 144: /* additive_expression: multiplicative_expression  */
#line 352 "/home/kh/compiler/hw5/source/yacc.y"
                                {yyval = yyvsp[0];}
#line 2329 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 145: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 353 "/home/kh/compiler/hw5/source/yacc.y"
                                                         {yyval = makeNode(N_EXP_ADD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2335 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 146: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 354 "/home/kh/compiler/hw5/source/yacc.y"
                                                          {yyval = makeNode(N_EXP_SUB, yyvsp[-2], NIL, yyvsp[0]);}
#line 2341 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 147: /* multiplicative_expression: cast_expression  */
#line 358 "/home/kh/compiler/hw5/source/yacc.y"
                      {yyval = yyvsp[0];}
#line 2347 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 148: /* multiplicative_expression: multiplicative_expression STAR cast_expression  */
#line 359 "/home/kh/compiler/hw5/source/yacc.y"
                                                     {yyval = makeNode(N_EXP_MUL, yyvsp[-2], NIL, yyvsp[0]);}
#line 2353 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 149: /* multiplicative_expression: multiplicative_expression SLASH cast_expression  */
#line 360 "/home/kh/compiler/hw5/source/yacc.y"
                                                      {yyval = makeNode(N_EXP_DIV, yyvsp[-2], NIL, yyvsp[0]);}
#line 2359 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 150: /* multiplicative_expression: multiplicative_expression PERCENT cast_expression  */
#line 361 "/home/kh/compiler/hw5/source/yacc.y"
                                                        {yyval = makeNode(N_EXP_MOD, yyvsp[-2], NIL, yyvsp[0]);}
#line 2365 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 151: /* cast_expression: unary_expression  */
#line 365 "/home/kh/compiler/hw5/source/yacc.y"
                       {yyval = yyvsp[0];}
#line 2371 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 152: /* cast_expression: LP type_name RP cast_expression  */
#line 366 "/home/kh/compiler/hw5/source/yacc.y"
                                      {yyval = makeNode(N_EXP_CAST, yyvsp[-2], NIL, yyvsp[0]);}
#line 2377 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 153: /* unary_expression: postfix_expression  */
#line 370 "/home/kh/compiler/hw5/source/yacc.y"
                         {yyval = yyvsp[0];}
#line 2383 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 154: /* unary_expression: PLUSPLUS unary_expression  */
#line 371 "/home/kh/compiler/hw5/source/yacc.y"
                                {yyval = makeNode(N_EXP_PRE_INC, NIL, yyvsp[0], NIL);}
#line 2389 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 155: /* unary_expression: MINUSMINUS unary_expression  */
#line 372 "/home/kh/compiler/hw5/source/yacc.y"
                                  {yyval = makeNode(N_EXP_PRE_DEC, NIL, yyvsp[0], NIL);}
#line 2395 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 156: /* unary_expression: AMP cast_expression  */
#line 373 "/home/kh/compiler/hw5/source/yacc.y"
                          {yyval = makeNode(N_EXP_AMP, NIL, yyvsp[0], NIL);}
#line 2401 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 157: /* unary_expression: STAR cast_expression  */
#line 374 "/home/kh/compiler/hw5/source/yacc.y"
                           {yyval = makeNode(N_EXP_STAR, NIL, yyvsp[0], NIL);}
#line 2407 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 158: /* unary_expression: EXCL cast_expression  */
#line 375 "/home/kh/compiler/hw5/source/yacc.y"
                           {yyval = makeNode(N_EXP_NOT, NIL, yyvsp[0], NIL);}
#line 2413 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 159: /* unary_expression: MINUS cast_expression  */
#line 376 "/home/kh/compiler/hw5/source/yacc.y"
                            {yyval = makeNode(N_EXP_MINUS, NIL, yyvsp[0], NIL);}
#line 2419 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 160: /* unary_expression: PLUS cast_expression  */
#line 377 "/home/kh/compiler/hw5/source/yacc.y"
                           {yyval = makeNode(N_EXP_PLUS, NIL, yyvsp[0], NIL);}
#line 2425 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 161: /* unary_expression: SIZEOF_SYM unary_expression  */
#line 378 "/home/kh/compiler/hw5/source/yacc.y"
                                  {yyval = makeNode(N_EXP_SIZE_EXP, NIL, yyvsp[0], NIL);}
#line 2431 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 162: /* unary_expression: SIZEOF_SYM LP type_name RP  */
#line 379 "/home/kh/compiler/hw5/source/yacc.y"
                                 {yyval = makeNode(N_EXP_SIZE_TYPE, NIL, yyvsp[-1], NIL);}
#line 2437 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 163: /* postfix_expression: primary_expression  */
#line 383 "/home/kh/compiler/hw5/source/yacc.y"
                         {yyval = yyvsp[0];}
#line 2443 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 164: /* postfix_expression: postfix_expression LB expression RB  */
#line 384 "/home/kh/compiler/hw5/source/yacc.y"
                                          {yyval = makeNode(N_EXP_ARRAY, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2449 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 165: /* postfix_expression: postfix_expression LP arg_expression_list_opt RP  */
#line 385 "/home/kh/compiler/hw5/source/yacc.y"
                                                       {yyval = makeNode(N_EXP_FUNCTION_CALL, yyvsp[-3], NIL, yyvsp[-1]);}
#line 2455 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 166: /* postfix_expression: postfix_expression PERIOD IDENTIFIER  */
#line 386 "/home/kh/compiler/hw5/source/yacc.y"
                                           {yyval = makeNode(N_EXP_STRUCT, yyvsp[-2], NIL, yyvsp[0]);}
#line 2461 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 167: /* postfix_expression: postfix_expression ARROW IDENTIFIER  */
#line 387 "/home/kh/compiler/hw5/source/yacc.y"
                                          {yyval = makeNode(N_EXP_ARROW, yyvsp[-2], NIL, yyvsp[0]);}
#line 2467 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 168: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 388 "/home/kh/compiler/hw5/source/yacc.y"
                                  {yyval = makeNode(N_EXP_POST_INC, NIL, yyvsp[-1], NIL);}
#line 2473 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 169: /* postfix_expression: postfix_expression MINUSMINUS  */
#line 389 "/home/kh/compiler/hw5/source/yacc.y"
                                    {yyval = makeNode(N_EXP_POST_DEC, NIL, yyvsp[-1], NIL);}
#line 2479 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 170: /* primary_expression: IDENTIFIER  */
#line 393 "/home/kh/compiler/hw5/source/yacc.y"
                 {yyval = makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared(yyvsp[0]), NIL);}
#line 2485 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 171: /* primary_expression: INTEGER_CONSTANT  */
#line 394 "/home/kh/compiler/hw5/source/yacc.y"
                       {yyval = makeNode(N_EXP_INT_CONST, NIL, yyvsp[0], NIL);}
#line 2491 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 172: /* primary_expression: FLOAT_CONSTANT  */
#line 395 "/home/kh/compiler/hw5/source/yacc.y"
                     {yyval = makeNode(N_EXP_FLOAT_CONST, NIL, yyvsp[0], NIL);}
#line 2497 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 173: /* primary_expression: CHARACTER_CONSTANT  */
#line 396 "/home/kh/compiler/hw5/source/yacc.y"
                         {yyval = makeNode(N_EXP_CHAR_CONST, NIL, yyvsp[0], NIL);}
#line 2503 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 174: /* primary_expression: STRING_LITERAL  */
#line 397 "/home/kh/compiler/hw5/source/yacc.y"
                     {yyval = makeNode(N_EXP_STRING_LITERAL, NIL, yyvsp[0], NIL);}
#line 2509 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 175: /* primary_expression: LP expression RP  */
#line 398 "/home/kh/compiler/hw5/source/yacc.y"
                       {yyval = yyvsp[-1];}
#line 2515 "/home/kh/compiler/hw5/source/y.tab.c"
    break;

  case 176: /* type_name: declaration_specifiers abstract_declarator_opt  */
#line 402 "/home/kh/compiler/hw5/source/yacc.y"
                                                     {yyval = setTypeNameSpecifier(yyvsp[0], yyvsp[-1]);}
#line 2521 "/home/kh/compiler/hw5/source/y.tab.c"
    break;


#line 2525 "/home/kh/compiler/hw5/source/y.tab.c"

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

#line 404 "/home/kh/compiler/hw5/source/yacc.y"


int yywrap (void) {
    return (1);
}

extern char *yytext;
void yyerror(char *s) {
    syntax_err++;
    printf("** ERROR ** : line %d - %s near %s \n", line_no, s, yytext);

}
