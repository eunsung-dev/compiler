   #define YYSTYPE_IS_DECLARED  1

   typedef long YYSTYPE;
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
#line 9 "kim.y" /* yacc.c:339  */

#include <stdio.h>
#line 12 "kim.y" /* yacc.c:339  */

int yylex();
#line 15 "kim.y" /* yacc.c:339  */

void yyerror();
#line 18 "kim.y" /* yacc.c:339  */

#include "type.h"
extern int line_no, syntax_err;
extern A_NODE *root;
extern A_ID *current_id;
extern int current_level;
extern A_TYPE *int_type;

A_NODE *makeNode(NODE_NAME, A_NODE *, A_NODE *, A_NODE *);
A_NODE *makeNodeList(NODE_NAME, A_NODE *, A_NODE *);
A_ID *makeIdentifier(char *);
A_ID *makeDummyIdentifier();
A_TYPE *makeType(T_KIND);
A_SPECIFIER *makeSpecifier(A_TYPE *, S_KIND);
A_ID *searchIdentifier(char *, A_ID *);
A_ID *searchIdentifierAtCurrentLevel(char *, A_ID *);
A_SPECIFIER *updateSpecifier(A_SPECIFIER *, A_TYPE *, S_KIND);
void checkForwardReference();
void setDefaultSpecifier(A_SPECIFIER *);
A_ID *linkDeclaratorList(A_ID *, A_ID *);
A_ID *getIdentifierDeclared(char *);
A_TYPE *getTypeOfStructOrEnumRefIdentifier(T_KIND, char *, ID_KIND);
A_ID *setDeclaratorInit(A_ID *, A_NODE *);
A_ID *setDeclaratorKind(A_ID *, ID_KIND);
A_ID *setDeclaratorType(A_ID *, A_TYPE *);
A_ID *setDeclaratorElementType(A_ID *, A_TYPE *);
A_ID *setDeclaratorTypeAndKind(A_ID *, A_TYPE *, ID_KIND);
A_ID *setDeclaratorListSpecifier(A_ID *, A_SPECIFIER *);
A_ID *setFunctionDeclaratorSpecifier(A_ID *, A_SPECIFIER *);
A_ID *setFunctionDeclaratorBody(A_ID *, A_NODE *);
A_ID *setParameterDeclaratorSpecifier(A_ID *, A_SPECIFIER *);
A_ID *setStructDeclaratorListSpecifier(A_ID *, A_TYPE *);
A_TYPE *setTypeNameSpecifier(A_TYPE *, A_SPECIFIER *);
A_TYPE *setTypeElementType(A_TYPE *, A_TYPE *);
A_TYPE *setTypeField(A_TYPE *, A_ID *);
A_TYPE *setTypeExpr(A_TYPE *, A_NODE *);
A_TYPE *setTypeAndKindOfDeclarator(A_TYPE *, ID_KIND, A_ID *);
A_TYPE *setTypeStructOrEnumIdentifier(T_KIND, char *, ID_KIND);
BOOLEAN isNotSameFormalParameters(A_ID *, A_ID *);
BOOLEAN isNotSameType(A_TYPE *, A_TYPE *);
BOOLEAN isPointerOrArrayType(A_TYPE *);

void syntax_error();
void initialize();

void print_ast(A_NODE *);


#line 89 "y.tab.c" /* yacc.c:339  */

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

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IDENTIFIER = 258,
    AUTO_SYM = 259,
    BREAK_SYM = 260,
    CASE_SYM = 261,
    CONTINUE_SYM = 262,
    DEFAULT_SYM = 263,
    DO_SYM = 264,
    ELSE_SYM = 265,
    ENUM_SYM = 266,
    FOR_SYM = 267,
    IF_SYM = 268,
    RETURN_SYM = 269,
    SIZEOF_SYM = 270,
    STATIC_SYM = 271,
    STRUCT_SYM = 272,
    SWITCH_SYM = 273,
    TYPEDEF_SYM = 274,
    UNION_SYM = 275,
    WHILE_SYM = 276,
    TYPE_IDENTIFIER = 277,
    PLUSPLUS = 278,
    MINUSMINUS = 279,
    ARROW = 280,
    LSS = 281,
    GTR = 282,
    LEQ = 283,
    GEQ = 284,
    EQL = 285,
    NEQ = 286,
    AMPAMP = 287,
    BARBAR = 288,
    DOTDOTDOT = 289,
    LP = 290,
    RP = 291,
    LB = 292,
    RB = 293,
    LR = 294,
    RR = 295,
    COLON = 296,
    PERIOD = 297,
    COMMA = 298,
    EXCL = 299,
    STAR = 300,
    SLASH = 301,
    PERCENT = 302,
    AMP = 303,
    SEMICOLON = 304,
    PLUS = 305,
    MINUS = 306,
    ASSIGN = 307,
    INTEGER_CONSTANT = 308,
    FLOAT_CONSTANT = 309,
    STRING_LITERAL = 310,
    CHARACTER_CONSTANT = 311,
    VARIABLE_SYM = 312,
    BAR = 313
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define AUTO_SYM 259
#define BREAK_SYM 260
#define CASE_SYM 261
#define CONTINUE_SYM 262
#define DEFAULT_SYM 263
#define DO_SYM 264
#define ELSE_SYM 265
#define ENUM_SYM 266
#define FOR_SYM 267
#define IF_SYM 268
#define RETURN_SYM 269
#define SIZEOF_SYM 270
#define STATIC_SYM 271
#define STRUCT_SYM 272
#define SWITCH_SYM 273
#define TYPEDEF_SYM 274
#define UNION_SYM 275
#define WHILE_SYM 276
#define TYPE_IDENTIFIER 277
#define PLUSPLUS 278
#define MINUSMINUS 279
#define ARROW 280
#define LSS 281
#define GTR 282
#define LEQ 283
#define GEQ 284
#define EQL 285
#define NEQ 286
#define AMPAMP 287
#define BARBAR 288
#define DOTDOTDOT 289
#define LP 290
#define RP 291
#define LB 292
#define RB 293
#define LR 294
#define RR 295
#define COLON 296
#define PERIOD 297
#define COMMA 298
#define EXCL 299
#define STAR 300
#define SLASH 301
#define PERCENT 302
#define AMP 303
#define SEMICOLON 304
#define PLUS 305
#define MINUS 306
#define ASSIGN 307
#define INTEGER_CONSTANT 308
#define FLOAT_CONSTANT 309
#define STRING_LITERAL 310
#define CHARACTER_CONSTANT 311
#define VARIABLE_SYM 312
#define BAR 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 256 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   482

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  59
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  77
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

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
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    34,    34,    37,    38,    41,    42,    45,    45,    46,
      46,    49,    50,    53,    54,    57,    60,    61,    62,    63,
      66,    67,    68,    71,    72,    75,    76,    79,    80,    83,
      84,    87,    88,    91,    92,    93,    96,    96,    96,    97,
      97,    97,    98,   101,   102,   105,   106,   109,   112,   113,
     116,   119,   119,   120,   120,   121,   124,   125,   128,   129,
     129,   132,   133,   136,   137,   140,   141,   142,   143,   143,
     146,   147,   150,   151,   154,   155,   158,   159,   162,   163,
     166,   167,   168,   171,   172,   173,   174,   175,   178,   179,
     182,   183,   186,   187,   188,   189,   190,   191,   194,   195,
     198,   198,   201,   202,   205,   206,   207,   210,   211,   212,
     215,   217,   218,   221,   222,   223,   226,   227,   230,   231,
     235,   236,   239,   242,   245,   248,   249,   252,   255,   256,
     259,   260,   263,   264,   265,   268,   269,   270,   271,   272,
     275,   278,   279,   280,   283,   284,   285,   286,   289,   290,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     305,   306,   307,   308,   309,   310,   311,   314,   315,   316,
     317,   318,   319,   322
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "AUTO_SYM", "BREAK_SYM",
  "CASE_SYM", "CONTINUE_SYM", "DEFAULT_SYM", "DO_SYM", "ELSE_SYM",
  "ENUM_SYM", "FOR_SYM", "IF_SYM", "RETURN_SYM", "SIZEOF_SYM",
  "STATIC_SYM", "STRUCT_SYM", "SWITCH_SYM", "TYPEDEF_SYM", "UNION_SYM",
  "WHILE_SYM", "TYPE_IDENTIFIER", "PLUSPLUS", "MINUSMINUS", "ARROW", "LSS",
  "GTR", "LEQ", "GEQ", "EQL", "NEQ", "AMPAMP", "BARBAR", "DOTDOTDOT", "LP",
  "RP", "LB", "RB", "LR", "RR", "COLON", "PERIOD", "COMMA", "EXCL", "STAR",
  "SLASH", "PERCENT", "AMP", "SEMICOLON", "PLUS", "MINUS", "ASSIGN",
  "INTEGER_CONSTANT", "FLOAT_CONSTANT", "STRING_LITERAL",
  "CHARACTER_CONSTANT", "VARIABLE_SYM", "BAR", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition", "@1",
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
  "logical_or_expression", "logical_and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression", "unary_expression",
  "postfix_expression", "primary_expression", "type_name", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313
};
# endif

#define YYPACT_NINF -231

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-231)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     423,  -231,  -231,    42,  -231,  -231,  -231,  -231,  -231,    35,
      33,    82,   423,  -231,  -231,  -231,    35,   231,   231,  -231,
      90,  -231,  -231,    13,   120,    62,    64,    71,  -231,  -231,
    -231,    61,    70,  -231,    -3,  -231,  -231,   128,   155,   157,
     120,  -231,   301,   158,   168,  -231,  -231,    35,   287,   157,
     159,  -231,  -231,  -231,   231,  -231,   324,   347,   347,   264,
     301,   301,   301,   301,   301,  -231,  -231,  -231,  -231,   152,
    -231,  -231,  -231,  -231,  -231,   166,   169,   -10,   102,  -231,
     111,    87,  -231,   148,     0,  -231,   168,   156,     3,  -231,
    -231,   160,   287,  -231,  -231,  -231,  -231,   132,   231,    31,
     173,  -231,   167,  -231,   264,  -231,   301,  -231,  -231,    36,
     175,   178,  -231,  -231,  -231,  -231,  -231,  -231,  -231,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,  -231,  -231,   201,   301,   301,   217,    47,
     174,  -231,   168,  -231,    54,   132,    35,    66,  -231,   210,
     231,  -231,    35,   401,   301,  -231,    37,  -231,  -231,   151,
    -231,   161,   185,   437,   154,  -231,  -231,   301,   169,   -10,
     102,   102,  -231,  -231,  -231,  -231,    87,    87,  -231,  -231,
    -231,  -231,  -231,   191,   193,  -231,   199,  -231,  -231,   301,
    -231,  -231,   287,   165,    -2,  -231,  -231,  -231,  -231,   189,
     301,   190,   200,   210,   205,   209,   301,   211,   221,  -231,
     212,   210,  -231,  -231,  -231,  -231,  -231,  -231,  -231,   208,
    -231,   226,   233,   232,   151,   231,   301,  -231,  -231,  -231,
    -231,  -231,   301,  -231,  -231,  -231,  -231,    35,  -231,  -231,
     230,  -231,   210,   251,   301,   301,   224,  -231,   301,   301,
    -231,  -231,  -231,  -231,  -231,  -231,   238,   239,  -231,  -231,
     210,  -231,   241,   242,   236,   246,  -231,   253,   255,  -231,
    -231,  -231,   301,   210,   301,   210,   210,   210,   256,  -231,
     244,   284,  -231,  -231,   247,   301,   210,  -231,  -231,  -231
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    65,    20,    53,    21,    43,    22,    44,    35,     0,
      63,     0,     2,     3,     5,     6,    23,    17,    16,    33,
      39,    34,     9,     0,    62,    55,     0,     0,    64,     1,
       4,     0,    24,    25,    27,    19,    18,    42,     0,     0,
      61,    68,   120,     0,     0,    66,    15,     0,     0,     0,
       0,    40,   100,    10,    70,   167,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   171,   170,     0,
     121,   122,   123,   124,   125,   127,   128,   130,   132,   135,
     140,   141,   144,   148,   150,   160,     0,    58,     0,    56,
      26,    27,     0,    28,    29,     8,    37,     0,    11,    78,
       0,    71,    72,    74,     0,   158,     0,   151,   152,    78,
       0,     0,   155,   148,   154,   153,   157,   156,    67,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   165,   166,     0,   116,     0,     0,     0,
       0,    54,     0,    31,     0,     0,     0,     0,    45,    88,
      12,    13,    23,    70,   120,    76,    80,    77,    79,    81,
      69,     0,     0,    70,    80,   173,   172,     0,   129,   131,
     133,   134,   136,   137,   138,   139,   142,   143,   145,   146,
     147,   126,   164,     0,   117,   118,     0,   163,    52,     0,
      57,    30,     0,     0,     0,    48,    50,    41,    46,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,   102,
       0,    89,    90,    92,    93,    94,    95,    96,    97,     0,
      14,     0,     0,     0,    82,    70,   120,    73,    75,   159,
     149,   162,     0,   161,    60,    32,    38,     0,    47,   115,
       0,   114,     0,     0,   111,     0,     0,   112,     0,     0,
     101,    91,   103,    85,    83,    84,     0,     0,   119,    49,
       0,    99,     0,     0,     0,     0,   113,     0,     0,    87,
      86,    98,     0,     0,   111,     0,     0,     0,     0,   109,
       0,   104,   106,   107,     0,   111,     0,   108,   110,   105
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -231,  -231,  -231,   283,  -231,  -231,  -231,  -231,  -231,   -83,
      10,  -231,  -231,  -231,   250,   -81,  -231,   -84,  -231,  -231,
    -231,  -231,  -231,  -231,   153,  -128,  -231,    63,  -231,  -231,
    -231,   215,   163,  -231,    -8,    -7,   -19,  -231,   -52,  -231,
    -231,   142,   197,   -78,  -138,  -231,  -231,  -107,  -231,    40,
    -231,  -231,  -231,  -231,  -231,  -230,  -231,  -231,  -231,  -142,
     -41,   -42,  -231,  -127,  -231,  -231,   188,   203,    53,    16,
    -231,    65,   -31,    -4,  -231,  -231,   225
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   149,   150,    15,
      99,    17,    31,    32,    33,    93,   144,    18,    19,    50,
     145,    38,    97,    20,   147,   148,   194,   195,    21,    43,
      26,    88,    89,   140,    22,    23,    24,    54,   221,   101,
     102,   103,   157,   158,   159,   210,   211,   212,   213,   214,
      98,   215,   216,   217,   263,   246,   218,   183,   184,    69,
      70,   219,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   111
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      71,    27,   100,    28,    40,   181,    71,    94,    34,   185,
      16,   143,   223,   146,   264,   151,     1,   110,   224,   198,
     121,   122,    16,   133,   134,   135,   224,    35,    36,   112,
     114,   115,   116,   117,     1,   136,    -7,   137,     1,    91,
       1,   237,   138,   141,   280,    25,   142,   238,     9,    48,
      71,    94,   105,   107,   108,   288,   113,   113,   113,   113,
     113,   146,   110,   146,   110,   198,   153,   220,   154,   109,
       9,   163,   153,   154,   154,   222,    10,     3,    10,    53,
      10,    10,    29,     5,   257,   222,     7,   188,     8,    95,
     142,   155,   156,    37,   191,   186,   243,   192,   178,   179,
     180,   -51,   164,    44,   251,   258,   197,    45,   152,   146,
      46,   235,    71,    47,   109,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   123,   124,
     125,   126,   129,   130,   131,   261,   230,    40,   196,   172,
     173,   174,   175,     3,    91,    27,   156,    71,   234,     5,
      71,    94,     7,   271,     8,    41,   164,    42,    71,   240,
     152,   127,   128,   113,   247,     2,   279,   -36,   281,   282,
     283,    87,     3,   256,   170,   171,     3,     4,     5,   289,
       6,     7,     5,     8,    71,     7,   225,     8,   226,   163,
     118,   154,   176,   177,    51,   227,    52,    86,    96,   119,
     132,   120,   247,   265,   182,   236,   267,   268,   -59,   160,
     161,   166,    48,    55,   167,   199,   200,   201,   202,   203,
     187,   229,   204,   205,   206,    56,   189,   231,   207,   196,
     278,   208,   247,    57,    58,     2,   232,   233,   239,   241,
     244,   242,     3,   247,   245,    59,   248,     4,     5,    52,
       6,     7,   250,     8,    60,    61,   249,   252,    62,   209,
      63,    64,   253,    65,    66,    67,    68,    55,     2,   254,
     255,   260,   262,   266,   269,     3,   272,   270,   273,    56,
       4,     5,   275,     6,     7,   274,     8,    57,    58,   276,
      55,   277,   284,   285,   286,    30,   287,    90,   193,    59,
     259,   139,    56,   228,    55,   190,   165,   168,    60,    61,
      57,    58,    62,     0,    63,    64,    56,    65,    66,    67,
      68,     0,    59,   169,    57,    58,    92,    55,     0,   162,
       0,    60,    61,     0,     0,    62,    59,    63,    64,    56,
      65,    66,    67,    68,     0,    60,    61,    57,    58,    62,
      55,    63,    64,     0,    65,    66,    67,    68,     0,   104,
       0,     0,    56,     0,     0,     0,     0,     0,    60,    61,
      57,    58,    62,     0,    63,    64,     0,    65,    66,    67,
      68,     0,   106,     0,     0,     0,     0,     0,     0,     0,
       0,    60,    61,     0,     0,    62,     0,    63,    64,     0,
      65,    66,    67,    68,     1,     2,     0,     0,     0,     0,
       0,     0,     3,     0,     0,     0,     0,     4,     5,     0,
       6,     7,     0,     8,     0,     0,     1,     2,     0,     0,
       0,     0,     0,     0,     3,     0,   153,     0,   154,     4,
       5,     2,     6,     7,     0,     8,    10,     0,     3,     0,
       0,     0,     0,     4,     5,     0,     6,     7,     9,     8,
       0,     0,     0,     0,     0,     0,     0,     0,    10,     0,
       0,     0,   163,     0,   154,     0,     0,     0,     0,     0,
       0,     0,    10
};

static const yytype_int16 yycheck[] =
{
      42,     9,    54,    10,    23,   132,    48,    48,    16,   136,
       0,    92,   154,    97,   244,    98,     3,    59,   156,   147,
      30,    31,    12,    23,    24,    25,   164,    17,    18,    60,
      61,    62,    63,    64,     3,    35,    39,    37,     3,    47,
       3,    43,    42,    40,   274,     3,    43,    49,    35,    52,
      92,    92,    56,    57,    58,   285,    60,    61,    62,    63,
      64,   145,   104,   147,   106,   193,    35,   150,    37,    59,
      35,    35,    35,    37,    37,   153,    45,    11,    45,    39,
      45,    45,     0,    17,   226,   163,    20,    40,    22,    49,
      43,    99,    99,     3,    40,   137,   203,    43,   129,   130,
     131,    39,   109,    39,   211,   232,    40,    36,    98,   193,
      49,   192,   154,    43,   104,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,    26,    27,
      28,    29,    45,    46,    47,   242,   167,   156,   146,   123,
     124,   125,   126,    11,   152,   153,   153,   189,   189,    17,
     192,   192,    20,   260,    22,    35,   163,    37,   200,   200,
     150,    50,    51,   167,   206,     4,   273,    39,   275,   276,
     277,     3,    11,   225,   121,   122,    11,    16,    17,   286,
      19,    20,    17,    22,   226,    20,    35,    22,    37,    35,
      38,    37,   127,   128,    39,    34,    39,    39,    39,    33,
      52,    32,   244,   245,     3,    40,   248,   249,    52,    36,
      43,    36,    52,     3,    36,     5,     6,     7,     8,     9,
       3,    36,    12,    13,    14,    15,    52,    36,    18,   237,
     272,    21,   274,    23,    24,     4,    43,    38,    49,    49,
      35,    41,    11,   285,    35,    35,    35,    16,    17,    39,
      19,    20,    40,    22,    44,    45,    35,    49,    48,    49,
      50,    51,    36,    53,    54,    55,    56,     3,     4,    36,
      38,    41,    21,    49,    36,    11,    35,    38,    36,    15,
      16,    17,    36,    19,    20,    49,    22,    23,    24,    36,
       3,    36,    36,    49,    10,    12,    49,    47,   145,    35,
     237,    86,    15,   161,     3,   142,   109,   119,    44,    45,
      23,    24,    48,    -1,    50,    51,    15,    53,    54,    55,
      56,    -1,    35,   120,    23,    24,    39,     3,    -1,   104,
      -1,    44,    45,    -1,    -1,    48,    35,    50,    51,    15,
      53,    54,    55,    56,    -1,    44,    45,    23,    24,    48,
       3,    50,    51,    -1,    53,    54,    55,    56,    -1,    35,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    44,    45,
      23,    24,    48,    -1,    50,    51,    -1,    53,    54,    55,
      56,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    48,    -1,    50,    51,    -1,
      53,    54,    55,    56,     3,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    16,    17,    -1,
      19,    20,    -1,    22,    -1,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    -1,    35,    -1,    37,    16,
      17,     4,    19,    20,    -1,    22,    45,    -1,    11,    -1,
      -1,    -1,    -1,    16,    17,    -1,    19,    20,    35,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,    11,    16,    17,    19,    20,    22,    35,
      45,    60,    61,    62,    63,    68,    69,    70,    76,    77,
      82,    87,    93,    94,    95,     3,    89,    93,    94,     0,
      62,    71,    72,    73,    93,    69,    69,     3,    80,    65,
      95,    35,    37,    88,    39,    36,    49,    43,    52,    64,
      78,    39,    39,   108,    96,     3,    15,    23,    24,    35,
      44,    45,    48,    50,    51,    53,    54,    55,    56,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    39,     3,    90,    91,
      73,    93,    39,    74,   119,   108,    39,    81,   109,    69,
      97,    98,    99,   100,    35,   132,    35,   132,   132,    69,
     120,   135,   131,   132,   131,   131,   131,   131,    38,    33,
      32,    30,    31,    26,    27,    28,    29,    50,    51,    45,
      46,    47,    52,    23,    24,    25,    35,    37,    42,    90,
      92,    40,    43,    74,    75,    79,    76,    83,    84,    66,
      67,    68,    69,    35,    37,    93,    94,   101,   102,   103,
      36,    43,   135,    35,    94,   101,    36,    36,   125,   126,
     127,   127,   128,   128,   128,   128,   130,   130,   131,   131,
     131,   122,     3,   116,   117,   122,   120,     3,    40,    52,
      91,    40,    43,    83,    85,    86,    93,    40,    84,     5,
       6,     7,     8,     9,    12,    13,    14,    18,    21,    49,
     104,   105,   106,   107,   108,   110,   111,   112,   115,   120,
      68,    97,   102,   118,   103,    35,    37,    34,   100,    36,
     131,    36,    43,    38,   119,    74,    40,    43,    49,    49,
     119,    49,    41,   106,    35,    35,   114,   120,    35,    35,
      40,   106,    49,    36,    36,    38,    97,   118,   122,    86,
      41,   106,    21,   113,   114,   120,    49,   120,   120,    36,
      38,   106,    35,    36,    49,    36,    36,    36,   120,   106,
     114,   106,   106,   106,    36,    49,    10,    49,   114,   106
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    59,    60,    61,    61,    62,    62,    64,    63,    65,
      63,    66,    66,    67,    67,    68,    69,    69,    69,    69,
      70,    70,    70,    71,    71,    72,    72,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    78,    79,    77,    80,
      81,    77,    77,    82,    82,    83,    83,    84,    85,    85,
      86,    88,    87,    89,    87,    87,    90,    90,    91,    92,
      91,    93,    93,    94,    94,    95,    95,    95,    96,    95,
      97,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   103,   103,   103,   103,   103,   104,   104,
     105,   105,   106,   106,   106,   106,   106,   106,   107,   107,
     109,   108,   110,   110,   111,   111,   111,   112,   112,   112,
     113,   114,   114,   115,   115,   115,   116,   116,   117,   117,
     118,   118,   119,   120,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   126,   126,   127,   127,   127,   127,   127,
     128,   129,   129,   129,   130,   130,   130,   130,   131,   131,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     133,   133,   133,   133,   133,   133,   133,   134,   134,   134,
     134,   134,   134,   135
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     1,     1,     0,     0,     7,     0,
       0,     6,     2,     1,     1,     1,     2,     3,     1,     3,
       1,     0,     6,     0,     5,     2,     1,     3,     1,     0,
       4,     2,     1,     1,     2,     1,     3,     4,     0,     5,
       0,     1,     1,     3,     1,     3,     2,     2,     0,     1,
       1,     1,     2,     3,     3,     3,     4,     4,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     4,     3,
       0,     5,     1,     2,     5,     7,     5,     5,     7,     5,
       5,     0,     1,     3,     2,     2,     0,     1,     1,     3,
       0,     1,     1,     1,     1,     1,     3,     1,     1,     3,
       1,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     1,     3,     3,     1,     3,     3,     3,     1,     4,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       1,     4,     4,     3,     3,     2,     2,     1,     1,     1,
       1,     1,     3,     2
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
#line 34 "kim.y" /* yacc.c:1646  */
    {root=makeNode(N_PROGRAM,NIL,(yyvsp[0]),NIL); checkForwardReference();}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 37 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 38 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 41 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 42 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 45 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 45 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 46 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[0]),makeSpecifier(int_type,0));}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 46 "kim.y" /* yacc.c:1646  */
    {(yyval)=setFunctionDeclaratorBody((yyvsp[-1]),(yyvsp[0]));}
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 49 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 50 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 53 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1674 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 54 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1680 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 57 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1686 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 60 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier((yyvsp[0]),0);}
#line 1692 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 61 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeSpecifier(0,(yyvsp[0]));}
#line 1698 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 62 "kim.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),(yyvsp[-1]),0);}
#line 1704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 63 "kim.y" /* yacc.c:1646  */
    {(yyval)=updateSpecifier((yyvsp[0]),0,(yyvsp[-1]));}
#line 1710 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 66 "kim.y" /* yacc.c:1646  */
    {(yyval)=S_AUTO;}
#line 1716 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 67 "kim.y" /* yacc.c:1646  */
    {(yyval)=S_STATIC;}
#line 1722 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 68 "kim.y" /* yacc.c:1646  */
    {(yyval)=S_TYPEDEF;}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 71 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeDummyIdentifier();}
#line 1734 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 72 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 75 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 76 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 79 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1758 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 80 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1764 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 83 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST_ONE,NIL,(yyvsp[0]),NIL);}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 84 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1776 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 87 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_INIT_LIST,(yyvsp[0]),NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));}
#line 1782 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 88 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_INIT_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 1788 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 91 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 92 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1800 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 93 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1806 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 96 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1812 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 96 "kim.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 96 "kim.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1])); current_level--; current_id=(yyvsp[-2]);}
#line 1824 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 97 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType((yyvsp[0]));}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 97 "kim.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 97 "kim.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval)=setTypeField((yyvsp[-4]),(yyvsp[-1])); current_level--; current_id=(yyvsp[-2]);}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 98 "kim.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier((yyvsp[-1]),(yyvsp[0]),ID_STRUCT);}
#line 1848 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 101 "kim.y" /* yacc.c:1646  */
    {(yyval)=T_STRUCT;}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 102 "kim.y" /* yacc.c:1646  */
    {(yyval)=T_UNION;}
#line 1860 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 105 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 106 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-1]),(yyvsp[0]));}
#line 1872 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 109 "kim.y" /* yacc.c:1646  */
    {(yyval)=setStructDeclaratorListSpecifier((yyvsp[-1]),(yyvsp[-2]));}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 112 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1884 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 113 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 116 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 119 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeStructOrEnumIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1902 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 119 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1908 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 120 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_ENUM);}
#line 1914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 120 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeField((yyvsp[-3]),(yyvsp[-1]));}
#line 1920 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 121 "kim.y" /* yacc.c:1646  */
    {(yyval)=getTypeOfStructOrEnumRefIdentifier(T_ENUM,(yyvsp[0]),ID_ENUM);}
#line 1926 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 124 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1932 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 125 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 1938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 128 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1944 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 129 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[0])),ID_ENUM_LITERAL);}
#line 1950 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 129 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorInit((yyvsp[-2]),(yyvsp[0]));}
#line 1956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 132 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[0]),(yyvsp[-1]));}
#line 1962 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 133 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 136 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 1974 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 137 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 140 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeIdentifier((yyvsp[0]));}
#line 1986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 141 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 1992 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 142 "kim.y" /* yacc.c:1646  */
    {(yyval)=setDeclaratorElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 143 "kim.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 2004 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 143 "kim.y" /* yacc.c:1646  */
    {checkForwardReference(); current_id=(yyvsp[-2]); current_level--; (yyval)=setDeclaratorElementType((yyvsp[-4]),setTypeField(makeType(T_FUNC),(yyvsp[-1])));}
#line 2010 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 146 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 147 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 150 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 151 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),setDeclaratorKind(makeDummyIdentifier(),ID_PARM));}
#line 2034 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 154 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2040 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 155 "kim.y" /* yacc.c:1646  */
    {(yyval)=linkDeclaratorList((yyvsp[-2]),(yyvsp[0]));}
#line 2046 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 158 "kim.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 159 "kim.y" /* yacc.c:1646  */
    {(yyval)=setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(),(yyvsp[0])),(yyvsp[-1]));}
#line 2058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 162 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2064 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 163 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 166 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeType(T_POINTER);}
#line 2076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 167 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2082 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 168 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[0]),makeType(T_POINTER));}
#line 2088 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 171 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2094 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 172 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_ARRAY),(yyvsp[-1]));}
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 173 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeExpr(makeType(T_FUNC),(yyvsp[-1]));}
#line 2106 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 174 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_ARRAY),(yyvsp[-1])));}
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 175 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeElementType((yyvsp[-3]),setTypeExpr(makeType(T_FUNC),(yyvsp[-1])));}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 178 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 179 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2130 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 182 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LIST,(yyvsp[0]),NIL,makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));}
#line 2136 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 183 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_STMT_LIST,(yyvsp[-1]),(yyvsp[0]));}
#line 2142 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 186 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 187 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2154 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 188 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2160 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 189 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 190 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 191 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 194 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_CASE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 195 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT,NIL,(yyvsp[0]),NIL);}
#line 2190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 198 "kim.y" /* yacc.c:1646  */
    {(yyval)=current_id; current_level++;}
#line 2196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 198 "kim.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval)=makeNode(N_STMT_COMPOUND,(yyvsp[-2]),NIL,(yyvsp[-1])); current_id=(yyvsp[-3]); current_level--;}
#line 2202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 201 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 202 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_EXPRESSION,NIL,(yyvsp[-1]),NIL);}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 205 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 206 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_IF_ELSE,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 207 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_SWITCH,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 210 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_WHILE,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 211 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_DO,(yyvsp[-5]),NIL,(yyvsp[-2]));}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 212 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_FOR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 215 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_FOR_EXP,(yyvsp[-4]),(yyvsp[-2]),(yyvsp[0]));}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 217 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 218 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 221 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_RETURN,NIL,(yyvsp[-1]),NIL);}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 222 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 223 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_STMT_BREAK,NIL,NIL,NIL);}
#line 2286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 226 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);}
#line 2292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 227 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 230 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_ARG_LIST,(yyvsp[0]),NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));}
#line 2304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 231 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNodeList(N_ARG_LIST,(yyvsp[-2]),(yyvsp[0]));}
#line 2310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 235 "kim.y" /* yacc.c:1646  */
    {(yyval)=NIL;}
#line 2316 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 236 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 239 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2328 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 242 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2334 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 245 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2340 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 248 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 249 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ASSIGN,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2352 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 252 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2358 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 255 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2364 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 256 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_OR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2370 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 259 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 260 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AND,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2382 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 263 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2388 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 264 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_EQL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2394 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 265 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2400 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 268 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2406 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 269 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LSS,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2412 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 270 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GTR,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2418 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 271 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_LEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2424 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 272 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_GEQ,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 275 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2436 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 278 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 279 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ADD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2448 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 280 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SUB,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2454 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 283 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2460 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 284 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MUL,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2466 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 285 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_DIV,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2472 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 286 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MOD,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 289 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 290 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CAST,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 293 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 294 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_INC,NIL,(yyvsp[0]),NIL);}
#line 2502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 295 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PRE_DEC,NIL,(yyvsp[0]),NIL);}
#line 2508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 296 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_AMP,NIL,(yyvsp[0]),NIL);}
#line 2514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 297 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STAR,NIL,(yyvsp[0]),NIL);}
#line 2520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 298 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_NOT,NIL,(yyvsp[0]),NIL);}
#line 2526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 299 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_MINUS,NIL,(yyvsp[0]),NIL);}
#line 2532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 300 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_PLUS,NIL,(yyvsp[0]),NIL);}
#line 2538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 301 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_EXP,NIL,(yyvsp[0]),NIL);}
#line 2544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 302 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_SIZE_TYPE,NIL,(yyvsp[-1]),NIL);}
#line 2550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 305 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[0]);}
#line 2556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 306 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARRAY,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 307 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FUNCTION_CALL,(yyvsp[-3]),NIL,(yyvsp[-1]));}
#line 2568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 308 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRUCT,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 309 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_ARROW,(yyvsp[-2]),NIL,(yyvsp[0]));}
#line 2580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 310 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_INC,NIL,(yyvsp[-1]),NIL);}
#line 2586 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 311 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_POST_DEC,NIL,(yyvsp[-1]),NIL);}
#line 2592 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 314 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared((yyvsp[0])),NIL);}
#line 2598 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 315 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_INT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 316 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_FLOAT_CONST,NIL,(yyvsp[0]),NIL);}
#line 2610 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 317 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_CHAR_CONST,NIL,(yyvsp[0]),NIL);}
#line 2616 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 318 "kim.y" /* yacc.c:1646  */
    {(yyval)=makeNode(N_EXP_STRING_LITERAL,NIL,(yyvsp[0]),NIL);}
#line 2622 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 319 "kim.y" /* yacc.c:1646  */
    {(yyval)=(yyvsp[-1]);}
#line 2628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 322 "kim.y" /* yacc.c:1646  */
    {(yyval)=setTypeNameSpecifier((yyvsp[0]),(yyvsp[-1]));}
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2638 "y.tab.c" /* yacc.c:1646  */
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
#line 325 "kim.y" /* yacc.c:1906  */

int line_no;

void yyerror(const char *s)
{
    syntax_err++;
    printf("yyerror: %s\n",s);
}

void main()
{
    initialize();
    yyparse();
    if(syntax_err == 0)
        print_ast(root);    
}
