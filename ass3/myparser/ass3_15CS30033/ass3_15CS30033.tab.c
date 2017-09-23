/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "./ass3_15CS30033.y" /* yacc.c:339  */

#include <stdio.h>
void yyerror(char *s);
extern int yylex();

#line 72 "ass3_15CS30033.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    UNSIGNED = 258,
    INT = 259,
    BREAK = 260,
    CASE = 261,
    FLOAT = 262,
    FOR = 263,
    SIGNED = 264,
    BOOL = 265,
    CONTINUE = 266,
    DO = 267,
    DOUBLE = 268,
    LONG = 269,
    ELSE = 270,
    RETURN = 271,
    VOID = 272,
    CHAR = 273,
    SHORT = 274,
    WHILE = 275,
    GOTO = 276,
    DEFAULT = 277,
    SWITCH = 278,
    IF = 279,
    MATRIX = 280,
    PLUS = 281,
    MINUS = 282,
    STAR = 283,
    DIVIDE = 284,
    GT = 285,
    LT = 286,
    AND = 287,
    CAP = 288,
    OR = 289,
    DOT = 290,
    SEMI_COLON = 291,
    APOS = 292,
    LSB = 293,
    RSB = 294,
    LCB = 295,
    RCB = 296,
    LP = 297,
    RP = 298,
    COMMA = 299,
    EQUAL = 300,
    QUESTION = 301,
    NOT = 302,
    COLON = 303,
    PERCENT = 304,
    STAR_EQUAL = 305,
    DIVIDE_EQUAL = 306,
    PERCENT_EQUAL = 307,
    MINUS_EQUAL = 308,
    LT_LT_EQUAL = 309,
    GT_GT_EQUAL = 310,
    AND_EQUAL = 311,
    CAP_EQUAL = 312,
    OR_EQUAL = 313,
    OR_OR = 314,
    AND_AND = 315,
    EQUAL_EQUAL = 316,
    NOT_EQUAL = 317,
    LT_EQUAL = 318,
    GT_EQUAL = 319,
    LT_LT = 320,
    GT_GT = 321,
    PLUS_PLUS = 322,
    MINUS_MINUS = 323,
    MINUS_GT = 324,
    DOT_APOS = 325,
    PLUS_EQUAL = 326,
    CONSTANT = 327,
    IDENTIFIER = 328,
    STRING_LITERAL = 329
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 195 "ass3_15CS30033.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   385

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  166
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  271

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    27,    28,    29,    30,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      46,    47,    49,    50,    52,    53,    55,    56,    58,    59,
      60,    61,    63,    65,    66,    68,    70,    72,    74,    75,
      77,    80,    82,    84,    87,    88,    90,    92,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   117,
     118,   119,   120,   122,   124,   126,   127,   128,   129,   130,
     131,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   147,   148,   149,   150,   152,   154,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     167,   168,   169,   170,   171,   172,   173,   174,   176,   177,
     179,   180,   181,   182,   183,   184,   185,   187,   188,   189,
     190,   191,   192,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   205,   206,   207,   209,   210,   212,   213,
     214,   216,   218,   221,   222,   223,   224,   226,   227,   228,
     229,   230,   231,   233,   234,   235,   236
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "UNSIGNED", "INT", "BREAK", "CASE",
  "FLOAT", "FOR", "SIGNED", "BOOL", "CONTINUE", "DO", "DOUBLE", "LONG",
  "ELSE", "RETURN", "VOID", "CHAR", "SHORT", "WHILE", "GOTO", "DEFAULT",
  "SWITCH", "IF", "MATRIX", "PLUS", "MINUS", "STAR", "DIVIDE", "GT", "LT",
  "AND", "CAP", "OR", "DOT", "SEMI_COLON", "APOS", "LSB", "RSB", "LCB",
  "RCB", "LP", "RP", "COMMA", "EQUAL", "QUESTION", "NOT", "COLON",
  "PERCENT", "STAR_EQUAL", "DIVIDE_EQUAL", "PERCENT_EQUAL", "MINUS_EQUAL",
  "LT_LT_EQUAL", "GT_GT_EQUAL", "AND_EQUAL", "CAP_EQUAL", "OR_EQUAL",
  "OR_OR", "AND_AND", "EQUAL_EQUAL", "NOT_EQUAL", "LT_EQUAL", "GT_EQUAL",
  "LT_LT", "GT_GT", "PLUS_PLUS", "MINUS_MINUS", "MINUS_GT", "DOT_APOS",
  "PLUS_EQUAL", "CONSTANT", "IDENTIFIER", "STRING_LITERAL", "$accept",
  "expression", "constant_expression", "assignment_expression",
  "assignment_operator", "conditional_expression", "logical_OR_expression",
  "logical_AND_expression", "inclusive_OR_expression",
  "exclusive_OR_expression", "AND_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_expression",
  "unary_operator", "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "primary_expression", "declaration",
  "declaration_specifiers", "declaration_specifiers_opt",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "type_specifier", "declarator", "direct_declarator",
  "assignment_expression_opt", "identifier_list_opt", "pointer_opt",
  "pointer", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "initializer",
  "initializer_row_list", "initializer_row", "designation_opt",
  "designation", "designator_list", "designator", "statement",
  "labeled_statement", "compound_statement", "block_item_list_opt",
  "block_item_list", "block_item", "expression_statement",
  "expression_opt", "selection_statement", "iteration_statement",
  "jump_statement", "external_defination", "translation_unit",
  "external_declaration", "function_defination", "declaration_list_opt",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

#define YYPACT_NINF -129

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-129)))

#define YYTABLE_NINF -164

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     174,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,     6,   174,    10,   174,  -129,  -129,     5,
      15,     1,  -129,   318,   -35,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,     5,    79,  -129,     6,    40,   174,     5,  -129,
      46,  -129,    52,  -129,  -129,  -129,  -129,   -18,   101,   101,
     101,  -129,  -129,  -129,  -129,  -129,   -33,    23,    70,    69,
      78,    39,     9,    43,    86,    47,  -129,   314,   101,   306,
    -129,  -129,   206,  -129,  -129,    71,   101,    18,    45,   101,
      38,    76,    79,  -129,    54,  -129,    73,  -129,  -129,  -129,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
     101,  -129,  -129,    49,   101,   101,  -129,  -129,    61,  -129,
     104,   101,   100,   113,   278,   101,   130,   103,   137,   144,
     148,   146,   152,  -129,  -129,  -129,  -129,   156,   206,  -129,
    -129,   162,  -129,  -129,  -129,  -129,  -129,   163,  -129,   -20,
     158,   160,   161,  -129,   164,  -129,   167,  -129,   -18,  -129,
     -18,  -129,  -129,  -129,  -129,   101,    50,    23,    70,    69,
      78,    39,     9,     9,    43,    43,    43,    43,    86,    86,
      47,    47,  -129,  -129,  -129,  -129,  -129,    42,  -129,   192,
     193,  -129,  -129,   159,   240,  -129,   216,   203,   101,   204,
     278,   101,   101,   278,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,   174,   168,  -129,    76,    79,  -129,   101,  -129,  -129,
     101,   278,   101,   209,   210,  -129,    87,  -129,  -129,    95,
     115,  -129,  -129,  -129,  -129,  -129,  -129,  -129,   215,   101,
     101,   278,   278,   278,   101,   219,   117,  -129,  -129,   241,
     217,   101,   225,   278,   278,   220,  -129,  -129,  -129,   278,
    -129
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    92,    86,    88,    91,    93,    89,    87,    83,    84,
      85,    90,   161,   104,    75,     0,   157,   158,   160,   104,
       0,    78,    79,    81,     0,   105,    76,    74,     1,   159,
     106,    73,   104,     0,   165,   104,     0,   164,   104,    95,
      94,    80,    81,    53,    54,    56,    55,   120,     0,     0,
       0,    70,    69,    71,   114,     5,    18,    20,    22,    24,
      26,    28,    30,    33,    38,    41,    44,    48,     0,    49,
      57,    82,   137,   162,   166,     0,   100,   102,     0,     0,
       0,   116,     0,   121,     0,   123,     0,     2,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       8,     9,    10,    12,    13,    14,    15,    16,    17,    11,
       0,    52,    48,     0,     0,    65,    62,    63,     0,    64,
       0,     0,     0,     0,   144,   144,     0,     0,     0,     0,
       0,    69,   145,   141,   142,   127,   128,     0,   138,   139,
     129,     0,   130,   131,   132,    96,   101,     0,   112,   104,
       0,     0,   107,   108,   103,   126,     0,     4,   120,   115,
     120,   118,   122,   124,    72,     0,     0,    21,    23,    25,
      27,    29,    31,    32,    35,    34,    36,    37,    39,    40,
      42,    43,    45,    46,    47,     6,    60,     0,    67,     0,
      66,    61,   155,     0,   144,   154,     0,     0,     0,     0,
     144,     0,     0,   144,   136,   140,   143,    97,   110,    99,
      98,     0,     0,   125,   117,     0,     3,     0,    58,    59,
       0,   144,   144,     0,     0,   156,     0,   153,   135,     0,
       0,   133,   109,   113,   119,    19,    68,   134,     0,   144,
       0,   144,   144,   144,   144,     0,     0,   149,   148,   146,
       0,   144,     0,   144,   144,     0,   150,   147,   152,   144,
     151
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,   -46,   131,   -30,  -129,   -60,  -129,   173,   177,   178,
     176,   180,    67,    56,    68,    75,   -59,   -38,  -129,  -129,
    -129,  -129,  -129,   -22,     0,  -129,  -129,  -129,   244,  -129,
      -9,  -129,  -129,  -129,   258,  -129,  -129,  -129,    60,  -129,
     -77,  -129,   119,   118,  -129,  -129,   201,  -128,  -129,   255,
    -129,  -129,   145,  -129,  -117,  -129,  -129,  -129,  -129,  -129,
     276,  -129,  -129,  -129
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   142,   166,    87,   120,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
     199,   200,    70,    12,    35,    27,    20,    21,    22,    14,
      42,    40,   157,   160,    24,    25,   161,   162,   163,   164,
      71,    80,    81,    82,    83,    84,    85,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,    15,    16,
      17,    18,    36,    37
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    34,    86,    54,    23,   171,   206,    38,    19,   121,
      28,    88,    89,    90,    26,    74,    13,    78,   207,   167,
      79,     1,     2,  -111,  -111,     3,    91,     4,     5,    75,
     122,     6,     7,    19,    19,     8,     9,    10,    39,    98,
      99,   122,   -77,    11,   176,    32,   156,   192,   193,   194,
     143,    31,    54,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   167,   100,   101,   168,   106,   107,   159,   197,   169,
      72,   228,   238,    92,    76,   241,   175,   233,    77,    78,
     195,   158,    79,   122,   175,   198,   108,    33,   227,   172,
      96,    97,    94,   247,    93,    43,    44,    45,   102,   103,
      95,    46,   104,   105,   155,   248,   174,   175,   165,    47,
     170,    48,   196,   257,   258,   259,   143,    43,    44,    45,
     251,   175,   255,    46,   201,   267,   268,   260,   252,   175,
     202,   270,   204,    48,   265,   226,    49,    50,   244,   205,
     218,    51,    52,    53,   184,   185,   186,   187,   253,   175,
     262,   175,   236,   182,   183,   239,   240,   245,    49,    50,
     188,   189,   208,    51,    52,    53,   209,     1,     2,   190,
     191,     3,   232,     4,     5,   210,   211,     6,     7,   122,
     212,     8,     9,    10,   213,    54,   175,   214,   216,    11,
     246,   219,   217,   220,   256,   221,   223,   231,   222,     1,
       2,   130,   131,     3,   132,     4,     5,   133,   134,     6,
       7,   159,   135,     8,     9,    10,   136,   137,   138,   139,
     140,    11,    43,    44,    45,   229,   234,   230,    46,   235,
     237,   243,  -144,     1,     2,   249,    72,     3,    48,     4,
       5,   254,   250,     6,     7,   261,   263,     8,     9,    10,
     264,   266,   203,   269,   177,    11,    43,    44,    45,   178,
     180,   179,    46,    49,    50,   181,    41,    30,    51,   141,
      53,   242,    48,   130,   131,   173,   132,   224,   225,   133,
     134,    73,    29,   215,   135,     0,     0,     0,   136,   137,
     138,   139,   140,     0,    43,    44,    45,    49,    50,     0,
      46,     0,    51,    52,    53,     0,     0,     0,    72,     0,
      48,     1,     2,     0,     0,     3,     0,     4,     5,     0,
       0,     6,     7,     0,     0,     8,     9,    10,     0,     0,
       0,   123,     0,    11,   124,    49,    50,     0,   125,     0,
      51,   141,    53,     0,     0,     0,     0,     0,  -163,   109,
       0,     0,     0,    33,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   126,   127,   128,   129,     0,     0,     0,
       0,     0,     0,     0,     0,   119
};

static const yytype_int16 yycheck[] =
{
       0,    23,    48,    33,    13,    82,   134,    42,    28,    68,
       0,    49,    50,    46,    14,    37,    16,    35,   135,    79,
      38,     3,     4,    43,    44,     7,    59,     9,    10,    38,
      68,    13,    14,    28,    28,    17,    18,    19,    73,    30,
      31,    79,    36,    25,    90,    44,    76,   106,   107,   108,
      72,    36,    82,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   131,    63,    64,    36,    28,    29,    77,   124,    41,
      40,    39,   210,    60,    38,   213,    44,   204,    42,    35,
     120,    73,    38,   131,    44,   125,    49,    45,    48,    45,
      61,    62,    33,   231,    34,    26,    27,    28,    65,    66,
      32,    32,    26,    27,    43,   232,    43,    44,    73,    40,
      44,    42,    73,   251,   252,   253,   148,    26,    27,    28,
      43,    44,   249,    32,    73,   263,   264,   254,    43,    44,
      36,   269,    42,    42,   261,   175,    67,    68,   225,    36,
     159,    72,    73,    74,    98,    99,   100,   101,    43,    44,
      43,    44,   208,    96,    97,   211,   212,   227,    67,    68,
     102,   103,    42,    72,    73,    74,    73,     3,     4,   104,
     105,     7,   204,     9,    10,    48,    42,    13,    14,   227,
      42,    17,    18,    19,    48,   225,    44,    41,    36,    25,
     230,    43,    39,    43,   250,    44,    39,    48,    44,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,   221,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    43,    20,    44,    32,    36,
      36,    73,    36,     3,     4,    36,    40,     7,    42,     9,
      10,    36,    42,    13,    14,    36,    15,    17,    18,    19,
      43,    36,   131,    43,    91,    25,    26,    27,    28,    92,
      94,    93,    32,    67,    68,    95,    32,    19,    72,    73,
      74,   221,    42,     5,     6,    84,     8,   168,   170,    11,
      12,    36,    16,   148,    16,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    -1,    26,    27,    28,    67,    68,    -1,
      32,    -1,    72,    73,    74,    -1,    -1,    -1,    40,    -1,
      42,     3,     4,    -1,    -1,     7,    -1,     9,    10,    -1,
      -1,    13,    14,    -1,    -1,    17,    18,    19,    -1,    -1,
      -1,    35,    -1,    25,    38,    67,    68,    -1,    42,    -1,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    40,    45,
      -1,    -1,    -1,    45,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    67,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    71
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     7,     9,    10,    13,    14,    17,    18,
      19,    25,    98,    99,   104,   133,   134,   135,   136,    28,
     101,   102,   103,   105,   109,   110,    99,   100,     0,   135,
     109,    36,    44,    45,    98,    99,   137,   138,    42,    73,
     106,   103,   105,    26,    27,    28,    32,    40,    42,    67,
      68,    72,    73,    74,    78,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      97,   115,    40,   124,    98,   105,    38,    42,    35,    38,
     116,   117,   118,   119,   120,   121,    76,    78,    92,    92,
      46,    59,    60,    34,    33,    32,    61,    62,    30,    31,
      63,    64,    65,    66,    26,    27,    28,    29,    49,    45,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    71,
      79,    91,    92,    35,    38,    42,    67,    68,    69,    70,
       5,     6,     8,    11,    12,    16,    20,    21,    22,    23,
      24,    73,    76,    98,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,    43,    78,   107,    73,    99,
     108,   111,   112,   113,   114,    73,    77,    80,    36,    41,
      44,   115,    45,   121,    43,    44,    76,    82,    83,    84,
      85,    86,    87,    87,    88,    88,    88,    88,    89,    89,
      90,    90,    91,    91,    91,    78,    73,    76,    78,    95,
      96,    73,    36,    77,    42,    36,   122,   129,    42,    73,
      48,    42,    42,    48,    41,   127,    36,    39,   105,    43,
      43,    44,    44,    39,   117,   118,    78,    48,    39,    43,
      44,    48,    98,   129,    20,    36,    76,    36,   122,    76,
      76,   122,   113,    73,   115,    80,    78,   122,   129,    36,
      42,    43,    43,    43,    36,   129,    76,   122,   122,   122,
     129,    36,    43,    15,    43,   129,    36,   122,   122,    43,
     122
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    76,    77,    78,    78,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      86,    86,    86,    87,    87,    87,    87,    87,    88,    88,
      88,    89,    89,    89,    90,    90,    90,    90,    91,    92,
      92,    92,    92,    93,    93,    93,    93,    94,    94,    94,
      94,    94,    94,    94,    94,    95,    95,    96,    96,    97,
      97,    97,    97,    98,    99,   100,   100,   101,   101,   102,
     102,   103,   103,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   105,   106,   106,   106,   106,   106,
     107,   107,   108,   108,   109,   109,   110,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   120,   120,   121,   121,   122,   122,   122,
     122,   122,   122,   123,   123,   123,   124,   125,   125,   126,
     126,   127,   127,   128,   129,   129,   130,   130,   130,   131,
     131,   131,   131,   132,   132,   132,   132,   133,   134,   134,
     135,   135,   136,   137,   137,   138,   138
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     3,     1,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     4,     4,
       3,     3,     2,     2,     2,     0,     1,     1,     3,     1,
       1,     1,     3,     3,     2,     0,     1,     0,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     4,     4,     4,
       0,     1,     0,     1,     0,     1,     2,     1,     1,     3,
       2,     1,     1,     3,     1,     3,     1,     3,     2,     4,
       0,     1,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     3,     0,     1,     1,
       2,     1,     1,     2,     0,     1,     5,     7,     5,     5,
       7,     9,     8,     3,     2,     2,     3,     1,     1,     2,
       1,     1,     4,     0,     1,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
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
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
            /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
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
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

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
      int yyn = yypact[*yyssp];
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
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
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
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
          yyp++;
          yyformat++;
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
| yyreduce -- Do a reduction.  |
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
#line 26 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("expression : assignment_expression\n");}
#line 1522 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 27 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("expression : expression , assignment_expression\n");}
#line 1528 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 28 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("constant_expression : conditional_expression\n");}
#line 1534 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 29 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_expression : conditional_expression\n");}
#line 1540 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 31 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_expression : unary_expression assignment_operator assignment_expression\n");}
#line 1546 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 32 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_operator : = \n");}
#line 1552 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 33 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_operator : *= \n");}
#line 1558 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 34 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_operator : /= \n");}
#line 1564 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 35 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_operator : %= \n");}
#line 1570 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 36 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_operator : += \n");}
#line 1576 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 37 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_operator : -= \n");}
#line 1582 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 38 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_operator : <<= \n");}
#line 1588 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 39 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_operator : >>= \n");}
#line 1594 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 40 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_operator : &= \n");}
#line 1600 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 41 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_operator : ^= \n");}
#line 1606 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 42 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_operator : |= \n");}
#line 1612 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 43 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("conditional_expression : logical_OR_expression\n");}
#line 1618 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 45 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("conditional_expression : logical_OR_expression '?' expression ':' conditional_expression\n");}
#line 1624 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 46 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("conditional_expression : logical_OR_expression\n");}
#line 1630 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 48 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("logical_AND_expression : logical_AND_expression && inclusive_OR_expression\n");}
#line 1636 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 49 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("logical_AND_expression : inclusive_OR_expression\n");}
#line 1642 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 51 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("logical_AND_expression : logical_AND_expression && inclusive_OR_expression\n");}
#line 1648 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 52 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("inclusive_OR_expression : exclusive_OR_expression\n");}
#line 1654 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 54 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("inclusive_OR_expression : inclusive_OR_expression '|' exclusive_OR_expression\n");}
#line 1660 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 55 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("exclusive_OR_expression : AND_expression\n");}
#line 1666 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 57 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("exclusive_OR_expression : exclusive_OR_expression ^ AND_expression\n");}
#line 1672 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 58 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("AND_expression : equality_expression\n");}
#line 1678 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 59 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("AND_expression : AND_expression & equality_expression\n");}
#line 1684 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 60 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("equality_expression : relational_expression\n");}
#line 1690 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 62 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("equality_expression : equality_expression == relational_expression\n");}
#line 1696 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 64 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("equality_expression : equality_expression != relational_expression\n");}
#line 1702 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 65 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("relational_expression : shift_expression\n");}
#line 1708 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 67 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("relational_expression : relational_expression < shift_expression\n");}
#line 1714 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 69 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("relational_expression : relational_expression > shift_expression\n");}
#line 1720 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 71 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("relational_expression : relational_expression >= shift_expression\n");}
#line 1726 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 73 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("relational_expression : relational_expression <= shift_expression\n");}
#line 1732 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 74 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("shift_expression : additive_expression\n");}
#line 1738 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 76 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("shift_expression : shift_expression << additive_expression\n");}
#line 1744 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 78 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("shift_expression : shift_expression >> additive_expression\n");}
#line 1750 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 81 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("additive_expression : multiplicative_expression\n");}
#line 1756 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 83 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("additive_expression : additive_expression + multiplicative_expression\n");}
#line 1762 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 85 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("additive_expression : additive_expression - multiplicative_expression\n");}
#line 1768 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 87 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("multiplicative_expression : cast_expression\n");}
#line 1774 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 89 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("multiplicative_expression : multiplicative_expression * cast_expression\n");}
#line 1780 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 91 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("multiplicative_expression : multiplicative_expression \ .cast_expression\n");}
#line 1786 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 93 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("multiplicative_expression : multiplicative_expression %% cast_expression\n");}
#line 1792 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 94 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("cast_expression : unary_expression\n");}
#line 1798 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 95 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("unary_expression : postfix_expression\n");}
#line 1804 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 96 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("unary_expression : ++ unary_expression\n");}
#line 1810 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 97 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("unary_expression : -- unary_expression\n");}
#line 1816 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 98 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("unary_expression : unary_operator cast_expression\n");}
#line 1822 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 99 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("unary_operator : +\n")}
#line 1828 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 100 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("unary_operator : -\n")}
#line 1834 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 101 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("unary_operator : &\n")}
#line 1840 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 102 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("unary_operator : *\n")}
#line 1846 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 103 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("postfix_expression : primary_expression\n");}
#line 1852 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 104 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression [ expression ]\n");}
#line 1858 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 106 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression (arguement expression list)\n");}
#line 1864 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 107 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression . IDENTIFIER\n");}
#line 1870 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 108 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression -> IDENTIFIER\n");}
#line 1876 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 109 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression ++\n");}
#line 1882 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 110 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression --\n");}
#line 1888 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 111 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression ;\n");}
#line 1894 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 112 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("argument_expression_list_opt : *empty*\n");}
#line 1900 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 113 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("argument_expression_list_opt : argument_expression_list\n");}
#line 1906 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 114 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("argument_expression_list : assignment_expression\n");}
#line 1912 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 116 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression (arguement expression list)\n");}
#line 1918 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 117 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("primary_expression : IDENTIFIER\n");}
#line 1924 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 118 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("primary_expression : CONSTANT\n");}
#line 1930 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 119 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("primary_expression : STRING_LITERAL\n");}
#line 1936 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 120 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("primary_expression : ( expression )\n");}
#line 1942 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 123 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("declaration : declaration_specifiers init_declarator_list_opt ; \n");}
#line 1948 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 125 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("declaration_specifiers : type_specifier declaration_specifiers_opt\n");}
#line 1954 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 126 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("declaration_specifiers_opt : *empty*\n");}
#line 1960 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 127 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("declaration_specifiers_opt : declaration_specifiers\n");}
#line 1966 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 128 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("init_declarator_list_opt : *empty*")}
#line 1972 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 129 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("init_declarator_list_opt : init_declarator_list")}
#line 1978 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 130 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("init_declarator_list : init_declarator")}
#line 1984 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 132 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("init_declarator_list : init_declarator_list , init_declarator\n");}
#line 1990 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 133 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("init_declarator : declarator\n");}
#line 1996 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 134 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("init_declarator : declarator = initializer\n");}
#line 2002 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 135 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("type_specifier : VOID\n");}
#line 2008 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 136 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("type_specifier : CHAR\n");}
#line 2014 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 137 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("type_specifier : SHORT\n");}
#line 2020 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 138 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("type_specifier : INT\n");}
#line 2026 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 139 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("type_specifier : LONG\n");}
#line 2032 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 140 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("type_specifier : FLOAT\n");}
#line 2038 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 141 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("type_specifier : DOUBLE\n");}
#line 2044 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 142 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("type_specifier : MATRIX\n");}
#line 2050 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 143 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("type_specifier : SIGNED\n");}
#line 2056 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 144 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("type_specifier : UNSIGNED\n");}
#line 2062 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 145 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("type_specifier : BOOL\n");}
#line 2068 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 147 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("declarator : pointer_opt direct_declarator\n");}
#line 2074 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 148 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("direct_declarator : IDENTIFIER\n");}
#line 2080 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 149 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("direct_declarator : ( declarator )\n");}
#line 2086 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 151 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("direct_declarator : direct_declarator [ assignment_expression_opt ]\n");}
#line 2092 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 153 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("direct_declarator : direct_declarator ( parameter_type_list )\n");}
#line 2098 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 155 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("direct_declarator : direct_declarator ( identifier_list_opt )\n");}
#line 2104 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 156 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt\n");}
#line 2110 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 157 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt : assignment_expression\n");}
#line 2116 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 158 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("identifier_list_opt : *empty*\n");}
#line 2122 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 159 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("identifier_list_opt : identifier_list\n");}
#line 2128 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 160 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("pointer_opt : *empty*\n");}
#line 2134 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 161 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("pointer_opt : pointer\n");}
#line 2140 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 162 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("pointer_opt : * pointer_opt\n");}
#line 2146 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 163 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("parameter_type_list : parameter_list\n");}
#line 2152 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 164 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("parameter_list : parameter_declaration\n");}
#line 2158 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 166 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("parameter_list : parameter_list , parameter_declaration\n");}
#line 2164 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 167 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("parameter_declaration : declaration_specifiers declarator\n");}
#line 2170 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 168 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("parameter_declaration : declaration_specifiers\n");}
#line 2176 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 169 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("identifier_list : IDENTIFIER\n");}
#line 2182 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 170 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("identifier_list : identifier_list , IDENTIFIER\n");}
#line 2188 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 171 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("initializer : assignment_expression\n");}
#line 2194 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 172 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("initializer : { initializer_row_list }\n");}
#line 2200 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 173 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("initializer_row_list : initializer_row\n");}
#line 2206 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 175 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("initializer_row_list : initializer_row_list ; initializer_row\n");}
#line 2212 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 176 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("initializer_row : designation_opt initializer\n");}
#line 2218 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 178 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("initializer_row : initializer_row , designation_opt initializer\n");}
#line 2224 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 179 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("designation_opt : *empty*\n");}
#line 2230 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 180 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("designation_opt : designation\n");}
#line 2236 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 181 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("designation_opt : designator_list =\n");}
#line 2242 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 182 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("designator_list : designator\n");}
#line 2248 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 183 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("designator_list : designator_list designator\n");}
#line 2254 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 184 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("designator : [ constant_expression ]\n");}
#line 2260 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 185 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("designator : . IDENTIFIER\n");}
#line 2266 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 187 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("statement : labeled_statement\n");}
#line 2272 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 188 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("statement : compound_statement\n");}
#line 2278 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 189 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("statement : expression_statement\n");}
#line 2284 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 190 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("statement : selection_statement\n");}
#line 2290 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 191 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("statement : iteration_statement\n");}
#line 2296 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 192 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("statement : jump_statement\n");}
#line 2302 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 194 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("labeled_statement : IDENTIFIER : statement\n");}
#line 2308 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 195 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("statement : CASE constant_expression : statement\n");}
#line 2314 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 196 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("statement : DEFAULT : statement\n");}
#line 2320 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 197 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("compound_statement : { block_item_list_opt }\n");}
#line 2326 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 198 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("block_item_list_opt : *empty*\n");}
#line 2332 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 199 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("block_item_list_opt : block_item_list\n");}
#line 2338 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 200 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("block_item_list : block_item\n");}
#line 2344 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 201 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("block_item_list : block_item_list block_item\n");}
#line 2350 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 202 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("block_item : declaration\n");}
#line 2356 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 203 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("block_item : statement\n");}
#line 2362 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 205 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("expression_statement : expression_opt ; \n");}
#line 2368 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 206 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("expression_opt : *empty*\n");}
#line 2374 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 207 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("expression_opt : expression\n");}
#line 2380 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 209 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("selection_statement : IF ( expression ) statement\n");}
#line 2386 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 211 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("selection_statement : IF ( expression ) statement ELSE statement\n");}
#line 2392 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 212 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("selection_statement : SWITCH ( expression ) statement\n");}
#line 2398 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 213 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("iteration_statement : WHILE ( expression ) statement\n");}
#line 2404 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 215 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("iteration_statement : DO statement WHILE ( expression ) ;\n");}
#line 2410 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 217 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("iteration_statement: FOR ( expression_opt ; expression_opt ; expression_opt )\n");}
#line 2416 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 219 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("iteration_statement: FOR ( declaration expression_opt ; expression_opt )\n");}
#line 2422 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 221 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("jump_statement : GOTO identifier ;\n");}
#line 2428 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 222 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("jump_statement : CONTINUE ;\n");}
#line 2434 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 223 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("jump_statement : BREAK ;\n");}
#line 2440 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 224 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("jump_statement : RETURN expression_opt ;\n");}
#line 2446 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 226 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("external_defination : translation_unit\n");}
#line 2452 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 227 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("translation_unit : external_declaration\n");}
#line 2458 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 228 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("translation_unit : translation_unit external_declaration\n");}
#line 2464 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 229 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("external_declaration : function_definition\n");}
#line 2470 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 230 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("external_declaration : declaration\n");}
#line 2476 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 232 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("function_definition : declaration_specifiers declarator declaration_list_opt compound_statement\n");}
#line 2482 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 233 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("declaration_list_opt : *empty*\n");}
#line 2488 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 234 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("declaration_list_opt : declaration_list\n");}
#line 2494 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 235 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("declaration_list : declaration\n");}
#line 2500 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 236 "./ass3_15CS30033.y" /* yacc.c:1646  */
    {printf("declaration_list : declaration_list declaration\n");}
#line 2506 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
    break;


#line 2510 "ass3_15CS30033.tab.c" /* yacc.c:1646  */
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

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

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
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
                  yystos[*yyssp], yyvsp);
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
#line 237 "./ass3_15CS30033.y" /* yacc.c:1906  */
                     /* C code */


void yyerror(char *s){
  printf("\nERROR %s at %s",s,yytext);
}
