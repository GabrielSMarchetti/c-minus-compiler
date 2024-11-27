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
#line 1 "parser.y"


#define YYSTYPE TreeNode*
#include "globals.h"
#include "lexer.h"
#include "ast.h"

int yyerror(char *s);
static TreeNode *root;
static int saved_cur_line_number;


#line 84 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ASSIGN = 3,                     /* ASSIGN  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_INT = 6,                        /* INT  */
  YYSYMBOL_RETURN = 7,                     /* RETURN  */
  YYSYMBOL_VOID = 8,                       /* VOID  */
  YYSYMBOL_WHILE = 9,                      /* WHILE  */
  YYSYMBOL_PLUS = 10,                      /* PLUS  */
  YYSYMBOL_MINUS = 11,                     /* MINUS  */
  YYSYMBOL_MULT = 12,                      /* MULT  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_LT = 14,                        /* LT  */
  YYSYMBOL_LE = 15,                        /* LE  */
  YYSYMBOL_GT = 16,                        /* GT  */
  YYSYMBOL_GE = 17,                        /* GE  */
  YYSYMBOL_EQ = 18,                        /* EQ  */
  YYSYMBOL_NEQ = 19,                       /* NEQ  */
  YYSYMBOL_SEMI = 20,                      /* SEMI  */
  YYSYMBOL_VIR = 21,                       /* VIR  */
  YYSYMBOL_LPAREN = 22,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 23,                    /* RPAREN  */
  YYSYMBOL_LSBRACK = 24,                   /* LSBRACK  */
  YYSYMBOL_RSBRACK = 25,                   /* RSBRACK  */
  YYSYMBOL_LBRACE = 26,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 27,                    /* RBRACE  */
  YYSYMBOL_COMMA = 28,                     /* COMMA  */
  YYSYMBOL_ID = 29,                        /* ID  */
  YYSYMBOL_NUMBER = 30,                    /* NUMBER  */
  YYSYMBOL_ERROR = 31,                     /* ERROR  */
  YYSYMBOL_YYACCEPT = 32,                  /* $accept  */
  YYSYMBOL_programa = 33,                  /* programa  */
  YYSYMBOL_declaracao_lista = 34,          /* declaracao_lista  */
  YYSYMBOL_declaracao = 35,                /* declaracao  */
  YYSYMBOL_var_declaracao = 36,            /* var_declaracao  */
  YYSYMBOL_fun_declaracao = 37,            /* fun_declaracao  */
  YYSYMBOL_params = 38,                    /* params  */
  YYSYMBOL_param_lista = 39,               /* param_lista  */
  YYSYMBOL_tipo_especificador = 40,        /* tipo_especificador  */
  YYSYMBOL_param = 41,                     /* param  */
  YYSYMBOL_EQosto_decl = 42,               /* EQosto_decl  */
  YYSYMBOL_local_declaracoes = 43,         /* local_declaracoes  */
  YYSYMBOL_statement_lista = 44,           /* statement_lista  */
  YYSYMBOL_statement = 45,                 /* statement  */
  YYSYMBOL_expressao_decl = 46,            /* expressao_decl  */
  YYSYMBOL_selecao_decl = 47,              /* selecao_decl  */
  YYSYMBOL_iteracao_decl = 48,             /* iteracao_decl  */
  YYSYMBOL_retorno_decl = 49,              /* retorno_decl  */
  YYSYMBOL_expressao = 50,                 /* expressao  */
  YYSYMBOL_var = 51,                       /* var  */
  YYSYMBOL_simples_expressao = 52,         /* simples_expressao  */
  YYSYMBOL_relacional = 53,                /* relacional  */
  YYSYMBOL_soma_expressao = 54,            /* soma_expressao  */
  YYSYMBOL_soma = 55,                      /* soma  */
  YYSYMBOL_termo = 56,                     /* termo  */
  YYSYMBOL_mult = 57,                      /* mult  */
  YYSYMBOL_fator = 58,                     /* fator  */
  YYSYMBOL_ativacao = 59,                  /* ativacao  */
  YYSYMBOL_arg_lista = 60,                 /* arg_lista  */
  YYSYMBOL_ident = 61,                     /* ident  */
  YYSYMBOL_num = 62                        /* num  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  111

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   286


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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    24,    24,    25,    35,    37,    37,    39,    49,    62,
      76,    76,    83,    95,   100,   106,   113,   124,   135,   146,
     150,   154,   156,   165,   171,   181,   187,   191,   195,   199,
     203,   208,   212,   214,   220,   228,   235,   239,   245,   253,
     260,   265,   269,   277,   283,   288,   294,   300,   306,   312,
     318,   325,   331,   336,   341,   347,   353,   358,   363,   369,
     373,   377,   381,   386,   393,   400,   410,   415,   421
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
  "\"end of file\"", "error", "\"invalid token\"", "ASSIGN", "ELSE", "IF",
  "INT", "RETURN", "VOID", "WHILE", "PLUS", "MINUS", "MULT", "DIV", "LT",
  "LE", "GT", "GE", "EQ", "NEQ", "SEMI", "VIR", "LPAREN", "RPAREN",
  "LSBRACK", "RSBRACK", "LBRACE", "RBRACE", "COMMA", "ID", "NUMBER",
  "ERROR", "$accept", "programa", "declaracao_lista", "declaracao",
  "var_declaracao", "fun_declaracao", "params", "param_lista",
  "tipo_especificador", "param", "EQosto_decl", "local_declaracoes",
  "statement_lista", "statement", "expressao_decl", "selecao_decl",
  "iteracao_decl", "retorno_decl", "expressao", "var", "simples_expressao",
  "relacional", "soma_expressao", "soma", "termo", "mult", "fator",
  "ativacao", "arg_lista", "ident", "num", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-41)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-40)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      21,   -41,   -41,     5,    21,   -41,   -41,   -41,   -19,   -41,
     -41,   -41,    14,   -41,    59,   -17,    -5,     7,    29,   -19,
     -41,   -41,    30,    49,    21,    55,    62,    13,   -41,   -41,
      65,   -41,    81,   -14,    82,   -41,    19,   -41,   -41,   -19,
     -41,    51,    67,   -41,   -41,   -41,   -41,   -41,    87,   108,
     -41,   110,    32,   -41,   -41,    61,   -41,   -41,    19,   -41,
      94,    19,    95,   -13,   -41,   -41,    79,   -41,   -41,   -41,
      19,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,    19,
      19,   -41,   -41,    19,    24,    19,   107,   -41,   109,   -41,
     -41,   -41,    43,   -41,   106,    32,   -41,   -41,   -41,    89,
     111,    93,    93,    19,   -41,   -41,   127,   -41,   -41,    93,
     -41
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    14,    15,     0,     2,     4,     5,     6,     0,     1,
       3,    67,     0,     7,     0,     0,    11,     0,    10,     0,
      13,    68,     0,     0,     0,    16,     0,     0,     9,    12,
       0,     8,     0,     0,     0,    32,     0,    21,    23,     0,
      27,     0,     0,    25,    26,    28,    29,    30,     0,    60,
      40,    44,    52,    56,    61,    41,    62,    17,     0,    36,
       0,     0,     0,     0,    19,    22,     0,    20,    24,    31,
       0,    53,    54,    45,    46,    47,    48,    49,    50,     0,
       0,    57,    58,     0,     0,     0,     0,    37,     0,    59,
      18,    38,    61,    60,    43,    51,    55,    64,    66,     0,
       0,     0,     0,     0,    63,    42,    33,    35,    65,     0,
      34
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -41,   -41,   -41,   129,   -18,   -41,   -41,   -41,   -10,   113,
     112,   -41,    97,   -40,   -41,   -41,   -41,   -41,   -33,    12,
     -41,   -41,    60,   -41,    54,   -41,    57,    71,   -41,    -7,
     128
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,     6,     7,    17,    18,     8,    20,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    79,    51,    80,    52,    83,    53,    54,    99,    55,
      56
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      60,    12,    68,    62,    19,     9,    59,    13,    36,    38,
      11,    15,    25,    21,    19,    11,    21,    39,    32,     1,
      33,     2,    34,    65,   -15,    86,    68,     1,    88,     2,
      23,    39,    63,    35,    13,    36,    14,    91,    15,    27,
      37,    36,    11,    21,    81,    82,    36,    97,    11,    21,
      24,    98,   100,    11,    21,    26,    32,     1,    33,     2,
      34,   106,   107,   -39,   -39,     1,   -39,    16,   -39,   110,
     108,    35,    32,    36,    33,    27,    34,    27,    64,    30,
      11,    21,    31,    84,    32,    85,    33,    35,    34,    36,
      57,    93,    93,    27,    67,    93,    11,    21,    32,    35,
      33,    36,    34,    58,    61,    27,    90,    69,    11,    21,
     103,    70,   104,    35,    87,    36,    71,    72,    89,    27,
      71,    72,    11,    21,    73,    74,    75,    76,    77,    78,
     101,   109,   102,    10,    95,    28,   105,    29,    66,    94,
      96,    92,     0,    22
};

static const yytype_int8 yycheck[] =
{
      33,     8,    42,    36,    14,     0,    20,    20,    22,    27,
      29,    24,    19,    30,    24,    29,    30,    27,     5,     6,
       7,     8,     9,    41,    29,    58,    66,     6,    61,     8,
      23,    41,    39,    20,    20,    22,    22,    70,    24,    26,
      27,    22,    29,    30,    12,    13,    22,    23,    29,    30,
      21,    84,    85,    29,    30,    25,     5,     6,     7,     8,
       9,   101,   102,    20,    21,     6,    23,     8,    25,   109,
     103,    20,     5,    22,     7,    26,     9,    26,    27,    24,
      29,    30,    20,    22,     5,    24,     7,    20,     9,    22,
      25,    79,    80,    26,    27,    83,    29,    30,     5,    20,
       7,    22,     9,    22,    22,    26,    27,    20,    29,    30,
      21,     3,    23,    20,    20,    22,    10,    11,    23,    26,
      10,    11,    29,    30,    14,    15,    16,    17,    18,    19,
      23,     4,    23,     4,    80,    23,    25,    24,    41,    79,
      83,    70,    -1,    15
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     8,    33,    34,    35,    36,    37,    40,     0,
      35,    29,    61,    20,    22,    24,     8,    38,    39,    40,
      41,    30,    62,    23,    21,    61,    25,    26,    42,    41,
      24,    20,     5,     7,     9,    20,    22,    27,    36,    40,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    54,    56,    58,    59,    61,    62,    25,    22,    20,
      50,    22,    50,    61,    27,    36,    44,    27,    45,    20,
       3,    10,    11,    14,    15,    16,    17,    18,    19,    53,
      55,    12,    13,    57,    22,    24,    50,    20,    50,    23,
      27,    50,    59,    51,    54,    56,    58,    23,    50,    60,
      50,    23,    23,    21,    23,    25,    45,    45,    50,     4,
      45
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    36,    36,    37,
      38,    38,    39,    39,    40,    40,    41,    41,    42,    42,
      42,    42,    43,    43,    44,    44,    45,    45,    45,    45,
      45,    46,    46,    47,    47,    48,    49,    49,    50,    50,
      50,    51,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    54,    54,    55,    55,    56,    56,    57,    57,    58,
      58,    58,    58,    59,    59,    60,    60,    61,    62
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     6,     6,
       1,     1,     3,     1,     1,     1,     2,     4,     4,     3,
       3,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     5,     7,     5,     2,     3,     3,     3,
       1,     1,     4,     3,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     3,     1,     1,     1,     3,
       1,     1,     1,     4,     3,     3,     1,     1,     1
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
  case 2: /* programa: declaracao_lista  */
#line 24 "parser.y"
                              {root = yyvsp[0];}
#line 1216 "parser.tab.c"
    break;

  case 3: /* declaracao_lista: declaracao_lista declaracao  */
#line 26 "parser.y"
                  {
                    TreeNode* t = yyvsp[-1];
                    if(t != NULL){
                      while(t->sibling != NULL) t = t->sibling;
                      t->sibling = yyvsp[0];
                      yyval = yyvsp[-1];
                    }
                    else yyval = yyvsp[0];
                  }
#line 1230 "parser.tab.c"
    break;

  case 4: /* declaracao_lista: declaracao  */
#line 35 "parser.y"
                              {yyval = yyvsp[0];}
#line 1236 "parser.tab.c"
    break;

  case 5: /* declaracao: var_declaracao  */
#line 37 "parser.y"
                            {yyval = yyvsp[0];}
#line 1242 "parser.tab.c"
    break;

  case 6: /* declaracao: fun_declaracao  */
#line 37 "parser.y"
                                                        {yyval = yyvsp[0];}
#line 1248 "parser.tab.c"
    break;

  case 7: /* var_declaracao: tipo_especificador ident SEMI  */
#line 40 "parser.y"
              {
                yyval = newExpNode(TypeK);
                yyval->type = yyvsp[-2]->type;
                yyval->attr.name = yyvsp[-2]->attr.name;
                yyval->child[0] = yyvsp[-1];
                yyvsp[-1]->nodekind = StmtK;
                yyvsp[-1]->kind.stmt = VarK;
                yyvsp[-1]->type = yyvsp[-2]->type;
						  }
#line 1262 "parser.tab.c"
    break;

  case 8: /* var_declaracao: tipo_especificador ident LSBRACK num RSBRACK SEMI  */
#line 50 "parser.y"
                {
                  yyval = newExpNode(TypeK);
                  yyval->type = yyvsp[-5]->type;
                  yyval->attr.name = yyvsp[-5]->attr.name;
                  yyval->child[0] = yyvsp[-4];
                  yyvsp[-4]->nodekind = StmtK;
                  yyvsp[-4]->kind.stmt = VarK;
                  yyvsp[-4]->type = yyvsp[-5]->type;
                  yyvsp[-4]->attr.len = yyvsp[-2]->attr.val;
                  yyvsp[-4]->attr.vetor = 1;
                }
#line 1278 "parser.tab.c"
    break;

  case 9: /* fun_declaracao: tipo_especificador ident LPAREN params RPAREN EQosto_decl  */
#line 63 "parser.y"
                {
                  yyval = newExpNode(TypeK);
                  yyval->type = yyvsp[-5]->type;
                  yyval->attr.name = yyvsp[-5]->attr.name;
                  yyval->child[0] = yyvsp[-4];
                  yyvsp[-4]->child[0] = yyvsp[-2];
                  yyvsp[-4]->child[1] = yyvsp[0];
                  yyvsp[-4]->nodekind = StmtK;
                  yyvsp[-4]->kind.stmt = FunK;
                  yyvsp[-4]->type = yyvsp[-5]->type;
                  addScopes(yyval, yyvsp[-4]->attr.name);
                }
#line 1295 "parser.tab.c"
    break;

  case 10: /* params: param_lista  */
#line 76 "parser.y"
                     { yyval = yyvsp[0]; }
#line 1301 "parser.tab.c"
    break;

  case 11: /* params: VOID  */
#line 77 "parser.y"
        {
				  yyval = newExpNode(TypeK);
          yyval->attr.name = "void";
          yyval->child[0] = NULL;
				}
#line 1311 "parser.tab.c"
    break;

  case 12: /* param_lista: param_lista VIR param  */
#line 84 "parser.y"
            {
              TreeNode* t = yyvsp[-2];
              if(t != NULL){
                while(t->sibling != NULL)
                  t = t->sibling;
                t->sibling = yyvsp[0];
                yyval = yyvsp[-2];
              }
              else 
                yyval = yyvsp[0];
            }
#line 1327 "parser.tab.c"
    break;

  case 13: /* param_lista: param  */
#line 96 "parser.y"
            {
              yyval = yyvsp[0];
            }
#line 1335 "parser.tab.c"
    break;

  case 14: /* tipo_especificador: INT  */
#line 101 "parser.y"
                  {
                    yyval = newExpNode(TypeK);
                    yyval->attr.name = "inteiro";
                    yyval->type = IntegerK;
                  }
#line 1345 "parser.tab.c"
    break;

  case 15: /* tipo_especificador: VOID  */
#line 107 "parser.y"
                  {
                    yyval = newExpNode(TypeK);
                    yyval->attr.name = "void";
                    yyval->type = VoidK;
                  }
#line 1355 "parser.tab.c"
    break;

  case 16: /* param: tipo_especificador ident  */
#line 114 "parser.y"
      {
        yyval = newExpNode(TypeK);
        yyval->child[0]= yyvsp[0];
        yyval->type = yyvsp[-1]->type;
        yyval->attr.name = yyvsp[-1]->attr.name;
        yyvsp[0]->nodekind = StmtK;
        yyvsp[0]->kind.stmt = VarK;
        yyvsp[0]->type = yyvsp[-1]->type;

      }
#line 1370 "parser.tab.c"
    break;

  case 17: /* param: tipo_especificador ident LSBRACK RSBRACK  */
#line 125 "parser.y"
      {
        yyval = newExpNode(TypeK);
        yyval->child[0] = yyvsp[-2];
        yyval->type = yyvsp[-3]->type;
        yyval->attr.name = "inteiro_parametro_vetor";
        yyvsp[-2]->nodekind = StmtK;
        yyvsp[-2]->type = IntegerVetorK;
        yyvsp[-2]->kind.exp = VetK;
      }
#line 1384 "parser.tab.c"
    break;

  case 18: /* EQosto_decl: LBRACE local_declaracoes statement_lista RBRACE  */
#line 136 "parser.y"
              {
                TreeNode* t = yyvsp[-2];
                if(t != NULL){
                  while(t->sibling != NULL)
                  t = t->sibling;
                  t->sibling = yyvsp[-1];
                  yyval = yyvsp[-2];
                } 
                else yyval = yyvsp[-1];
              }
#line 1399 "parser.tab.c"
    break;

  case 19: /* EQosto_decl: LBRACE local_declaracoes RBRACE  */
#line 147 "parser.y"
              {
                yyval = yyvsp[-1];
              }
#line 1407 "parser.tab.c"
    break;

  case 20: /* EQosto_decl: LBRACE statement_lista RBRACE  */
#line 151 "parser.y"
              {
                yyval = yyvsp[-1];
              }
#line 1415 "parser.tab.c"
    break;

  case 21: /* EQosto_decl: LBRACE RBRACE  */
#line 154 "parser.y"
                              {}
#line 1421 "parser.tab.c"
    break;

  case 22: /* local_declaracoes: local_declaracoes var_declaracao  */
#line 157 "parser.y"
                  {
                    TreeNode* t = yyvsp[-1];
                    if(t != NULL){
                      while(t->sibling != NULL) t = t->sibling;
                      t->sibling = yyvsp[0];
                      yyval = yyvsp[-1];
                    }else yyval = yyvsp[0];
                  }
#line 1434 "parser.tab.c"
    break;

  case 23: /* local_declaracoes: var_declaracao  */
#line 166 "parser.y"
                  {
                    yyval = yyvsp[0];
                  }
#line 1442 "parser.tab.c"
    break;

  case 24: /* statement_lista: statement_lista statement  */
#line 172 "parser.y"
                {
                    TreeNode* t = yyvsp[-1];
                    if(t != NULL){
                      while(t->sibling != NULL)
                      t = t->sibling;
                      t->sibling = yyvsp[0];
                      yyval = yyvsp[-1];
                    }else yyval = yyvsp[0];
                  }
#line 1456 "parser.tab.c"
    break;

  case 25: /* statement_lista: statement  */
#line 182 "parser.y"
                  {
                    yyval = yyvsp[0];
                  }
#line 1464 "parser.tab.c"
    break;

  case 26: /* statement: expressao_decl  */
#line 188 "parser.y"
          {
            yyval = yyvsp[0];
          }
#line 1472 "parser.tab.c"
    break;

  case 27: /* statement: EQosto_decl  */
#line 192 "parser.y"
          {
            yyval = yyvsp[0];
          }
#line 1480 "parser.tab.c"
    break;

  case 28: /* statement: selecao_decl  */
#line 196 "parser.y"
          {
            yyval = yyvsp[0];
          }
#line 1488 "parser.tab.c"
    break;

  case 29: /* statement: iteracao_decl  */
#line 200 "parser.y"
          {
            yyval = yyvsp[0];
          }
#line 1496 "parser.tab.c"
    break;

  case 30: /* statement: retorno_decl  */
#line 204 "parser.y"
          {
            yyval = yyvsp[0];
          }
#line 1504 "parser.tab.c"
    break;

  case 31: /* expressao_decl: expressao SEMI  */
#line 209 "parser.y"
                {
                  yyval = yyvsp[-1];
                }
#line 1512 "parser.tab.c"
    break;

  case 33: /* selecao_decl: IF LPAREN expressao RPAREN statement  */
#line 215 "parser.y"
              {
                yyval = newStmtNode(IfK);
                yyval->child[0] = yyvsp[-2];
                yyval->child[1] = yyvsp[0];
              }
#line 1522 "parser.tab.c"
    break;

  case 34: /* selecao_decl: IF LPAREN expressao RPAREN statement ELSE statement  */
#line 221 "parser.y"
             {
                yyval = newStmtNode(IfK);
                yyval->child[0] = yyvsp[-4];
                yyval->child[1] = yyvsp[-2];
                yyval->child[2] = yyvsp[0];
             }
#line 1533 "parser.tab.c"
    break;

  case 35: /* iteracao_decl: WHILE LPAREN expressao RPAREN statement  */
#line 229 "parser.y"
              {
                yyval = newStmtNode(WhileK);
                yyval->child[0] = yyvsp[-2];
                yyval->child[1] = yyvsp[0];
              }
#line 1543 "parser.tab.c"
    break;

  case 36: /* retorno_decl: RETURN SEMI  */
#line 236 "parser.y"
              {
                yyval = newStmtNode(ReturnK);
              }
#line 1551 "parser.tab.c"
    break;

  case 37: /* retorno_decl: RETURN expressao SEMI  */
#line 240 "parser.y"
              {
                yyval = newStmtNode(ReturnK);
                yyval->child[0] = yyvsp[-1];
              }
#line 1560 "parser.tab.c"
    break;

  case 38: /* expressao: var ASSIGN expressao  */
#line 246 "parser.y"
          {
            yyval = newStmtNode(AssignK);
            yyval->attr.name = yyvsp[-2]->attr.name;
            yyval->child[0] = yyvsp[-2];
            yyval->child[1] = yyvsp[0];
          }
#line 1571 "parser.tab.c"
    break;

  case 39: /* expressao: var ASSIGN ativacao  */
#line 254 "parser.y"
          {
            yyval = newStmtNode(AssignK);
            yyval->attr.name = yyvsp[-2]->attr.name;
            yyval->child[0] = yyvsp[-2];
            yyval->child[1] = yyvsp[0];
          }
#line 1582 "parser.tab.c"
    break;

  case 40: /* expressao: simples_expressao  */
#line 261 "parser.y"
          {
            yyval = yyvsp[0];
          }
#line 1590 "parser.tab.c"
    break;

  case 41: /* var: ident  */
#line 266 "parser.y"
    {
      yyval = yyvsp[0];
    }
#line 1598 "parser.tab.c"
    break;

  case 42: /* var: ident LSBRACK expressao RSBRACK  */
#line 270 "parser.y"
    {
      yyval = yyvsp[-3];
      yyval->child[0] = yyvsp[-1];
      yyval->kind.exp = VetK;
      yyval->type = IntegerK;
    }
#line 1609 "parser.tab.c"
    break;

  case 43: /* simples_expressao: soma_expressao relacional soma_expressao  */
#line 278 "parser.y"
                  {
                      yyval = yyvsp[-1];
                      yyval->child[0] = yyvsp[-2];
                      yyval->child[1] = yyvsp[0];
                  }
#line 1619 "parser.tab.c"
    break;

  case 44: /* simples_expressao: soma_expressao  */
#line 284 "parser.y"
                  {
                    yyval = yyvsp[0];
                  }
#line 1627 "parser.tab.c"
    break;

  case 45: /* relacional: LT  */
#line 289 "parser.y"
            {
              yyval = newExpNode(OpK);
              yyval->attr.op = LT;                            
              yyval->type = BooleanK;
            }
#line 1637 "parser.tab.c"
    break;

  case 46: /* relacional: LE  */
#line 295 "parser.y"
           {
            yyval = newExpNode(OpK);
            yyval->attr.op = LE;                            
						yyval->type = BooleanK;
           }
#line 1647 "parser.tab.c"
    break;

  case 47: /* relacional: GT  */
#line 301 "parser.y"
           {
            yyval = newExpNode(OpK);
            yyval->attr.op = GT;                            
						yyval->type = BooleanK;
           }
#line 1657 "parser.tab.c"
    break;

  case 48: /* relacional: GE  */
#line 307 "parser.y"
           {
            yyval = newExpNode(OpK);
            yyval->attr.op = GE;                            
						yyval->type = BooleanK;
           }
#line 1667 "parser.tab.c"
    break;

  case 49: /* relacional: EQ  */
#line 313 "parser.y"
           {
            yyval = newExpNode(OpK);
            yyval->attr.op = EQ;                            
						yyval->type = BooleanK;
           }
#line 1677 "parser.tab.c"
    break;

  case 50: /* relacional: NEQ  */
#line 319 "parser.y"
           {
            yyval = newExpNode(OpK);
            yyval->attr.op = NEQ;                            
						yyval->type = BooleanK;
           }
#line 1687 "parser.tab.c"
    break;

  case 51: /* soma_expressao: soma_expressao soma termo  */
#line 326 "parser.y"
              {
                yyval = yyvsp[-1];
                yyval->child[0] = yyvsp[-2];
                yyval->child[1] = yyvsp[0];
              }
#line 1697 "parser.tab.c"
    break;

  case 52: /* soma_expressao: termo  */
#line 332 "parser.y"
               {
                yyval = yyvsp[0];
               }
#line 1705 "parser.tab.c"
    break;

  case 53: /* soma: PLUS  */
#line 337 "parser.y"
      {
        yyval = newExpNode(OpK);
        yyval->attr.op = PLUS;  
      }
#line 1714 "parser.tab.c"
    break;

  case 54: /* soma: MINUS  */
#line 342 "parser.y"
     {
      yyval = newExpNode(OpK);
      yyval->attr.op = MINUS;  
     }
#line 1723 "parser.tab.c"
    break;

  case 55: /* termo: termo mult fator  */
#line 348 "parser.y"
      {
        yyval = yyvsp[-1];
        yyval->child[0] = yyvsp[-2];
        yyval->child[1] = yyvsp[0];
      }
#line 1733 "parser.tab.c"
    break;

  case 56: /* termo: fator  */
#line 354 "parser.y"
      {
        yyval = yyvsp[0];
      }
#line 1741 "parser.tab.c"
    break;

  case 57: /* mult: MULT  */
#line 359 "parser.y"
      {
        yyval = newExpNode(OpK);
        yyval->attr.op = MULT; 
      }
#line 1750 "parser.tab.c"
    break;

  case 58: /* mult: DIV  */
#line 364 "parser.y"
      {
        yyval = newExpNode(OpK);
        yyval->attr.op = DIV; 
      }
#line 1759 "parser.tab.c"
    break;

  case 59: /* fator: LPAREN expressao RPAREN  */
#line 370 "parser.y"
      {
        yyval = yyvsp[-1];
      }
#line 1767 "parser.tab.c"
    break;

  case 60: /* fator: var  */
#line 374 "parser.y"
      {
        yyval = yyvsp[0];
      }
#line 1775 "parser.tab.c"
    break;

  case 61: /* fator: ativacao  */
#line 378 "parser.y"
      {
        yyval = yyvsp[0];
      }
#line 1783 "parser.tab.c"
    break;

  case 62: /* fator: num  */
#line 382 "parser.y"
      {
        yyval = yyvsp[0];
      }
#line 1791 "parser.tab.c"
    break;

  case 63: /* ativacao: ident LPAREN arg_lista RPAREN  */
#line 387 "parser.y"
          {
            yyval = yyvsp[-3];
            yyval->child[0] = yyvsp[-1];
            yyval->nodekind = StmtK;
            yyval->kind.stmt = CallK;
          }
#line 1802 "parser.tab.c"
    break;

  case 64: /* ativacao: ident LPAREN RPAREN  */
#line 394 "parser.y"
          {
            yyval = yyvsp[-2];
            yyval->nodekind = StmtK;
            yyval->kind.stmt = CallK;
          }
#line 1812 "parser.tab.c"
    break;

  case 65: /* arg_lista: arg_lista VIR expressao  */
#line 401 "parser.y"
          {
            TreeNode* t = yyvsp[-2];
            if(t != NULL){
              while(t->sibling != NULL)
              t = t->sibling;
              t->sibling = yyvsp[0];
              yyval = yyvsp[-2];
            } else yyval = yyvsp[0];
          }
#line 1826 "parser.tab.c"
    break;

  case 66: /* arg_lista: expressao  */
#line 411 "parser.y"
          {
            yyval = yyvsp[0];
          }
#line 1834 "parser.tab.c"
    break;

  case 67: /* ident: ID  */
#line 416 "parser.y"
      {
      yyval = newExpNode(IdK);
      yyval->attr.name = copyString(yytext);
      }
#line 1843 "parser.tab.c"
    break;

  case 68: /* num: NUMBER  */
#line 422 "parser.y"
      {
        yyval = newExpNode(ConstK);
        yyval->attr.val = atoi(yytext);
        yyval->type = IntegerK;
      }
#line 1853 "parser.tab.c"
    break;


#line 1857 "parser.tab.c"

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

#line 429 "parser.y"



int yyerror(char *msg){
    printf("ERRO SINTÁTICO: %s LINHA: %d\n", yytext, cur_line_number);
    exit(-1);
}

TreeNode* parse(){
    yyparse();
    return root;
}

TreeNode* main(){
    while (yyparse());
    printTree(root);
    return root;
}