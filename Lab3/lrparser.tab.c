/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
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
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "lrparser.y"


#include <stdio.h>
#include "ast.h"
int yylex(void);
void yyerror(char *);
extern int type;
extern int array_size;
int count_size = 0;
//FuncParam还需要修改
//需要修改VarDef、ConstExps、ConstDef、ConstInitVal、InitVal、ConstInitVals、InitVals


#line 84 "lrparser.tab.c"

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

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_LRPARSER_TAB_H_INCLUDED
# define YY_YY_LRPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    num_INT = 258,
    Y_INT = 259,
    Y_VOID = 260,
    Y_CONST = 261,
    Y_IF = 262,
    Y_ELSE = 263,
    Y_WHILE = 264,
    Y_BREAK = 265,
    Y_CONTINUE = 266,
    Y_FLOAT = 267,
    Y_RETURN = 268,
    Y_ADD = 269,
    Y_COMMA = 270,
    Y_DIV = 271,
    Y_LPAR = 272,
    Y_SUB = 273,
    Y_LSQUARE = 274,
    Y_MODULO = 275,
    Y_MUL = 276,
    Y_NOT = 277,
    Y_RPAR = 278,
    Y_RSQUARE = 279,
    Y_RBRACKET = 280,
    Y_LESS = 281,
    Y_LESSEQ = 282,
    Y_GREAT = 283,
    Y_GREATEQ = 284,
    Y_NOTEQ = 285,
    Y_EQ = 286,
    Y_AND = 287,
    Y_OR = 288,
    Y_ASSIGN = 289,
    Y_LBRACKET = 290,
    Y_SEMICOLON = 291,
    num_FLOAT = 292,
    Y_ID = 293
  };
#endif
/* Tokens.  */
#define num_INT 258
#define Y_INT 259
#define Y_VOID 260
#define Y_CONST 261
#define Y_IF 262
#define Y_ELSE 263
#define Y_WHILE 264
#define Y_BREAK 265
#define Y_CONTINUE 266
#define Y_FLOAT 267
#define Y_RETURN 268
#define Y_ADD 269
#define Y_COMMA 270
#define Y_DIV 271
#define Y_LPAR 272
#define Y_SUB 273
#define Y_LSQUARE 274
#define Y_MODULO 275
#define Y_MUL 276
#define Y_NOT 277
#define Y_RPAR 278
#define Y_RSQUARE 279
#define Y_RBRACKET 280
#define Y_LESS 281
#define Y_LESSEQ 282
#define Y_GREAT 283
#define Y_GREATEQ 284
#define Y_NOTEQ 285
#define Y_EQ 286
#define Y_AND 287
#define Y_OR 288
#define Y_ASSIGN 289
#define Y_LBRACKET 290
#define Y_SEMICOLON 291
#define num_FLOAT 292
#define Y_ID 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 15 "lrparser.y"

     int		token;
	int		int_value;
	float     float_value;
	char*	id_name;
	past		pAst;

#line 220 "lrparser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LRPARSER_TAB_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
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

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   376

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  113
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  209

#define YYUNDEFTOK  2
#define YYMAXUTOK   293


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

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
      35,    36,    37,    38
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    40,    41,    42,    43,    46,    47,    50,
      51,    54,    55,    58,    59,    66,    67,    70,    71,    74,
      75,    78,    79,    80,    81,    84,    87,    88,    91,    92,
      95,    96,    99,   100,   101,   102,   105,   106,   107,   108,
     111,   112,   116,   117,   120,   121,   124,   125,   126,   127,
     130,   131,   132,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   150,   152,   153,
     154,   155,   158,   159,   162,   163,   166,   167,   170,   171,
     172,   173,   174,   177,   178,   179,   182,   183,   186,   187,
     190,   194,   195,   196,   199,   200,   201,   202,   205,   206,
     207,   208,   209,   210,   213,   214,   217,   218,   219,   220,
     223,   224,   227,   228
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "num_INT", "Y_INT", "Y_VOID", "Y_CONST",
  "Y_IF", "Y_ELSE", "Y_WHILE", "Y_BREAK", "Y_CONTINUE", "Y_FLOAT",
  "Y_RETURN", "Y_ADD", "Y_COMMA", "Y_DIV", "Y_LPAR", "Y_SUB", "Y_LSQUARE",
  "Y_MODULO", "Y_MUL", "Y_NOT", "Y_RPAR", "Y_RSQUARE", "Y_RBRACKET",
  "Y_LESS", "Y_LESSEQ", "Y_GREAT", "Y_GREATEQ", "Y_NOTEQ", "Y_EQ", "Y_AND",
  "Y_OR", "Y_ASSIGN", "Y_LBRACKET", "Y_SEMICOLON", "num_FLOAT", "Y_ID",
  "$accept", "program", "CompUnit", "GlobalDecl", "GlobalConstDecl",
  "GlobalVarDecl", "Decl", "ConstDefs", "ConstDef", "ConstExps",
  "ConstInitVal", "ConstExp", "ConstInitVals", "VarDecl", "VarDecls",
  "VarDef", "InitVal", "InitVals", "FuncDef", "FuncParams", "FuncParam",
  "Type", "Stmt", "Block", "BlockItems", "BlockItem", "RelExp", "EqExp",
  "LAndExp", "LOrExp", "Exp", "AddExp", "MulExp", "UnaryExp", "CallParams",
  "PrimaryExp", "LVal", "ArraySubscripts", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

#define YYPACT_NINF (-150)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     135,  -150,  -150,    94,  -150,    27,  -150,   135,  -150,  -150,
     135,     7,    31,  -150,  -150,  -150,    25,    10,    -3,    18,
      20,    90,   338,   283,    53,    46,  -150,    85,   289,    98,
      31,  -150,    31,  -150,    91,    92,  -150,   114,  -150,   338,
     338,   338,   338,  -150,    51,   112,    96,    69,  -150,  -150,
    -150,    12,  -150,  -150,    96,   283,    47,   149,  -150,   256,
    -150,  -150,   289,  -150,  -150,   175,  -150,    94,    91,   146,
    -150,   143,  -150,  -150,    74,   338,   150,   151,   338,   338,
     338,   338,   338,  -150,    49,  -150,  -150,  -150,    58,  -150,
     154,   155,   132,   138,   295,  -150,  -150,  -150,  -150,  -150,
      46,  -150,  -150,   158,   211,   139,   142,  -150,  -150,   320,
     150,  -150,  -150,   180,   168,   172,   338,  -150,    69,    69,
    -150,  -150,  -150,   283,  -150,   173,   289,  -150,   174,   338,
     338,  -150,  -150,  -150,   165,    24,  -150,  -150,  -150,   338,
     187,   338,  -150,  -150,   183,   193,  -150,   194,  -150,    89,
     195,   186,   203,   176,   207,  -150,  -150,   196,   198,   150,
    -150,  -150,  -150,  -150,   338,   338,   338,   338,   247,   338,
     338,   338,   338,   247,  -150,  -150,  -150,  -150,  -150,  -150,
     223,  -150,  -150,  -150,  -150,  -150,   120,   218,   200,   201,
     332,  -150,   202,   205,   338,  -150,  -150,  -150,   204,  -150,
     338,   219,  -150,   208,   247,  -150,   233,   247,  -150
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    50,    52,     0,    51,     0,     2,     5,     7,     8,
       6,     0,     0,     1,     3,     4,    32,     0,     0,     0,
       0,     0,     0,     0,    34,     0,    11,     0,     0,     0,
       0,    10,     0,     9,     0,     0,    44,     0,   108,     0,
       0,     0,     0,   109,   110,     0,    25,    91,    94,    98,
     107,     0,    33,    36,    90,     0,    32,    30,    12,     0,
      17,    21,     0,    16,    15,     0,    42,     0,     0,    46,
     101,     0,   102,   103,     0,     0,   111,    19,     0,     0,
       0,     0,     0,    37,     0,    35,    31,    22,     0,    18,
       0,     0,     0,     0,     0,    73,    54,    13,    76,    14,
       0,    77,    56,     0,    74,     0,   107,    45,    43,     0,
      48,   106,    99,   104,     0,     0,     0,    20,    92,    93,
      96,    97,    95,     0,    38,     0,     0,    23,     0,     0,
       0,    68,    69,    71,     0,     0,    72,    75,    55,     0,
      47,     0,   100,   112,     0,    40,    39,    26,    24,    83,
      86,    88,     0,    78,     0,    70,    28,     0,     0,    49,
     105,   113,    41,    27,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,    53,    85,    84,    87,    89,
      58,    79,    81,    80,    82,    57,     0,     0,     0,     0,
       0,    60,     0,   107,     0,    61,    62,    64,     0,    59,
       0,     0,    63,     0,     0,    65,    66,     0,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -150,  -150,    33,  -150,   -47,  -150,  -150,  -150,    71,    -5,
     -50,   221,   104,  -150,   -53,   -20,   -45,   100,  -150,  -150,
     185,     0,  -149,   -32,   159,  -150,   -10,   -40,    87,  -119,
     -23,   -21,    50,   -19,   121,  -150,   -51,   -61
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,    98,    19,    20,    24,
      60,    61,   128,    99,    27,    17,    52,   125,    10,    35,
      36,    11,   101,   102,   103,   104,   149,   150,   151,   152,
     105,    54,    47,    48,   114,    49,    50,    76
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      53,    46,    66,    12,    86,    57,    84,    46,   110,    88,
      85,   154,    89,    29,   106,    38,    22,    71,    97,   180,
      70,    37,    72,    73,   185,    25,    39,    13,    53,    40,
      41,    28,    53,    30,    42,    32,   108,    83,    46,    25,
      14,    46,    21,    15,    22,    16,    26,    51,   179,    43,
      44,   113,   115,   106,    31,   206,    33,    97,   208,    23,
     156,   120,   121,   122,   123,   100,    22,    37,    74,    18,
      75,   134,   117,   126,   124,   201,   147,    38,   145,   159,
     135,    23,   157,   127,    56,    80,   115,    55,    39,    81,
      82,    40,    41,   144,     1,     2,    42,   112,     1,     2,
      53,    63,     4,    64,   100,    46,     4,    67,   153,   153,
      78,    43,    44,    34,    79,    68,   158,   106,   113,   164,
     165,    58,   106,    38,   176,   177,    65,   187,   118,   119,
     188,   189,    62,   190,    39,   193,    77,    40,    41,     1,
       2,     3,    42,   153,   153,   153,   153,     4,   153,   153,
     153,   153,    69,   106,   191,    65,   106,    43,    44,   181,
     182,   183,   184,   192,    25,   109,   111,   198,   131,   116,
      22,   129,   130,   153,   132,   138,   139,   203,    38,     1,
       2,     3,    90,   136,    91,    92,    93,     4,    94,    39,
      78,   142,    40,    41,    79,   141,   143,    42,   146,   148,
      95,   155,   169,   170,   171,   172,    75,   161,   123,   126,
      65,    96,    43,    44,    38,     1,     2,     3,    90,   167,
      91,    92,    93,     4,    94,    39,   168,   166,    40,    41,
     173,   186,   174,    42,   175,   194,   195,   196,   199,   200,
     202,   207,   204,    45,   205,   162,    65,    96,    43,    44,
      38,   163,   107,   178,    90,     0,    91,    92,    93,    38,
      94,    39,   160,   137,    40,    41,     0,     0,     0,    42,
      39,     0,     0,    40,    41,     0,     0,     0,    42,     0,
       0,    87,    65,    96,    43,    44,    38,     0,     0,     0,
       0,    59,    38,    43,    44,     0,     0,    39,    38,     0,
      40,    41,     0,    39,     0,    42,    40,    41,     0,    39,
       0,    42,    40,    41,     0,     0,     0,    42,    51,     0,
      43,    44,     0,    38,    59,     0,    43,    44,     0,     0,
       0,   133,    43,    44,    39,    38,     0,    40,    41,     0,
       0,    38,    42,     0,   140,     0,    39,     0,     0,    40,
      41,     0,    39,     0,    42,    40,    41,    43,    44,     0,
      42,     0,     0,     0,     0,     0,     0,     0,   197,    43,
      44,     0,     0,     0,     0,    43,    44
};

static const yytype_int16 yycheck[] =
{
      23,    22,    34,     3,    57,    25,    51,    28,    69,    59,
      55,   130,    62,    18,    65,     3,    19,    40,    65,   168,
      39,    21,    41,    42,   173,    15,    14,     0,    51,    17,
      18,    34,    55,    15,    22,    15,    68,    25,    59,    15,
       7,    62,    17,    10,    19,    38,    36,    35,   167,    37,
      38,    74,    75,   104,    36,   204,    36,   104,   207,    34,
      36,    80,    81,    82,    15,    65,    19,    67,    17,    38,
      19,    94,    77,    15,    25,   194,   126,     3,   123,   140,
     100,    34,   135,    25,    38,    16,   109,    34,    14,    20,
      21,    17,    18,   116,     4,     5,    22,    23,     4,     5,
     123,    30,    12,    32,   104,   126,    12,    15,   129,   130,
      14,    37,    38,    23,    18,    23,   139,   168,   141,    30,
      31,    36,   173,     3,   164,   165,    35,     7,    78,    79,
      10,    11,    34,    13,    14,   186,    24,    17,    18,     4,
       5,     6,    22,   164,   165,   166,   167,    12,   169,   170,
     171,   172,    38,   204,   186,    35,   207,    37,    38,   169,
     170,   171,   172,   186,    15,    19,    23,   190,    36,    19,
      19,    17,    17,   194,    36,    36,    34,   200,     3,     4,
       5,     6,     7,    25,     9,    10,    11,    12,    13,    14,
      14,    23,    17,    18,    18,    15,    24,    22,    25,    25,
      25,    36,    26,    27,    28,    29,    19,    24,    15,    15,
      35,    36,    37,    38,     3,     4,     5,     6,     7,    33,
       9,    10,    11,    12,    13,    14,    23,    32,    17,    18,
      23,     8,    36,    22,    36,    17,    36,    36,    36,    34,
      36,     8,    23,    22,    36,   145,    35,    36,    37,    38,
       3,   147,    67,   166,     7,    -1,     9,    10,    11,     3,
      13,    14,   141,   104,    17,    18,    -1,    -1,    -1,    22,
      14,    -1,    -1,    17,    18,    -1,    -1,    -1,    22,    -1,
      -1,    25,    35,    36,    37,    38,     3,    -1,    -1,    -1,
      -1,    35,     3,    37,    38,    -1,    -1,    14,     3,    -1,
      17,    18,    -1,    14,    -1,    22,    17,    18,    -1,    14,
      -1,    22,    17,    18,    -1,    -1,    -1,    22,    35,    -1,
      37,    38,    -1,     3,    35,    -1,    37,    38,    -1,    -1,
      -1,    36,    37,    38,    14,     3,    -1,    17,    18,    -1,
      -1,     3,    22,    -1,    24,    -1,    14,    -1,    -1,    17,
      18,    -1,    14,    -1,    22,    17,    18,    37,    38,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,
      38,    -1,    -1,    -1,    -1,    37,    38
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     6,    12,    40,    41,    42,    43,    44,
      57,    60,    60,     0,    41,    41,    38,    54,    38,    46,
      47,    17,    19,    34,    48,    15,    36,    53,    34,    48,
      15,    36,    15,    36,    23,    58,    59,    60,     3,    14,
      17,    18,    22,    37,    38,    50,    70,    71,    72,    74,
      75,    35,    55,    69,    70,    34,    38,    54,    36,    35,
      49,    50,    34,    47,    47,    35,    62,    15,    23,    38,
      72,    69,    72,    72,    17,    19,    76,    24,    14,    18,
      16,    20,    21,    25,    55,    55,    53,    25,    49,    49,
       7,     9,    10,    11,    13,    25,    36,    43,    45,    52,
      60,    61,    62,    63,    64,    69,    75,    59,    62,    19,
      76,    23,    23,    69,    73,    69,    19,    48,    71,    71,
      72,    72,    72,    15,    25,    56,    15,    25,    51,    17,
      17,    36,    36,    36,    69,    54,    25,    63,    36,    34,
      24,    15,    23,    24,    69,    55,    25,    49,    25,    65,
      66,    67,    68,    70,    68,    36,    36,    53,    69,    76,
      73,    24,    56,    51,    30,    31,    32,    33,    23,    26,
      27,    28,    29,    23,    36,    36,    66,    66,    67,    68,
      61,    65,    65,    65,    65,    61,     8,     7,    10,    11,
      13,    62,    69,    75,    17,    36,    36,    36,    69,    36,
      34,    68,    36,    69,    23,    36,    61,     8,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    39,    40,    41,    41,    41,    41,    42,    42,    43,
      43,    44,    44,    45,    45,    46,    46,    47,    47,    48,
      48,    49,    49,    49,    49,    50,    51,    51,    52,    52,
      53,    53,    54,    54,    54,    54,    55,    55,    55,    55,
      56,    56,    57,    57,    58,    58,    59,    59,    59,    59,
      60,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    62,    62,    63,    63,    64,    64,    65,    65,
      65,    65,    65,    66,    66,    66,    67,    67,    68,    68,
      69,    70,    70,    70,    71,    71,    71,    71,    72,    72,
      72,    72,    72,    72,    73,    73,    74,    74,    74,    74,
      75,    75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     1,     1,     1,     1,     4,
       4,     3,     4,     1,     1,     3,     3,     3,     4,     3,
       4,     1,     2,     3,     4,     1,     2,     3,     3,     4,
       2,     3,     1,     3,     2,     4,     1,     2,     3,     4,
       2,     3,     5,     6,     1,     3,     2,     4,     3,     5,
       1,     1,     1,     4,     1,     2,     1,     5,     5,     8,
       7,     8,     8,     9,     8,    10,    11,    13,     2,     2,
       3,     2,     3,     2,     1,     2,     1,     1,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     1,     3,     3,     1,     3,     3,     3,     1,     3,
       4,     2,     2,     2,     1,     3,     3,     1,     1,     1,
       1,     2,     3,     4
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
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
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
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

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
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
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
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

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
  case 2:
#line 37 "lrparser.y"
                  {showAst("|", (yyvsp[0].pAst), 0,false); }
#line 1573 "lrparser.tab.c"
    break;

  case 3:
#line 40 "lrparser.y"
                              {past l = newCompUnit((yyvsp[-1].pAst), NULL); l->right = (yyvsp[0].pAst); (yyval.pAst) = l;}
#line 1579 "lrparser.tab.c"
    break;

  case 4:
#line 41 "lrparser.y"
                            {past l = newCompUnit((yyvsp[-1].pAst), NULL); l->right = (yyvsp[0].pAst); (yyval.pAst) = l;}
#line 1585 "lrparser.tab.c"
    break;

  case 5:
#line 42 "lrparser.y"
                       {(yyval.pAst) = newCompUnit((yyvsp[0].pAst), NULL);}
#line 1591 "lrparser.tab.c"
    break;

  case 6:
#line 43 "lrparser.y"
                   {(yyval.pAst) = newCompUnit((yyvsp[0].pAst), NULL);}
#line 1597 "lrparser.tab.c"
    break;

  case 9:
#line 50 "lrparser.y"
                                                   {(yyval.pAst) = (yyvsp[-1].pAst); }
#line 1603 "lrparser.tab.c"
    break;

  case 10:
#line 51 "lrparser.y"
                                                    {(yyval.pAst) = (yyvsp[-1].pAst); }
#line 1609 "lrparser.tab.c"
    break;

  case 11:
#line 54 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[-1].pAst); }
#line 1615 "lrparser.tab.c"
    break;

  case 12:
#line 55 "lrparser.y"
                                                 {(yyvsp[-2].pAst)->next = (yyvsp[-1].pAst);(yyval.pAst) = (yyvsp[-2].pAst); }
#line 1621 "lrparser.tab.c"
    break;

  case 15:
#line 66 "lrparser.y"
                                     {(yyvsp[-2].pAst)->next = (yyvsp[0].pAst),(yyval.pAst) = (yyvsp[-2].pAst);}
#line 1627 "lrparser.tab.c"
    break;

  case 16:
#line 67 "lrparser.y"
                                       {(yyvsp[0].pAst)->next = (yyvsp[-2].pAst);(yyval.pAst) = (yyvsp[0].pAst);}
#line 1633 "lrparser.tab.c"
    break;

  case 17:
#line 70 "lrparser.y"
                                     {(yyval.pAst) = newVarDecl(get_conststype(type), type, 1, (yyvsp[-2].id_name), NULL, (yyvsp[0].pAst));}
#line 1639 "lrparser.tab.c"
    break;

  case 18:
#line 71 "lrparser.y"
                                                {(yyval.pAst) = newVarDecl(get_conststype(type), type, 1, (yyvsp[-3].id_name), NULL, newAstAny((yyvsp[0].pAst),NULL,"INIT_LIST_EXPR",INIT_LIST_EXPR)); }
#line 1645 "lrparser.tab.c"
    break;

  case 19:
#line 74 "lrparser.y"
                                        {(yyval.pAst) = (yyvsp[-1].pAst);array_size = (yyvsp[-1].pAst)->ivalue;}
#line 1651 "lrparser.tab.c"
    break;

  case 20:
#line 75 "lrparser.y"
                                                  {array_size = (yyvsp[0].pAst)->ivalue;(yyvsp[-2].pAst)->next = (yyvsp[0].pAst),(yyval.pAst) = (yyvsp[-2].pAst); }
#line 1657 "lrparser.tab.c"
    break;

  case 22:
#line 79 "lrparser.y"
                                     {(yyval.pAst) = NULL; }
#line 1663 "lrparser.tab.c"
    break;

  case 23:
#line 80 "lrparser.y"
                                                  {past node = (yyvsp[-1].pAst);node = newAstAny(node,NULL,"INIT_LIST_EXPR",INIT_LIST_EXPR);(yyval.pAst) = node;count_size =0;}
#line 1669 "lrparser.tab.c"
    break;

  case 24:
#line 81 "lrparser.y"
                                                                {count_size++;past node = (yyvsp[-2].pAst);node->next = (yyvsp[-1].pAst);(yyval.pAst) = node;count_size =0; }
#line 1675 "lrparser.tab.c"
    break;

  case 26:
#line 87 "lrparser.y"
                                    {count_size++;past node = (yyvsp[0].pAst);(yyval.pAst) = node; }
#line 1681 "lrparser.tab.c"
    break;

  case 27:
#line 88 "lrparser.y"
                                                   {count_size++;past node = (yyvsp[-1].pAst);node->next = (yyvsp[0].pAst);(yyval.pAst) = node; }
#line 1687 "lrparser.tab.c"
    break;

  case 28:
#line 91 "lrparser.y"
                                 {(yyval.pAst) = newDeclStmt(NULL, (yyvsp[-1].pAst));}
#line 1693 "lrparser.tab.c"
    break;

  case 29:
#line 92 "lrparser.y"
                                           {(yyval.pAst) = newDeclStmt((yyvsp[-2].pAst), (yyvsp[-1].pAst));}
#line 1699 "lrparser.tab.c"
    break;

  case 30:
#line 95 "lrparser.y"
                         {(yyval.pAst) = (yyvsp[0].pAst);}
#line 1705 "lrparser.tab.c"
    break;

  case 31:
#line 96 "lrparser.y"
                                  {(yyvsp[-1].pAst)->next = (yyvsp[0].pAst);(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1711 "lrparser.tab.c"
    break;

  case 32:
#line 99 "lrparser.y"
             {(yyval.pAst) = newVarDecl(get_stype(type), type, 0, (yyvsp[0].id_name), NULL, NULL);}
#line 1717 "lrparser.tab.c"
    break;

  case 33:
#line 100 "lrparser.y"
                               {(yyval.pAst) = newVarDecl(get_stype(type), type, 0, (yyvsp[-2].id_name), NULL, (yyvsp[0].pAst));}
#line 1723 "lrparser.tab.c"
    break;

  case 34:
#line 101 "lrparser.y"
                        {(yyval.pAst) = newVarDecl(get_stype(type), type, 0, (yyvsp[-1].id_name), NULL, NULL); }
#line 1729 "lrparser.tab.c"
    break;

  case 35:
#line 102 "lrparser.y"
                                         {(yyval.pAst) = newVarDecl(get_stype(type), type, 0, (yyvsp[-3].id_name), NULL, newAstAny((yyvsp[0].pAst),NULL,"INIT_LIST_EXPR",INIT_LIST_EXPR)); }
#line 1735 "lrparser.tab.c"
    break;

  case 37:
#line 106 "lrparser.y"
                                {(yyval.pAst) = NULL;}
#line 1741 "lrparser.tab.c"
    break;

  case 38:
#line 107 "lrparser.y"
                                        {past node = (yyvsp[-1].pAst);node = newAstAny(node,NULL,"INIT_LIST_EXPR",INIT_LIST_EXPR);(yyval.pAst) = node;count_size =0;}
#line 1747 "lrparser.tab.c"
    break;

  case 39:
#line 108 "lrparser.y"
                                                 {count_size++;past node = (yyvsp[-2].pAst);node->next = (yyvsp[-1].pAst);if(node->nodeType!=INIT_LIST_EXPR){node = newAstAny(node,NULL,"INIT_LIST_EXPR",INIT_LIST_EXPR);node->next = (yyvsp[-1].pAst)->next;(yyvsp[-1].pAst)->next=NULL;}(yyval.pAst) = node;count_size =0; }
#line 1753 "lrparser.tab.c"
    break;

  case 40:
#line 111 "lrparser.y"
                          {count_size++;past node = (yyvsp[0].pAst);(yyval.pAst) = node; }
#line 1759 "lrparser.tab.c"
    break;

  case 41:
#line 112 "lrparser.y"
                                    {count_size++;past node = (yyvsp[-1].pAst);node->next = (yyvsp[0].pAst);if(node->nodeType==INIT_LIST_EXPR){count_size = 0;}if(count_size>=array_size && node->nodeType!=INIT_LIST_EXPR){node = newAstAny(node,NULL,"INIT_LIST_EXPR",INIT_LIST_EXPR);node->next = (yyvsp[0].pAst)->next;(yyvsp[0].pAst)->next = NULL;count_size=0;}(yyval.pAst) = node; }
#line 1765 "lrparser.tab.c"
    break;

  case 42:
#line 116 "lrparser.y"
                                       {(yyval.pAst) = newFuncDecl(get_stype((yyvsp[-4].pAst)->ivalue), (yyvsp[-4].pAst)->ivalue,(yyvsp[-3].id_name), NULL, newCompoundStmt(NULL, (yyvsp[0].pAst)));}
#line 1771 "lrparser.tab.c"
    break;

  case 43:
#line 117 "lrparser.y"
                                                   {(yyval.pAst) = newFuncDecl(get_stype((yyvsp[-5].pAst)->ivalue), (yyvsp[-5].pAst)->ivalue, (yyvsp[-4].id_name), (yyvsp[-2].pAst), newCompoundStmt(NULL, (yyvsp[0].pAst)));}
#line 1777 "lrparser.tab.c"
    break;

  case 45:
#line 121 "lrparser.y"
                                          {(yyvsp[0].pAst)->left = (yyvsp[-2].pAst); (yyval.pAst) = (yyvsp[0].pAst);}
#line 1783 "lrparser.tab.c"
    break;

  case 46:
#line 124 "lrparser.y"
                     {(yyval.pAst) = newParaDecl(get_stype((yyvsp[-1].pAst)->ivalue), (yyvsp[0].id_name), NULL, NULL);}
#line 1789 "lrparser.tab.c"
    break;

  case 47:
#line 125 "lrparser.y"
                                          {(yyval.pAst) = newParaDecl(get_stype((yyvsp[-3].pAst)->ivalue), (yyvsp[-2].id_name), NULL, NULL);}
#line 1795 "lrparser.tab.c"
    break;

  case 48:
#line 126 "lrparser.y"
                                      {(yyval.pAst) = newParaDecl(get_stype((yyvsp[-2].pAst)->ivalue), (yyvsp[-1].id_name), NULL, NULL);}
#line 1801 "lrparser.tab.c"
    break;

  case 49:
#line 127 "lrparser.y"
                                                          {(yyval.pAst) = newParaDecl(get_stype((yyvsp[-4].pAst)->ivalue), (yyvsp[-3].id_name), NULL, NULL);}
#line 1807 "lrparser.tab.c"
    break;

  case 50:
#line 130 "lrparser.y"
            {yylval.int_value = Y_INT;(yyval.pAst) = newType(Y_INT);}
#line 1813 "lrparser.tab.c"
    break;

  case 51:
#line 131 "lrparser.y"
               {yylval.int_value = Y_FLOAT;(yyval.pAst) = newType(Y_FLOAT);}
#line 1819 "lrparser.tab.c"
    break;

  case 52:
#line 132 "lrparser.y"
              {yylval.int_value = Y_VOID;(yyval.pAst) = newType(Y_VOID);}
#line 1825 "lrparser.tab.c"
    break;

  case 53:
#line 135 "lrparser.y"
                                    {(yyval.pAst) = newBinaryOper("=", Y_ASSIGN, (yyvsp[-3].pAst), (yyvsp[-1].pAst));}
#line 1831 "lrparser.tab.c"
    break;

  case 54:
#line 136 "lrparser.y"
                   {(yyval.pAst) = NULL;}
#line 1837 "lrparser.tab.c"
    break;

  case 55:
#line 137 "lrparser.y"
                       {(yyval.pAst) = (yyvsp[-1].pAst);}
#line 1843 "lrparser.tab.c"
    break;

  case 57:
#line 139 "lrparser.y"
                                         {(yyval.pAst) = newWhileStmt((yyvsp[-2].pAst), newCompoundStmt(NULL,(yyvsp[0].pAst)));}
#line 1849 "lrparser.tab.c"
    break;

  case 58:
#line 140 "lrparser.y"
                                      {(yyval.pAst) = newIfStmt((yyvsp[-2].pAst), (yyvsp[0].pAst), NULL);}
#line 1855 "lrparser.tab.c"
    break;

  case 59:
#line 141 "lrparser.y"
                                                             {(yyval.pAst) = newIfStmt((yyvsp[-5].pAst),(yyvsp[-3].pAst), (yyvsp[-1].pAst));}
#line 1861 "lrparser.tab.c"
    break;

  case 60:
#line 142 "lrparser.y"
                                                   {(yyval.pAst) = newIfStmt((yyvsp[-4].pAst),(yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1867 "lrparser.tab.c"
    break;

  case 61:
#line 143 "lrparser.y"
                                                                 {(yyval.pAst) = newIfStmt((yyvsp[-5].pAst),(yyvsp[-3].pAst), newBreakStmt());}
#line 1873 "lrparser.tab.c"
    break;

  case 62:
#line 144 "lrparser.y"
                                                                    {(yyval.pAst) = newIfStmt((yyvsp[-5].pAst),(yyvsp[-3].pAst),newContinueStmt());}
#line 1879 "lrparser.tab.c"
    break;

  case 63:
#line 145 "lrparser.y"
                                                                      {(yyval.pAst) = newIfStmt((yyvsp[-6].pAst),(yyvsp[-4].pAst),newReturnStmt((yyvsp[-1].pAst), NULL));}
#line 1885 "lrparser.tab.c"
    break;

  case 64:
#line 146 "lrparser.y"
                                                                  {(yyval.pAst) = newIfStmt((yyvsp[-5].pAst),(yyvsp[-3].pAst),newReturnStmt(NULL, NULL));}
#line 1891 "lrparser.tab.c"
    break;

  case 65:
#line 147 "lrparser.y"
                                                                           {(yyval.pAst) = newIfStmt((yyvsp[-7].pAst), (yyvsp[-5].pAst),newBinaryOper("=", Y_ASSIGN, (yyvsp[-3].pAst), (yyvsp[-1].pAst)));}
#line 1897 "lrparser.tab.c"
    break;

  case 66:
#line 148 "lrparser.y"
                                                                            {(yyval.pAst) = newIfStmt((yyvsp[-8].pAst),(yyvsp[-6].pAst),newIfStmt((yyvsp[-2].pAst),(yyvsp[0].pAst),NULL));}
#line 1903 "lrparser.tab.c"
    break;

  case 67:
#line 150 "lrparser.y"
                                                                                        {(yyval.pAst) = newIfStmt((yyvsp[-10].pAst),(yyvsp[-8].pAst),newIfStmt((yyvsp[-4].pAst),(yyvsp[-2].pAst),(yyvsp[0].pAst)));}
#line 1909 "lrparser.tab.c"
    break;

  case 68:
#line 152 "lrparser.y"
                           {(yyval.pAst) = newBreakStmt();}
#line 1915 "lrparser.tab.c"
    break;

  case 69:
#line 153 "lrparser.y"
                              {(yyval.pAst) = newContinueStmt();}
#line 1921 "lrparser.tab.c"
    break;

  case 70:
#line 154 "lrparser.y"
                                {(yyval.pAst) = newReturnStmt((yyvsp[-1].pAst), NULL);}
#line 1927 "lrparser.tab.c"
    break;

  case 71:
#line 155 "lrparser.y"
                            {(yyval.pAst) = newReturnStmt(NULL, NULL);}
#line 1933 "lrparser.tab.c"
    break;

  case 72:
#line 158 "lrparser.y"
                                        {(yyval.pAst) = newCompoundStmt(NULL,(yyvsp[-1].pAst));}
#line 1939 "lrparser.tab.c"
    break;

  case 73:
#line 159 "lrparser.y"
                              {(yyval.pAst) = NULL;}
#line 1945 "lrparser.tab.c"
    break;

  case 74:
#line 162 "lrparser.y"
                      {(yyval.pAst) = newCompoundStmt((yyvsp[0].pAst), NULL);}
#line 1951 "lrparser.tab.c"
    break;

  case 75:
#line 163 "lrparser.y"
                                  {past l = newCompoundStmt((yyvsp[-1].pAst), NULL); l->right = (yyvsp[0].pAst); (yyval.pAst) = l;}
#line 1957 "lrparser.tab.c"
    break;

  case 79:
#line 171 "lrparser.y"
                              {(yyval.pAst) = newBinaryOper("<", Y_LESS, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1963 "lrparser.tab.c"
    break;

  case 80:
#line 172 "lrparser.y"
                               {(yyval.pAst) = newBinaryOper(">", Y_GREAT, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1969 "lrparser.tab.c"
    break;

  case 81:
#line 173 "lrparser.y"
                                {(yyval.pAst) = newBinaryOper("<=", Y_LESSEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1975 "lrparser.tab.c"
    break;

  case 82:
#line 174 "lrparser.y"
                                 {(yyval.pAst) = newBinaryOper(">=", Y_GREATEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1981 "lrparser.tab.c"
    break;

  case 84:
#line 178 "lrparser.y"
                          {(yyval.pAst) = newBinaryOper("==", Y_EQ, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1987 "lrparser.tab.c"
    break;

  case 85:
#line 179 "lrparser.y"
                             {(yyval.pAst) = newBinaryOper("!=", Y_NOTEQ, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1993 "lrparser.tab.c"
    break;

  case 87:
#line 183 "lrparser.y"
                              {(yyval.pAst) = newBinaryOper("&&", Y_AND, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 1999 "lrparser.tab.c"
    break;

  case 89:
#line 187 "lrparser.y"
                             {(yyval.pAst) = newBinaryOper("||", Y_OR, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 2005 "lrparser.tab.c"
    break;

  case 92:
#line 195 "lrparser.y"
                           {(yyval.pAst) = newBinaryOper("+", Y_ADD, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 2011 "lrparser.tab.c"
    break;

  case 93:
#line 196 "lrparser.y"
                           {(yyval.pAst) = newBinaryOper("-", Y_SUB, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 2017 "lrparser.tab.c"
    break;

  case 95:
#line 200 "lrparser.y"
                             {(yyval.pAst) = newBinaryOper("*", Y_MUL, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 2023 "lrparser.tab.c"
    break;

  case 96:
#line 201 "lrparser.y"
                             {(yyval.pAst) = newBinaryOper("/", Y_DIV, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 2029 "lrparser.tab.c"
    break;

  case 97:
#line 202 "lrparser.y"
                                {(yyval.pAst) = newBinaryOper("%", Y_MODULO, (yyvsp[-2].pAst), (yyvsp[0].pAst));}
#line 2035 "lrparser.tab.c"
    break;

  case 99:
#line 206 "lrparser.y"
                          {(yyval.pAst) = newCallExp(NULL, 0, (yyvsp[-2].id_name), NULL, NULL);}
#line 2041 "lrparser.tab.c"
    break;

  case 100:
#line 207 "lrparser.y"
                                     {(yyval.pAst) = newCallExp(NULL, 0, (yyvsp[-3].id_name), (yyvsp[-1].pAst), NULL);}
#line 2047 "lrparser.tab.c"
    break;

  case 101:
#line 208 "lrparser.y"
                      {(yyval.pAst) = newUnaryOper("+", Y_ADD, NULL, (yyvsp[0].pAst));}
#line 2053 "lrparser.tab.c"
    break;

  case 102:
#line 209 "lrparser.y"
                      {(yyval.pAst) = newUnaryOper("-", Y_SUB, NULL, (yyvsp[0].pAst));}
#line 2059 "lrparser.tab.c"
    break;

  case 103:
#line 210 "lrparser.y"
                      {(yyval.pAst) = newUnaryOper("!", Y_NOT, NULL, (yyvsp[0].pAst));}
#line 2065 "lrparser.tab.c"
    break;

  case 105:
#line 214 "lrparser.y"
                              {(yyvsp[-2].pAst)->next = (yyvsp[0].pAst);(yyval.pAst) = (yyvsp[-2].pAst) ;}
#line 2071 "lrparser.tab.c"
    break;

  case 106:
#line 217 "lrparser.y"
                              {past node = newAstAny((yyvsp[-1].pAst),NULL,"PAREN_EXPR",INIT_LIST_EXPR);(yyval.pAst) = node;}
#line 2077 "lrparser.tab.c"
    break;

  case 108:
#line 219 "lrparser.y"
               {(yyval.pAst) = newIntVal((yyvsp[0].int_value));}
#line 2083 "lrparser.tab.c"
    break;

  case 109:
#line 220 "lrparser.y"
                 {(yyval.pAst) = newFloatVal((yyvsp[0].float_value));}
#line 2089 "lrparser.tab.c"
    break;

  case 110:
#line 223 "lrparser.y"
           {(yyval.pAst) = newDeclRefExp((yyvsp[0].id_name), NULL, NULL);}
#line 2095 "lrparser.tab.c"
    break;

  case 111:
#line 224 "lrparser.y"
                           {past node = newDeclRefExp((yyvsp[-1].id_name),NULL,NULL);past node2 = (yyvsp[0].pAst);while(node2->left!=NULL) node2 = node2->left;node2->left = node;(yyval.pAst) = (yyvsp[0].pAst);}
#line 2101 "lrparser.tab.c"
    break;

  case 112:
#line 227 "lrparser.y"
                                         {(yyval.pAst) = newArraySubscriptsExp(NULL,(yyvsp[-1].pAst));}
#line 2107 "lrparser.tab.c"
    break;

  case 113:
#line 228 "lrparser.y"
                                                         {(yyval.pAst) = newArraySubscriptsExp((yyvsp[-3].pAst), (yyvsp[-1].pAst));}
#line 2113 "lrparser.tab.c"
    break;


#line 2117 "lrparser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

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
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
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
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 231 "lrparser.y"

