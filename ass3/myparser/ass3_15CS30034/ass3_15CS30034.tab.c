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
#line 1 "./ass3_15CS30034.y" /* yacc.c:339  */

#include <stdio.h>
void yyerror(char *s);
extern int yylex();

#line 72 "ass3_15CS30034.tab.c" /* yacc.c:339  */

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
    identifier = 258,
    constant = 259,
    string_literal = 260,
    arrow_op = 261,
    inc_op = 262,
    dec_op = 263,
    ls_op = 264,
    rs_op = 265,
    le_op = 266,
    ge_op = 267,
    ee_op = 268,
    ne_op = 269,
    or_op = 270,
    and_op = 271,
    trans_op = 272,
    star_equal = 273,
    divide_equal = 274,
    mod_equal = 275,
    plus_equal = 276,
    minus_equal = 277,
    ls_equal = 278,
    rs_equal = 279,
    and_equal = 280,
    xor_equal = 281,
    or_equal = 282,
    VOID = 283,
    CHAR = 284,
    SHORT = 285,
    INT = 286,
    LONG = 287,
    FLOAT = 288,
    DOUBLE = 289,
    MATRIX = 290,
    SIGNED = 291,
    UNSIGNED = 292,
    BOOL = 293,
    CASE = 294,
    DEFAULT = 295,
    IF = 296,
    ELSE = 297,
    SWITCH = 298,
    WHILE = 299,
    DO = 300,
    FOR = 301,
    GOTO = 302,
    CONTINUE = 303,
    BREAK = 304,
    RETURN = 305
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

#line 171 "ass3_15CS30034.tab.c" /* yacc.c:358  */

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
#define YYFINAL  27
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   357

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  62
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  269

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   305

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    62,    57,     2,
      51,    52,    58,    59,    56,    60,    55,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    68,    70,
      63,    69,    64,    67,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,    66,    72,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    62,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    82,    82,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   218,   219,   220,   221,
     222,   223,   224,   225,   226
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "identifier", "constant",
  "string_literal", "arrow_op", "inc_op", "dec_op", "ls_op", "rs_op",
  "le_op", "ge_op", "ee_op", "ne_op", "or_op", "and_op", "trans_op",
  "star_equal", "divide_equal", "mod_equal", "plus_equal", "minus_equal",
  "ls_equal", "rs_equal", "and_equal", "xor_equal", "or_equal", "VOID",
  "CHAR", "SHORT", "INT", "LONG", "FLOAT", "DOUBLE", "MATRIX", "SIGNED",
  "UNSIGNED", "BOOL", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['",
  "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'/'", "'%'", "'<'",
  "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "argument_expression_list_opt", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "declaration_specifiers_opt",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "type_specifier", "declarator", "direct_declarator",
  "identifier_list_opt", "assignment_expression_opt", "pointer",
  "pointer_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "initializer",
  "initializer_row_list", "initializer_row", "designation_opt",
  "designator_list", "designator", "statement", "labeled_statement",
  "compound_statement", "block_item_list_opt", "block_item_list",
  "block_item", "expression_statement", "expression_opt",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list_opt", "declaration_list", YY_NULLPTR
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
     305,    40,    41,    91,    93,    46,    44,    38,    42,    43,
      45,    47,    37,    60,    62,    94,   124,    63,    58,    61,
      59,   123,   125
};
# endif

#define YYPACT_NINF -124

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-124)))

#define YYTABLE_NINF -162

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     279,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,   -45,   279,   138,  -124,  -124,   -37,   -42,
      10,  -124,   233,  -124,     7,  -124,  -124,  -124,  -124,  -124,
    -124,   -37,    60,  -124,   -45,    29,   279,  -124,   -37,    63,
    -124,    11,  -124,  -124,  -124,   105,   105,   105,  -124,  -124,
    -124,  -124,    73,  -124,    98,   232,   105,  -124,   -24,    -3,
      33,    -4,    59,    46,    64,    70,   144,    -6,  -124,  -124,
    -124,   176,  -124,  -124,   102,   303,   105,  -124,  -124,  -124,
     -29,   105,   158,    67,   121,    60,   -33,  -124,   175,  -124,
    -124,  -124,   105,   105,   179,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,   105,  -124,  -124,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   117,   105,
     118,   136,   139,   140,   234,   141,   186,   123,   126,   105,
     142,  -124,  -124,  -124,  -124,   125,   176,  -124,  -124,   129,
    -124,  -124,  -124,  -124,  -124,   -26,   148,   150,   172,  -124,
     173,  -124,   177,  -124,   105,  -124,   178,  -124,    73,  -124,
      73,  -124,  -124,  -124,  -124,   174,   188,  -124,    86,  -124,
    -124,  -124,  -124,  -124,   -24,   -24,    -3,    -3,    33,    33,
      33,    33,    -4,    -4,    59,    46,    64,    70,   144,   -44,
     234,   180,   234,   105,   105,   105,   199,   292,   190,  -124,
    -124,   202,  -124,  -124,  -124,  -124,  -124,  -124,   279,   241,
    -124,  -124,  -124,   121,    60,   105,  -124,  -124,   105,  -124,
     234,  -124,   -17,   -12,   -11,   194,   105,   206,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,   234,   234,   234,   105,
     216,   105,   207,  -124,  -124,    22,   105,   217,   234,   218,
     237,   105,  -124,  -124,   234,   238,  -124,   234,  -124
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,   159,   105,    75,     0,   156,   158,   105,     0,
      78,    79,    81,   106,     0,    76,    74,     1,   157,   104,
      73,   105,     0,   163,   105,     0,   162,    95,   105,    94,
      80,    81,     2,     3,     4,     0,     0,     0,    22,    23,
      24,    25,   120,     6,    18,    26,     0,    27,    31,    34,
      37,    42,    45,    47,    49,    51,    53,    55,    57,   114,
      82,   136,   160,   164,     0,   100,   102,    19,    20,    70,
       0,     0,     0,     0,   116,     0,     0,   122,     0,    11,
      12,    13,    16,     0,     0,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    59,     0,    26,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,     0,
       0,     0,     0,     0,   143,     0,     0,     0,     0,   143,
     144,   140,   141,   126,   127,     0,   137,   138,   128,     0,
     129,   130,   131,    96,   112,   105,     0,     0,   107,   108,
     101,   103,     0,     5,     0,    72,     0,   125,   120,   115,
     120,   118,   121,   123,    10,    17,     0,    14,     0,     9,
      58,    28,    29,    30,    32,    33,    35,    36,    40,    41,
      38,    39,    43,    44,    46,    48,    50,    52,    54,     0,
     143,     0,   143,     0,     0,     0,     0,   143,     0,   153,
     154,     0,   135,   139,   142,   110,    99,    98,     0,     0,
      97,    71,   124,   117,     0,     0,     8,     7,     0,   132,
     143,   134,     0,     0,     0,     0,   143,     0,   152,   155,
     109,   113,   119,    15,    56,   133,   143,   143,   143,     0,
       0,   143,   145,   147,   148,     0,   143,     0,   143,     0,
       0,   143,   146,   149,   143,     0,   151,   143,   150
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,  -124,  -124,   -27,  -124,   -40,     9,    18,
     -68,    26,   181,   195,   220,   221,   193,  -124,   -76,   -30,
    -124,   -46,   169,   -19,     0,  -124,  -124,  -124,   311,  -124,
      -7,  -124,  -124,  -124,  -124,   327,  -124,  -124,   130,  -124,
     -81,  -124,   185,   184,  -124,   261,  -123,  -124,   320,  -124,
    -124,   210,  -124,  -106,  -124,  -124,  -124,  -124,   342,  -124,
    -124,  -124
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    53,    54,   175,   176,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    79,
     106,   140,   166,    12,    34,    26,    19,    20,    21,    14,
      41,    39,   156,   162,    23,    24,   157,   158,   159,   160,
      70,    83,    84,    85,    86,    87,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    15,    16,    17,
      35,    36
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,    80,    69,    33,   171,   165,    22,   116,   117,   126,
      37,   206,   164,    18,    25,    13,   108,    73,    77,    78,
      81,    18,    82,   163,   228,   -77,  -111,   164,    30,   107,
    -111,    74,    18,   211,   109,   246,   172,   110,   111,   164,
     247,   248,   114,   115,   164,   164,   161,   178,   188,   189,
     190,   191,   141,   165,   107,    69,   112,   113,    38,   118,
     119,   127,   177,    42,    43,    44,    31,    45,    46,   181,
     182,   183,   120,   121,   259,   155,   180,   229,   164,   231,
      32,   199,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
      71,   237,   107,   122,    88,    89,    90,   245,    42,    43,
      44,    47,    45,    46,    75,    91,    76,    48,    49,    50,
      51,   184,   185,   252,   253,   254,    81,   141,    82,   123,
     250,    52,   186,   187,   221,   262,   124,   168,    27,   169,
     227,   266,   164,   242,   268,   257,   192,   193,   215,    92,
     260,    93,   244,    94,   153,   265,    47,   232,   233,   234,
     125,   167,    48,    49,    50,    51,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,   170,   174,   128,
      43,    44,   179,    45,    46,   200,   202,   203,   236,   208,
     204,   205,   207,   209,    69,   243,   210,   212,   164,   214,
     216,   107,   217,   255,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   129,   130,   131,   155,   132,
     133,   134,   135,   136,   137,   138,   139,    47,   218,   219,
     225,   220,   222,    48,    49,    50,    51,   128,    43,    44,
     226,    45,    46,   235,   241,   249,  -143,    71,   230,   258,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     238,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,   239,   129,   130,   131,   251,   132,   133,   134,
     135,   136,   137,   138,   139,    47,   256,   261,   263,   264,
     267,    48,    49,    50,    51,    42,    43,    44,   201,    45,
      46,   105,    32,   194,  -161,    71,   154,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,   195,   198,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    40,    47,   196,    29,   197,   173,   240,    48,
      49,    50,    51,   223,   224,    72,   213,    28
};

static const yytype_uint16 yycheck[] =
{
       0,    47,    32,    22,    85,    81,    13,    11,    12,    15,
       3,   134,    56,    58,    14,    15,    56,    36,    45,    46,
      53,    58,    55,    52,    68,    70,    52,    56,    70,    56,
      56,    38,    58,   139,    58,    52,    69,    61,    62,    56,
      52,    52,     9,    10,    56,    56,    76,    93,   116,   117,
     118,   119,    71,   129,    81,    85,    59,    60,    51,    63,
      64,    67,    92,     3,     4,     5,    56,     7,     8,   109,
     110,   111,    13,    14,    52,    75,   106,   200,    56,   202,
      69,   127,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      71,   207,   129,    57,     6,     7,     8,   230,     3,     4,
       5,    51,     7,     8,    51,    17,    53,    57,    58,    59,
      60,   112,   113,   246,   247,   248,    53,   146,    55,    65,
     236,    71,   114,   115,   164,   258,    66,    70,     0,    72,
      54,   264,    56,   224,   267,   251,   120,   121,   155,    51,
     256,    53,   228,    55,    52,   261,    51,   203,   204,   205,
      16,     3,    57,    58,    59,    60,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    56,     3,     3,
       4,     5,     3,     7,     8,    68,    68,    51,   207,     3,
      51,    51,    51,    70,   224,   225,    70,    72,    56,    70,
      52,   228,    52,   249,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   218,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    56,    56,
      56,    54,    54,    57,    58,    59,    60,     3,     4,     5,
      52,     7,     8,    44,     3,    51,    70,    71,    68,    42,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      70,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    70,    39,    40,    41,    70,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    70,    70,    70,    52,
      52,    57,    58,    59,    60,     3,     4,     5,   129,     7,
       8,    69,    69,   122,    71,    71,     3,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,   123,   126,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    31,    51,   124,    18,   125,    86,   218,    57,
      58,    59,    60,   168,   170,    35,   146,    15
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    96,    97,   102,   130,   131,   132,    58,    99,
     100,   101,   103,   107,   108,    97,    98,     0,   131,   108,
      70,    56,    69,    96,    97,   133,   134,     3,    51,   104,
     101,   103,     3,     4,     5,     7,     8,    51,    57,    58,
      59,    60,    71,    74,    75,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
     113,    71,   121,    96,   103,    51,    53,    78,    78,    92,
      94,    53,    55,   114,   115,   116,   117,   118,     6,     7,
       8,    17,    51,    53,    55,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    69,    93,    78,    80,    58,
      61,    62,    59,    60,     9,    10,    11,    12,    63,    64,
      13,    14,    57,    65,    66,    16,    15,    67,     3,    39,
      40,    41,    43,    44,    45,    46,    47,    48,    49,    50,
      94,    96,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,    52,     3,    97,   105,   109,   110,   111,
     112,    92,   106,    52,    56,    91,    95,     3,    70,    72,
      56,   113,    69,   118,     3,    76,    77,    92,    94,     3,
      92,    80,    80,    80,    81,    81,    82,    82,    83,    83,
      83,    83,    84,    84,    85,    86,    87,    88,    89,    94,
      68,    95,    68,    51,    51,    51,   119,    51,     3,    70,
      70,   126,    72,   124,    70,   103,    52,    52,    56,    56,
      54,    92,    54,   115,   116,    56,    52,    54,    68,   119,
      68,   119,    94,    94,    94,    44,    96,   126,    70,    70,
     111,     3,   113,    92,    91,   119,    52,    52,    52,    51,
     126,    70,   119,   119,   119,    94,    70,   126,    42,    52,
     126,    70,   119,    70,    52,   126,   119,    52,   119
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    73,    74,    74,    74,    74,    75,    75,    75,    75,
      75,    75,    75,    75,    76,    76,    77,    77,    78,    78,
      78,    78,    79,    79,    79,    79,    80,    81,    81,    81,
      81,    82,    82,    82,    83,    83,    83,    84,    84,    84,
      84,    84,    85,    85,    85,    86,    86,    87,    87,    88,
      88,    89,    89,    90,    90,    91,    91,    92,    92,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      94,    94,    95,    96,    97,    98,    98,    99,    99,   100,
     100,   101,   101,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   103,   104,   104,   104,   104,   104,
     105,   105,   106,   106,   107,   108,   108,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   117,   117,   118,   118,   119,   119,   119,   119,
     119,   119,   120,   120,   120,   121,   122,   122,   123,   123,
     124,   124,   125,   126,   126,   127,   127,   127,   128,   128,
     128,   128,   129,   129,   129,   129,   130,   130,   131,   131,
     132,   133,   133,   134,   134
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     4,     3,
       3,     2,     2,     2,     1,     3,     0,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     2,     0,     1,     0,     1,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     3,     4,     4,     4,
       0,     1,     0,     1,     2,     0,     1,     1,     1,     3,
       2,     1,     1,     3,     1,     3,     1,     3,     2,     4,
       0,     2,     1,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     3,     0,     1,     1,     2,
       1,     1,     2,     0,     1,     5,     7,     5,     5,     7,
       9,     8,     3,     2,     2,     3,     1,     2,     1,     1,
       4,     0,     1,     1,     2
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
#line 62 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("primary_expression : identifier\n");}
#line 1485 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 63 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("primary_expression : constant\n");}
#line 1491 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 64 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("primary_expression : string_literal\n");}
#line 1497 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 65 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("primary_expression : (expression)\n");}
#line 1503 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 66 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("postfix_expression : primary_expression\n");}
#line 1509 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 67 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression [ expression ]\n");}
#line 1515 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 68 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression (arguement expression list)\n");}
#line 1521 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 69 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression . identifier\n");}
#line 1527 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 70 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression -> identifier\n");}
#line 1533 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 71 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression ++\n");}
#line 1539 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 72 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression --\n");}
#line 1545 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 73 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("postfix_expression : postfix_expression .'\n");}
#line 1551 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 74 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("argument_expression_list : assignment_expression\n");}
#line 1557 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 75 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("argument_expression_list : assignment_expression_list\n");}
#line 1563 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 76 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("argument_expression_list_opt\n");}
#line 1569 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 77 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("argument_expression_list_opt : argument_expression_list\n");}
#line 1575 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 78 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("unary_expression : postfix_expression\n");}
#line 1581 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 79 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("unary_expression : ++ unary_expression\n");}
#line 1587 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 80 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("unary_expression : -- unary_expression\n");}
#line 1593 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 81 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("unary_expression : unary_operator cast_expression\n");}
#line 1599 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 82 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("unary_operator : &");}
#line 1605 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 82 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("unary_operator : *");}
#line 1611 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 82 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("unary_operator : +");}
#line 1617 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 82 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("unary_operator : -");}
#line 1623 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 83 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("cast_expression : unary_expression\n");}
#line 1629 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 84 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("multiplicative_expression : cast_expression\n");}
#line 1635 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 85 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("multiplicative_expression : multiplicative_expression * cast_expression\n");}
#line 1641 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 86 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("multiplicative_expression : multiplicative_expression / cast_expression\n");}
#line 1647 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 87 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("multiplicative_expression : multiplicative_expression %% .cast_expression\n");}
#line 1653 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 88 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("additive_expression : multiplicative_expression\n");}
#line 1659 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 89 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("additive_expression : additive_expression + multiplicative_expression\n");}
#line 1665 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 90 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("additive_expression : additive_expression - multiplicative_expression\n");}
#line 1671 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 91 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("shift_expression : additive_expression\n");}
#line 1677 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 92 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("shift_expression : shift_expression << additive_expression\n");}
#line 1683 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 93 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("shift_expression : shift_expression >> additive_expression\n");}
#line 1689 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 94 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("relational_expression : shift_expression\n");}
#line 1695 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 95 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("relational_expression : relational_expression < shift_expression\n");}
#line 1701 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 96 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("relational_expression : relational_expression > shift_expression\n");}
#line 1707 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 97 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("relational_expression : relational_expression <= shift_expression\n");}
#line 1713 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 98 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("relational_expression : relational_expression <= shift_expression\n");}
#line 1719 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 99 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("equality_expression : relational_expression\n");}
#line 1725 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 100 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("equality_expression : equality_expression == relational_expression\n");}
#line 1731 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 101 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("equality_expression : equality_expression != relational_expression\n");}
#line 1737 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 102 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("AND_expression : equality_expression\n");}
#line 1743 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 103 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("AND_expression : AND_expression & equality_expression\n");}
#line 1749 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 104 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("exclusive_OR_expression : AND_expression\n");}
#line 1755 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 105 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("exclusive_OR_expression : exclusive_OR_expression ^ AND_expression\n");}
#line 1761 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 106 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("inclusive_OR_expression : exclusive_OR_expression\n");}
#line 1767 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 107 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("inclusive_OR_expression : inclusive_OR_expression '|' exclusive_OR_expression\n");}
#line 1773 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 108 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("logical_AND_expression : inclusive_OR_expression\n");}
#line 1779 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 109 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("logical_AND_expression : logical_AND_expression && inclusive_OR_expression\n");}
#line 1785 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 110 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("logical_OR_expression : logical_AND_expression\n");}
#line 1791 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 111 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("logical_OR_expression : logical_OR_expression || logical_AND_expression\n");}
#line 1797 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 112 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("conditional_expression : logical_OR_expression\n");}
#line 1803 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 113 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("conditional_expression : logical_OR_expression '?' expression ':' conditional_expression\n");}
#line 1809 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 114 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_expression : conditional_expression\n");}
#line 1815 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 115 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_expression : unary_expression assignment_operator assignment_expression\n");}
#line 1821 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 117 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_operator : *= \n");}
#line 1827 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 118 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_operator : /= \n");}
#line 1833 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 119 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_operator : %%= \n");}
#line 1839 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 120 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_operator : += \n");}
#line 1845 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 121 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_operator : -= \n");}
#line 1851 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 122 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_operator : <<= \n");}
#line 1857 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 123 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_operator : >>= \n");}
#line 1863 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 124 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_operator : &= \n");}
#line 1869 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 125 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_operator : ^= \n");}
#line 1875 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 126 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_operator : |= \n");}
#line 1881 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 127 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("expression : assignment_expression\n");}
#line 1887 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 128 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("expression : expression ',' assignment_expression\n");}
#line 1893 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 129 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("constant_expression : conditional_expression\n");}
#line 1899 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 132 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("declaration : declaration_specifiers init_declarator_list_opt\n");}
#line 1905 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 133 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("declaration_specifiers : type_specifier declaration_specifiers_opt\n");}
#line 1911 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 134 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("declaration_specifiers_opt\n");}
#line 1917 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 135 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("declaration_specifiers_opt : declaration_specifiers\n");}
#line 1923 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 136 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("init_declarator_list_opt\n");}
#line 1929 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 137 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("declaration : declaration_specifiers init_declarator_list_opt\n");}
#line 1935 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 138 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("init_declarator_list : init_declarator\n");}
#line 1941 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 139 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("\n");}
#line 1947 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 140 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("init_declarator : declarator\n");}
#line 1953 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 141 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("init_declarator : declarator = initializer\n");}
#line 1959 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 142 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("type_specifier : VOID\n");}
#line 1965 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 143 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("type_specifier : CHAR\n");}
#line 1971 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 144 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("type_specifier : SHORT\n");}
#line 1977 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 145 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("type_specifier : INT\n");}
#line 1983 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 146 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("type_specifier : LONG\n");}
#line 1989 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 147 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("type_specifier : FLOAT\n");}
#line 1995 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 148 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("type_specifier : DOUBLE\n");}
#line 2001 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 149 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("type_specifier : MATRIX\n");}
#line 2007 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 150 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("type_specifier : SIGNED\n");}
#line 2013 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 151 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("type_specifier : UNSIGNED\n");}
#line 2019 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 152 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("type_specifier : BOOL\n");}
#line 2025 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 153 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("declarator : pointer_opt direct_declarator\n");}
#line 2031 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 154 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("direct_declarator : identifier\n");}
#line 2037 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 155 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("direct_declarator : ( declarator )\n");}
#line 2043 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 156 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("direct_declarator : direct_declarator [ assignment_expression_opt ]\n");}
#line 2049 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 157 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("direct_declarator : direct_declarator ( parameter_type_list )\n");}
#line 2055 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 158 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("direct_declarator : direct_declarator ( identifier_list_opt )\n");}
#line 2061 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 159 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("identifier_list_opt\n");}
#line 2067 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 160 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("identifier_list_opt : identifier_list\n");}
#line 2073 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 161 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt\n");}
#line 2079 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 162 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt : assignment_expression\n");}
#line 2085 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 163 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("pointer : * pointer_opt\n");}
#line 2091 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 164 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("pointer_opt\n");}
#line 2097 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 165 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("pointer_opt : pointer\n");}
#line 2103 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 166 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("parameter_type_list : parameter_list\n");}
#line 2109 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 167 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("parameter_list : parameter_declaration\n");}
#line 2115 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 168 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("parameter_list : parameter_list , parameter_declaration\n");}
#line 2121 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 169 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("parameter_declaration : declaration_specifiers declarator\n");}
#line 2127 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 170 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("parameter_declaration : declaration_specifiers\n");}
#line 2133 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 171 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("identifier_list : identifier\n");}
#line 2139 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 172 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("identifier_list : identifier_list , identifieridentifier\n");}
#line 2145 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 173 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("initializer : assignment_expression\n");}
#line 2151 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 174 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("initializer : { initializer_row_list }\n");}
#line 2157 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 175 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("initializer_row_list : initializer_row\n");}
#line 2163 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 176 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("initializer_row_list : initializer_row_list ; initializer_row\n");}
#line 2169 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 177 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("initializer_row : designation_opt initializer\n");}
#line 2175 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 178 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("initializer_row : initializer_row , designation_opt initializer\n");}
#line 2181 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 179 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("designation_opt\n");}
#line 2187 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 180 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("designation_opt : designator_list =\n");}
#line 2193 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 181 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("designator_list : designator\n");}
#line 2199 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 182 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("designator_list : designator_list designator\n");}
#line 2205 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 183 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("designator : [ constant_expression ]\n");}
#line 2211 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 184 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("designator : . identifier\n");}
#line 2217 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 187 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("statement : labeled_statement\n");}
#line 2223 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 188 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("statement : compound_statement\n");}
#line 2229 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 189 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("statement : expression_statement\n");}
#line 2235 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 190 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("statement : selection_statement\n");}
#line 2241 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 191 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("statement : iteration_statement\n");}
#line 2247 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 192 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("statement : jump_statement\n");}
#line 2253 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 193 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("labeled_statement : identifier : statement\n");}
#line 2259 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 194 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("statement : CASE constant_expression : statement\n");}
#line 2265 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 195 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("statement : DEFAULT : statement\n");}
#line 2271 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 196 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("compound_statement : { block_item_list_opt }\n");}
#line 2277 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 197 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("block_item_list_opt\n");}
#line 2283 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 198 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("block_item_list_opt : block_item_list\n");}
#line 2289 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 199 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("block_item_list : block_item\n");}
#line 2295 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 200 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("block_item_list : block_item_list block_item\n");}
#line 2301 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 201 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("block_item : declaration\n");}
#line 2307 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 202 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("block_item : statement\n");}
#line 2313 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 203 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("expression_statement : expression_opt ; \n");}
#line 2319 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 204 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("expression_opt\n");}
#line 2325 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 205 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("expression_opt : expression\n");}
#line 2331 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 206 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("selection_statement : IF ( expression ) statement\n");}
#line 2337 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 207 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("selection_statement : IF ( expression ) statement ELSE statement\n");}
#line 2343 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 208 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("selection_statement : SWITCH ( expression ) statement\n");}
#line 2349 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 209 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("iteration_statement : WHILE ( expression ) statement\n");}
#line 2355 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 210 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("iteration_statement : DO statement WHILE '(' expression ')' ';'\n");}
#line 2361 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 211 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("iteration_statement: FOR ( expression_opt ; expression_opt ; expression_opt )\n");}
#line 2367 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 212 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("iteration_statement : FOR ( declaration expression_opt ; expression_opt )\n");}
#line 2373 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 213 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("jump_statement : GOTO identifier ;\n");}
#line 2379 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 214 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("jump_statement : CONTINUE ;\n");}
#line 2385 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 215 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("jump_statement : BREAK\n");}
#line 2391 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 216 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("jump_statement : RETURN expression_opt ;\n");}
#line 2397 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 218 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("translation_unit : external_declaration\n");}
#line 2403 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 219 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("translation_unit : external_declaration translation_unit\n");}
#line 2409 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 220 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("external_declaration : function_definition\n");}
#line 2415 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 221 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("external_declaration : declaration\n");}
#line 2421 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 222 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("function_definition : declaration_specifiers declarator declaration_list_opt compound_statement\n");}
#line 2427 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 223 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("declaration_list_opt\n");}
#line 2433 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 224 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("declaration_list_opt : declaration_list\n");}
#line 2439 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 225 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("declaration_list : declaration\n");}
#line 2445 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 226 "./ass3_15CS30034.y" /* yacc.c:1646  */
    {printf("declaration_list : declaration_list declaration\n");}
#line 2451 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
    break;


#line 2455 "ass3_15CS30034.tab.c" /* yacc.c:1646  */
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
#line 227 "./ass3_15CS30034.y" /* yacc.c:1906  */


void yyerror(char *s)
{
  printf("\nERROR %s around %s",s,yytext);
}
