/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 22 "../parser/cParser.y" /* yacc.c:339  */

	#include <climits>
	#include <fstream>
	#include <iostream>
	#include <string.h>
	#include "../classes/symbolTableEntry.h"
	#include "../classes/symbolTable.h"
	#include "../lexer/Escape_Sequences_Colors.h"

	int yylex(void);
	void yyerror(const char* errorMsg);
	extern int yylineno;
	extern int colPosition;  
	extern bool YFLAG; 
	extern std::ofstream outY;
	extern bool inInsertMode;
	extern symbolTable table; 
	std::vector<parameter> funcParams;
	std::vector<symbolTableEntry*> funcCallingParams; 
	int unaryOperatorChosen = -1;

	// functions needed by bison
	void assignParams(symbolTableEntry* entry, std::vector<parameter> params);
	//void applyUnaryOperator(void*& value, int unaryToken, symbolTableEntry* entry = NULL)

#line 92 "cParser.tab.c" /* yacc.c:339  */

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
   by #include "cParser.tab.h".  */
#ifndef YY_YY_CPARSER_TAB_H_INCLUDED
# define YY_YY_CPARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 49 "../parser/cParser.y" /* yacc.c:355  */

	typedef struct {
		class symbolTableEntry* sEntry;
	    int dataType;
	    typedef union {
	        char _char;
	        long long _number;
	        long double _decimal;     
	        char _str[256];   
	    } vals;
	    vals value;
	} dVal;

#line 136 "cParser.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER_CONSTANT = 259,
    FLOATING_CONSTANT = 260,
    ENUMERATION_CONSTANT = 261,
    CHARACTER_CONSTANT = 262,
    STRING_LITERAL = 263,
    SIZEOF = 264,
    PTR_OP = 265,
    INC_OP = 266,
    DEC_OP = 267,
    LEFT_OP = 268,
    RIGHT_OP = 269,
    LE_OP = 270,
    GE_OP = 271,
    EQ_OP = 272,
    NE_OP = 273,
    AND_OP = 274,
    OR_OP = 275,
    MUL_ASSIGN = 276,
    DIV_ASSIGN = 277,
    MOD_ASSIGN = 278,
    ADD_ASSIGN = 279,
    SUB_ASSIGN = 280,
    LEFT_ASSIGN = 281,
    RIGHT_ASSIGN = 282,
    AND_ASSIGN = 283,
    XOR_ASSIGN = 284,
    OR_ASSIGN = 285,
    TYPEDEF_NAME = 286,
    PLUS = 287,
    MINUS = 288,
    MULT = 289,
    DIV = 290,
    MOD = 291,
    SEMI = 292,
    COLON = 293,
    COMMA = 294,
    AMP = 295,
    ASSIGN = 296,
    TILDE = 297,
    PIPE = 298,
    CARROT = 299,
    DOT = 300,
    BANG = 301,
    QUESTION = 302,
    LPAREN = 303,
    LBRACK = 304,
    LCURL = 305,
    RPAREN = 306,
    RBRACK = 307,
    RCURL = 308,
    LTHAN = 309,
    GTHAN = 310,
    TYPEDEF = 311,
    EXTERN = 312,
    STATIC = 313,
    AUTO = 314,
    REGISTER = 315,
    CHAR = 316,
    SHORT = 317,
    INT = 318,
    LONG = 319,
    SIGNED = 320,
    UNSIGNED = 321,
    FLOAT = 322,
    DOUBLE = 323,
    CONST = 324,
    VOLATILE = 325,
    VOID = 326,
    STRUCT = 327,
    UNION = 328,
    ENUM = 329,
    ELIPSIS = 330,
    RANGE = 331,
    CASE = 332,
    DEFAULT = 333,
    IF = 334,
    ELSE = 335,
    SWITCH = 336,
    WHILE = 337,
    DO = 338,
    FOR = 339,
    GOTO = 340,
    CONTINUE = 341,
    BREAK = 342,
    RETURN = 343
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 68 "../parser/cParser.y" /* yacc.c:355  */

	char* sVal;
	dVal* val;
	class symbolTableEntry* entry; 

#line 243 "cParser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CPARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 258 "cParser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1453

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  231
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  399

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   343

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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   140,   140,   145,   152,   161,   167,   179,   185,   191,
     197,   209,   215,   224,   230,   239,   245,   251,   257,   263,
     269,   278,   284,   290,   296,   302,   311,   317,   323,   329,
     335,   341,   347,   353,   359,   365,   371,   377,   386,   392,
     401,   407,   413,   422,   428,   437,   443,   452,   458,   467,
     473,   488,   497,   503,   509,   515,   524,   530,   539,   545,
     551,   560,   566,   572,   581,   587,   596,   602,   611,   618,
     627,   634,   640,   646,   656,   662,   672,   681,   687,   693,
     699,   708,   714,   723,   729,   738,   744,   753,   763,   769,
     778,   785,   794,   800,   806,   815,   821,   830,   836,   845,
     851,   857,   866,   873,   879,   885,   891,   897,   903,   909,
     915,   924,   930,   936,   942,   948,   954,   963,   969,   975,
     984,   990,   999,  1005,  1011,  1017,  1025,  1032,  1039,  1045,
    1051,  1057,  1063,  1069,  1078,  1084,  1090,  1099,  1105,  1111,
    1117,  1123,  1129,  1135,  1141,  1147,  1153,  1162,  1168,  1174,
    1180,  1186,  1195,  1201,  1210,  1216,  1225,  1231,  1237,  1243,
    1249,  1255,  1261,  1267,  1273,  1279,  1285,  1294,  1300,  1309,
    1318,  1324,  1333,  1339,  1348,  1354,  1363,  1369,  1378,  1384,
    1393,  1399,  1405,  1414,  1420,  1426,  1432,  1438,  1447,  1453,
    1459,  1468,  1474,  1489,  1499,  1505,  1514,  1524,  1534,  1540,
    1549,  1555,  1561,  1567,  1591,  1597,  1606,  1613,  1620,  1627,
    1634,  1641,  1651,  1657,  1663,  1669,  1680,  1686,  1692,  1698,
    1707,  1714,  1720,  1726,  1735,  1742,  1752,  1760,  1768,  1776,
    1786,  1795
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "ENUMERATION_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPEDEF_NAME", "PLUS", "MINUS", "MULT", "DIV", "MOD", "SEMI", "COLON",
  "COMMA", "AMP", "ASSIGN", "TILDE", "PIPE", "CARROT", "DOT", "BANG",
  "QUESTION", "LPAREN", "LBRACK", "LCURL", "RPAREN", "RBRACK", "RCURL",
  "LTHAN", "GTHAN", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "CONST", "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELIPSIS",
  "RANGE", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR",
  "GOTO", "CONTINUE", "BREAK", "RETURN", "$accept", "start_unit",
  "translation_unit", "external_declaration", "function_definition",
  "declaration", "declaration_list", "declaration_specifiers",
  "storage_class_specifier", "type_specifier", "type_qualifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "init_declarator_list", "init_declarator",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "enumerator_list", "enumerator", "declarator", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "initializer", "initializer_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "statement", "labeled_statement",
  "expression_statement", "compound_statement", "set_insert_push",
  "set_lookup_pop", "set_lookup", "set_insert", "open_curl", "close_curl",
  "statement_list", "selection_statement", "iteration_statement",
  "jump_statement", "expression", "assignment_expression",
  "assignment_operator", "conditional_expression", "constant_expression",
  "logical_or_expression", "logical_and_expression",
  "inclusive_or_expression", "exclusive_or_expression", "and_expression",
  "equality_expression", "relational_expression", "shift_expression",
  "additive_expression", "multiplicative_expression", "cast_expression",
  "unary_expression", "unary_operator", "postfix_expression",
  "primary_expression", "argument_expression_list", "constant", "string",
  "identifier", YY_NULLPTR
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
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343
};
# endif

#define YYPACT_NINF -191

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-191)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     663,  -191,  -191,   117,    25,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,    15,    50,   663,  -191,  -191,  -191,   129,
    1333,  1333,  1333,  -191,    16,  -191,     2,    44,    29,  -191,
    -191,  -191,   117,    24,   110,    68,  -191,  -191,  -191,    17,
    -191,   121,  -191,  -191,  -191,   353,    81,   913,     2,  -191,
    1333,    12,   786,    44,  -191,  -191,  -191,   -12,  -191,    67,
     110,  -191,    25,  -191,     2,  -191,   353,   353,  1356,  -191,
      82,   353,  -191,  -191,  -191,  -191,  1333,  -191,   129,  -191,
    1333,   110,  -191,  -191,  -191,  -191,  -191,  1193,  1239,  1239,
    -191,  -191,  -191,  -191,  -191,  -191,   575,  -191,  -191,    74,
       4,   120,   112,   132,   157,   232,   163,   257,   261,   206,
    -191,  -191,  1250,   236,  -191,  -191,  -191,  -191,   110,  -191,
    1250,    57,  -191,   139,  1054,  -191,  -191,  -191,  -191,  -191,
    1250,    84,  -191,   162,  1379,   962,   517,  -191,  -191,  -191,
      66,   152,   175,  -191,    51,  -191,   575,  -191,  1250,  -191,
    -191,   119,   170,    58,  -191,  -191,   547,  -191,  1250,  1250,
    1250,  1250,  1250,  1250,  1250,  1250,  1250,  1250,  1250,  1250,
    1250,  1250,  1250,  1250,  1250,  1250,  1250,  -191,   110,  -191,
    -191,   110,   623,   178,  -191,  -191,  -191,  1054,  -191,  -191,
    -191,  -191,    82,  1250,  -191,  -191,   517,  -191,  1250,   186,
     187,   195,   197,   517,   208,   110,   225,   245,  1073,  -191,
    -191,  -191,  -191,   401,  -191,  -191,  -191,   220,   260,  -191,
     619,   797,  -191,    13,  -191,   255,  -191,  1243,   110,  -191,
     244,  1288,   265,  -191,  1250,  1250,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,  1250,   120,
     277,   112,   132,   157,   232,   163,   163,   257,   257,   257,
     257,   261,   261,   206,   206,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,   105,  1250,  -191,    59,  -191,  -191,  -191,  -191,
     460,   263,   517,  1250,  1250,  1250,   205,  1119,   268,  -191,
    -191,  -191,   230,  -191,  -191,  -191,   517,  -191,   259,   271,
    -191,   256,   255,  1312,   847,  -191,  -191,  -191,  -191,  -191,
    -191,  -191,  -191,  -191,  1250,  1250,  -191,    -6,   735,  -191,
    -191,   517,  -191,   130,   133,   134,   278,  1136,   237,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,   274,  -191,   275,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,  -191,   517,   517,
     517,  1250,   858,   238,  1182,  -191,  -191,   248,  -191,  -191,
     150,   517,   160,   907,   956,   249,   517,   292,  -191,   517,
     517,   180,   517,   183,  1005,  -191,  -191,  -191,  -191,   517,
    -191,   517,   517,   193,  -191,  -191,  -191,   517,  -191
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   231,    37,    77,     0,    25,    24,    23,    21,    22,
      27,    28,    29,    30,    33,    34,    31,    32,    38,    39,
      26,    43,    44,     0,     0,     2,     3,     5,     6,     0,
      15,    17,    19,    35,     0,    36,   129,    68,     0,    70,
      81,    79,    78,     0,     0,    63,     1,     4,    11,     0,
      47,   129,    16,    18,    20,     0,    42,   130,   129,     7,
       0,   126,     0,    69,    82,    80,    71,     0,    64,    66,
       0,    12,     0,   128,   129,     9,    52,    54,     0,    45,
       0,     0,   122,   129,   128,     8,     0,   128,     0,   129,
       0,     0,   226,   228,   229,   227,   230,     0,     0,     0,
     208,   209,   207,   206,   210,   211,     0,    72,   169,     0,
     167,   170,   172,   174,   176,   178,   180,   183,   188,   191,
     194,   198,     0,   200,   212,   221,   222,   220,     0,    61,
       0,     0,    48,    49,     0,    10,    53,    55,    41,    46,
       0,     0,    56,    58,     0,   128,     0,   128,    13,    74,
      88,     0,    83,    85,     0,    90,     0,   204,     0,   201,
     202,    97,     0,     0,   152,   154,   198,    73,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,     0,   218,
     219,     0,     0,     0,    65,    67,    62,     0,   129,    92,
      59,    51,     0,     0,    40,   127,     0,   120,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   132,
     111,   113,   112,     0,   114,   115,   116,     0,   220,    14,
       0,     0,    87,    99,    89,   100,   128,     0,     0,   129,
       0,     0,    99,    98,     0,     0,   223,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   156,     0,   171,
       0,   173,   175,   177,   179,   181,   182,   186,   187,   184,
     185,   189,   190,   192,   193,   195,   196,   197,   217,   216,
     214,   224,     0,     0,    95,     0,    50,    57,    60,   124,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   148,
     149,   150,     0,   131,   133,   121,     0,   107,     0,     0,
     103,     0,   101,     0,     0,   131,    84,    86,    91,    76,
     205,   199,   153,   155,     0,     0,   215,     0,     0,    93,
     127,     0,   119,     0,     0,     0,     0,     0,     0,   147,
     151,   123,   117,   108,   102,   104,   109,     0,   105,     0,
      75,   168,   225,   213,    94,    96,   125,   118,     0,     0,
       0,     0,     0,     0,     0,   110,   106,   134,   136,   137,
       0,     0,     0,     0,     0,     0,     0,     0,   139,     0,
       0,     0,     0,     0,     0,   135,   138,   140,   141,     0,
     143,     0,     0,     0,   142,   144,   145,     0,   146
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,  -191,   305,  -191,   -38,   -34,   104,  -191,    64,
       5,  -191,  -191,   251,  -191,   262,   -66,   -67,  -191,   131,
    -191,   266,   226,     7,   -35,    -2,  -191,   -88,  -191,   118,
    -191,  -190,  -191,   200,  -124,   -59,   -80,  -191,  -191,   -16,
     296,    31,   -20,   -44,  -191,    47,   158,  -191,  -191,  -191,
    -101,  -121,  -191,   -56,  -109,  -191,   198,   199,   192,   196,
     194,   144,    76,   140,   141,   -79,   167,  -191,  -191,  -191,
    -191,  -191,  -191,     0
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    25,    26,    27,    28,    58,   150,    30,    31,
      32,    33,    34,    78,    49,    50,    79,    80,   141,   142,
      35,    67,    68,    36,    37,    38,    42,   308,   152,   153,
     154,   198,   285,   162,   309,   235,   219,   220,   221,   222,
      83,   289,    91,    60,    84,   341,   223,   224,   225,   226,
     227,   164,   258,   165,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   166,   122,   123,   124,
     282,   125,   126,   127
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      39,    41,   151,    63,    39,   163,   108,   284,    40,   136,
     137,    43,   139,   199,    86,  -128,     1,    74,     1,     1,
      59,   195,    87,    45,   168,    39,   234,   128,     1,    39,
      86,   200,     1,   245,    56,    75,    51,   243,    39,   161,
      65,   129,    85,   187,    69,   149,   353,    64,   147,   145,
      46,   169,    57,   134,    71,   163,    72,   163,   135,     3,
      77,   230,   231,    89,   146,    44,    55,   148,   260,     1,
      69,   281,    39,     4,   108,    66,   199,     4,   139,   133,
      39,    77,    77,    77,   108,     1,    77,   143,    39,   161,
     238,   155,    61,    62,   288,   133,   128,   245,   328,   291,
       3,    86,   239,   193,    29,   275,   276,   277,   130,   246,
     196,    77,   329,     1,   230,   231,     3,   302,    70,    76,
     140,   201,   311,   202,   322,   206,   167,   229,    69,    29,
       4,    81,     1,   296,    52,    53,    54,   323,   355,   170,
      76,    76,    76,   304,   325,    76,   228,   108,   233,    77,
      39,     3,   108,     3,   286,   171,   326,   232,   -49,   242,
     -49,    77,    73,     3,    88,   321,    48,   241,   231,   245,
      76,    57,   245,   245,   312,   108,   172,     4,   176,   177,
      73,   358,   327,   312,   359,   360,    18,    19,   278,   245,
      88,   279,   333,   334,   335,   319,   338,   173,    63,   245,
     203,   377,    39,   236,   352,   349,   228,   199,    76,   143,
     304,   379,   332,   228,   237,   298,   315,   178,   179,   245,
      76,   244,   245,   228,   292,   347,   342,   283,   233,   121,
      39,   389,   245,    39,   391,   293,   363,    43,   318,   242,
     184,   185,   186,   294,   397,   295,   188,   189,   190,   174,
     175,   357,   267,   268,   269,   270,   297,   305,   108,   245,
     370,   372,   299,   375,   157,   159,   160,   340,   351,   245,
     180,   181,   381,   383,   364,   373,   245,   245,   367,   368,
     369,   191,   300,   393,   192,  -128,   384,   336,   245,   121,
     228,   378,   228,   182,   183,   320,   385,   121,   306,   387,
     388,   331,   390,   313,   314,   339,   228,   121,   345,   394,
     343,   395,   396,   241,   231,   324,   245,   398,   265,   266,
     271,   272,   344,   273,   274,   365,   361,   366,   376,   386,
      47,   228,   144,   287,   132,   121,   131,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   194,   317,   240,    90,   228,   228,
     228,   356,   350,   262,   290,     0,   259,   264,   263,   261,
     121,   228,     0,     0,     0,   121,   228,     0,     0,   228,
     228,     0,   228,     0,     2,     0,     0,     0,     0,   228,
       0,   228,   228,     0,     0,     0,     0,   228,   121,     0,
       0,     0,     0,     0,     1,    92,    93,    94,    95,    96,
      97,   121,    98,    99,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,   100,   101,   102,     0,     0,   207,     0,
       0,   103,     0,   104,     0,     0,     0,   105,     0,   106,
       0,    57,     0,     0,   303,     0,     0,     0,     0,     0,
       0,     0,     0,     1,    92,    93,    94,    95,    96,    97,
       0,    98,    99,     0,     0,     0,     0,     0,   208,   209,
     210,   121,   211,   212,   213,   214,   215,   216,   217,   218,
       0,   121,   100,   101,   102,     0,     0,   207,     0,     0,
     103,     0,   104,     0,     0,     0,   105,     0,   106,     0,
      57,     0,     0,   330,     0,     0,     0,     0,     0,     0,
       1,    92,    93,    94,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,   208,   209,   210,
       0,   211,   212,   213,   214,   215,   216,   217,   218,   100,
     101,   102,     0,     0,   207,     0,     0,   103,     0,   104,
       0,     0,     0,   105,     0,   106,     0,    57,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,     1,    92,
      93,    94,    95,    96,    97,     0,    98,    99,   257,     0,
       0,     0,     0,     0,   208,   209,   210,     0,   211,   212,
     213,   214,   215,   216,   217,   218,     2,   100,   101,   102,
       0,     0,     0,     0,     0,   103,     0,   104,     0,     0,
       0,   105,     1,   106,     0,     0,     1,    92,    93,    94,
      95,    96,    97,     0,    98,    99,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       2,     0,     0,     3,     0,   100,   101,   102,     0,     0,
       0,     0,     0,   103,     0,   104,     1,   230,   231,   105,
     307,   106,     0,     0,   280,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     2,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     0,     0,     0,     0,     0,     0,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     1,    92,
      93,    94,    95,    96,    97,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   100,   101,   102,
       0,     0,     0,     0,     0,   103,     0,   104,     0,     0,
       0,   105,     0,   106,     0,   197,     0,     0,   354,     1,
      92,    93,    94,    95,    96,    97,     0,    98,    99,     0,
       1,    92,    93,    94,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,   100,   101,
     102,     0,     0,     0,     0,     0,   103,     0,   104,   100,
     101,   102,   105,     0,   106,     0,     0,   103,   107,   104,
       0,     0,     0,   105,     0,   106,     0,     0,     0,   310,
       1,    92,    93,    94,    95,    96,    97,     0,    98,    99,
       0,     1,    92,    93,    94,    95,    96,    97,     0,    98,
      99,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,     0,     0,     0,     0,     0,   103,     0,   104,
     100,   101,   102,   105,     0,   106,     0,     0,   103,   348,
     104,     0,     0,     0,   105,     0,   106,     0,     0,   371,
       1,    92,    93,    94,    95,    96,    97,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   100,
     101,   102,     0,     0,  -126,     0,     0,   103,     0,   104,
       0,     0,     0,   105,     0,   106,     0,     0,   380,     1,
      92,    93,    94,    95,    96,    97,    82,    98,    99,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,
    -126,  -126,  -126,  -126,  -126,  -126,  -126,  -126,   100,   101,
     102,     0,     0,  -129,     0,     0,   103,     0,   104,     0,
       0,     0,   105,     0,   106,     0,     0,   382,     1,    92,
      93,    94,    95,    96,    97,   205,    98,    99,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,   100,   101,   102,
       0,     0,     0,     0,     0,   103,     0,   104,     0,     0,
       0,   105,     0,   106,     0,     0,   392,     1,    92,    93,
      94,    95,    96,    97,     0,    98,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,    92,    93,    94,
      95,    96,    97,     0,    98,    99,   100,   101,   102,     0,
       0,     0,     0,     0,   103,     0,   104,     0,     0,     0,
     105,     0,   106,     0,   197,   100,   101,   102,     0,     0,
     301,     0,     0,   103,     0,   104,     0,     0,     0,   105,
       0,   106,     1,    92,    93,    94,    95,    96,    97,     0,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     1,
      92,    93,    94,    95,    96,    97,     0,    98,    99,     0,
       0,   100,   101,   102,     0,     0,   337,     0,     0,   103,
       0,   104,     0,     0,     0,   105,     0,   106,   100,   101,
     102,     0,     0,   362,     0,     0,   103,     0,   104,     0,
       0,     0,   105,     0,   106,     1,    92,    93,    94,    95,
      96,    97,     0,    98,    99,     0,     1,    92,    93,    94,
      95,    96,    97,     0,    98,    99,     0,     0,     0,     0,
       0,     0,     0,     0,   100,   101,   102,     0,     0,   374,
       0,     0,   103,     0,   104,   100,   101,   102,   105,     0,
     106,     0,     0,   103,     0,   104,     0,     0,     0,   105,
       0,   156,     1,    92,    93,    94,    95,    96,    97,     0,
      98,    99,     0,     1,    92,    93,    94,    95,    96,    97,
       0,    98,    99,     0,     0,     0,     0,     0,     0,     0,
       0,   100,   101,   102,     2,     0,     0,     0,     0,   103,
       0,   104,   100,   101,   102,   105,     0,   158,     0,     0,
     103,     0,   104,     0,     0,     0,   105,     0,   106,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   316,     2,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   241,   231,     0,   307,
       0,     0,     0,     2,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,   346,     2,     0,     0,     0,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     2,     0,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,   138,
       2,     0,     0,     0,     0,     0,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,   204,     0,     0,     0,     0,     0,     0,     0,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,     3,    90,    38,     4,   106,    62,   197,     3,    76,
      77,     4,    78,   134,    58,     3,     3,    51,     3,     3,
      36,   130,    60,    23,    20,    25,   150,    39,     3,    29,
      74,   140,     3,    39,    34,    51,    29,   161,    38,   106,
      42,    53,    58,   122,    44,    89,    52,    42,    86,    83,
       0,    47,    50,    73,    37,   156,    39,   158,    74,    34,
      55,    48,    49,    51,    84,    50,    50,    87,   169,     3,
      70,   192,    72,    48,   130,    51,   197,    48,   144,    72,
      80,    76,    77,    78,   140,     3,    81,    80,    88,   156,
      39,    91,    48,    49,   203,    88,    39,    39,    39,   208,
      34,   145,    51,   123,     0,   184,   185,   186,    41,    51,
      53,   106,    53,     3,    48,    49,    34,   218,    50,    55,
      38,    37,   231,    39,   245,   145,    52,   147,   128,    25,
      48,    50,     3,   213,    30,    31,    32,   258,   328,    19,
      76,    77,    78,   223,    39,    81,   146,   203,   150,   144,
     150,    34,   208,    34,   198,    43,    51,   150,    37,   161,
      39,   156,    41,    34,    60,   244,    37,    48,    49,    39,
     106,    50,    39,    39,   233,   231,    44,    48,    15,    16,
      41,    51,   283,   242,    51,    51,    69,    70,   188,    39,
      86,   191,   293,   294,   295,   239,   297,    40,   233,    39,
      38,    51,   202,    51,   325,   314,   206,   328,   144,   202,
     290,    51,   292,   213,    39,   215,   236,    54,    55,    39,
     156,    51,    39,   223,    38,   313,   306,    49,   230,    62,
     230,    51,    39,   233,    51,    48,   337,   230,   238,   241,
      34,    35,    36,    48,    51,    48,    10,    11,    12,    17,
      18,   331,   176,   177,   178,   179,    48,    37,   314,    39,
     361,   362,    37,   364,    97,    98,    99,    37,   324,    39,
      13,    14,   373,   374,    37,    37,    39,    39,   358,   359,
     360,    45,    37,   384,    48,    49,    37,    82,    39,   122,
     290,   371,   292,    32,    33,    51,   376,   130,    38,   379,
     380,    38,   382,    48,    49,    37,   306,   140,    52,   389,
      51,   391,   392,    48,    49,    38,    39,   397,   174,   175,
     180,   181,    51,   182,   183,    51,    48,    52,    80,    37,
      25,   331,    81,   202,    72,   168,    70,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   128,   237,   156,    61,   358,   359,
     360,   330,   315,   171,   206,    -1,   168,   173,   172,   170,
     203,   371,    -1,    -1,    -1,   208,   376,    -1,    -1,   379,
     380,    -1,   382,    -1,    31,    -1,    -1,    -1,    -1,   389,
      -1,   391,   392,    -1,    -1,    -1,    -1,   397,   231,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,   244,    11,    12,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    32,    33,    34,    -1,    -1,    37,    -1,
      -1,    40,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,
      -1,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    77,    78,
      79,   314,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,   324,    32,    33,    34,    -1,    -1,    37,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,    -1,
      50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,    79,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    32,
      33,    34,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    50,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    41,    -1,
      -1,    -1,    -1,    -1,    77,    78,    79,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    46,     3,    48,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      31,    -1,    -1,    34,    -1,    32,    33,    34,    -1,    -1,
      -1,    -1,    -1,    40,    -1,    42,     3,    48,    49,    46,
      51,    48,    -1,    -1,    51,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    31,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     3,     4,
       5,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    -1,    50,    -1,    -1,    53,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    32,
      33,    34,    46,    -1,    48,    -1,    -1,    40,    52,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    -1,    52,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    -1,    -1,    -1,    40,    -1,    42,
      32,    33,    34,    46,    -1,    48,    -1,    -1,    40,    52,
      42,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,
       3,     4,     5,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,
      33,    34,    -1,    -1,    31,    -1,    -1,    40,    -1,    42,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,     3,
       4,     5,     6,     7,     8,     9,    53,    11,    12,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    32,    33,
      34,    -1,    -1,    31,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,    -1,    -1,    51,     3,     4,
       5,     6,     7,     8,     9,    53,    11,    12,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,     3,     4,     5,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    32,    33,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,
      46,    -1,    48,    -1,    50,    32,    33,    34,    -1,    -1,
      37,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    32,    33,    34,    -1,    -1,    37,    -1,    -1,    40,
      -1,    42,    -1,    -1,    -1,    46,    -1,    48,    32,    33,
      34,    -1,    -1,    37,    -1,    -1,    40,    -1,    42,    -1,
      -1,    -1,    46,    -1,    48,     3,     4,     5,     6,     7,
       8,     9,    -1,    11,    12,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    -1,    -1,    37,
      -1,    -1,    40,    -1,    42,    32,    33,    34,    46,    -1,
      48,    -1,    -1,    40,    -1,    42,    -1,    -1,    -1,    46,
      -1,    48,     3,     4,     5,     6,     7,     8,     9,    -1,
      11,    12,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    31,    -1,    -1,    -1,    -1,    40,
      -1,    42,    32,    33,    34,    46,    -1,    48,    -1,    -1,
      40,    -1,    42,    -1,    -1,    -1,    46,    -1,    48,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    31,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      -1,    -1,    -1,    31,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    51,    31,    -1,    -1,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    31,    -1,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    -1,    53,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    34,    48,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    90,    91,    92,    93,    94,    96,
      97,    98,    99,   100,   101,   109,   112,   113,   114,   162,
      99,   114,   115,   112,    50,   162,     0,    92,    37,   103,
     104,   112,    96,    96,    96,    50,   162,    50,    95,   128,
     132,    48,    49,   113,    99,   114,    51,   110,   111,   162,
      50,    37,    39,    41,    95,   128,    98,    99,   102,   105,
     106,    50,    53,   129,   133,   128,   132,    94,    96,    51,
     129,   131,     4,     5,     6,     7,     8,     9,    11,    12,
      32,    33,    34,    40,    42,    46,    48,    52,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   160,   161,   162,    39,    53,
      41,   110,   104,   112,   131,   128,   106,   106,    53,   105,
      38,   107,   108,   112,   102,    95,   131,    94,   131,   132,
      96,   116,   117,   118,   119,   162,    48,   155,    48,   155,
     155,   106,   122,   139,   140,   142,   155,    52,    20,    47,
      19,    43,    44,    40,    17,    18,    15,    16,    54,    55,
      13,    14,    32,    33,    34,    35,    36,   154,    10,    11,
      12,    45,    48,   131,   111,   143,    53,    50,   120,   140,
     143,    37,    39,    38,    53,    53,   131,    37,    77,    78,
      79,    81,    82,    83,    84,    85,    86,    87,    88,   125,
     126,   127,   128,   135,   136,   137,   138,   139,   162,   131,
      48,    49,   112,   114,   123,   124,    51,    39,    39,    51,
     122,    48,   114,   123,    51,    39,    51,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    41,   141,   145,
     139,   146,   147,   148,   149,   150,   150,   151,   151,   151,
     151,   152,   152,   153,   153,   154,   154,   154,   162,   162,
      51,   140,   159,    49,   120,   121,   132,   108,   143,   130,
     135,   143,    38,    48,    48,    48,   125,    48,   162,    37,
      37,    37,   139,    53,   125,    37,    38,    51,   116,   123,
      52,   143,   124,    48,    49,   131,    75,   118,   162,   132,
      51,   154,   140,   140,    38,    39,    51,   139,    39,    53,
      53,    38,   125,   139,   139,   139,    82,    37,   139,    37,
      37,   134,   125,    51,    51,    52,    51,   116,    52,   143,
     134,   142,   140,    52,    53,   120,   130,   125,    51,    51,
      51,    48,    37,   139,    37,    51,    52,   125,   125,   125,
     139,    51,   139,    37,    37,   139,    80,    51,   125,    51,
      51,   139,    51,   139,    37,   125,    37,   125,   125,    51,
     125,    51,    51,   139,   125,   125,   125,    51,   125
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    91,    91,    92,    92,    93,    93,    93,
      93,    94,    94,    95,    95,    96,    96,    96,    96,    96,
      96,    97,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    99,    99,
     100,   100,   100,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   106,   106,   106,   106,   107,   107,   108,   108,
     108,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   114,
     114,   115,   115,   116,   116,   117,   117,   118,   118,   118,
     119,   119,   120,   120,   120,   121,   121,   122,   122,   123,
     123,   123,   124,   124,   124,   124,   124,   124,   124,   124,
     124,   125,   125,   125,   125,   125,   125,   126,   126,   126,
     127,   127,   128,   128,   128,   128,   129,   130,   131,   132,
     133,   134,   135,   135,   136,   136,   136,   137,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   138,   138,   138,
     138,   138,   139,   139,   140,   140,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   142,   142,   143,
     144,   144,   145,   145,   146,   146,   147,   147,   148,   148,
     149,   149,   149,   150,   150,   150,   150,   150,   151,   151,
     151,   152,   152,   152,   153,   153,   153,   153,   154,   154,
     155,   155,   155,   155,   155,   155,   156,   156,   156,   156,
     156,   156,   157,   157,   157,   157,   157,   157,   157,   157,
     158,   158,   158,   158,   159,   159,   160,   160,   160,   160,
     161,   162
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     2,     1,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     1,     3,     1,
       5,     3,     1,     2,     1,     2,     1,     3,     1,     2,
       3,     4,     5,     2,     1,     3,     1,     3,     1,     2,
       1,     3,     3,     4,     4,     7,     6,     1,     2,     2,
       3,     1,     2,     1,     3,     1,     3,     2,     1,     2,
       1,     3,     1,     3,     4,     1,     3,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       1,     2,     2,     6,     5,     7,     0,     0,     0,     0,
       0,     0,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     7,     8,     7,     8,     8,     9,     3,     2,     2,
       2,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     5,     1,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     1,     4,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     5,     3,     4,     3,     3,     2,     2,
       1,     1,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1
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
#line 140 "../parser/cParser.y" /* yacc.c:1646  */
    {	
								table.popLevelOff();}
#line 1867 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 146 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : external_declaration;" << std::endl;
				/*outY << $$ << "->" << $1; */
			}
		}
#line 1878 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 153 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "translation_unit : translation_unit external_declaration;" << std::endl;
			}
		}
#line 1888 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 162 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : function_definition;" << std::endl;
			}
		}
#line 1898 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 168 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "external_declaration : declaration;" << std::endl;
			}
		}
#line 1908 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 180 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator compound_statement;" << std::endl;
			}
		}
#line 1918 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 186 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1928 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 192 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator compound_statement;" << std::endl;
			}
		}
#line 1938 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 198 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "function_definition : declaration_specifiers declarator declaration_list compound_statement;" << std::endl;
			}
		}
#line 1948 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 210 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers SEMI;" << std::endl;
			}
		}
#line 1958 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 216 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration : declaration_specifiers init_declarator_list SEMI;" << std::endl;
			}
		}
#line 1968 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 225 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration;" << std::endl;
			}
		}
#line 1978 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 231 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_list : declaration_list declaration;" << std::endl;
			}
		}
#line 1988 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 240 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier;" << std::endl;
			}
		}
#line 1998 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 246 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : storage_class_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 2008 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 252 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier;" << std::endl;
			}
		}
#line 2018 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 258 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_specifier declaration_specifiers;" << std::endl;
			}
		}
#line 2028 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 264 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier;" << std::endl;
			}
		}
#line 2038 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 270 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declaration_specifiers : type_qualifier declaration_specifiers;" << std::endl;
			}
		}
#line 2048 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 279 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : AUTO;" << std::endl;
			}
		}
#line 2058 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 285 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : REGISTER;" << std::endl;
			}
		}
#line 2068 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 291 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : STATIC;" << std::endl;
			}
		}
#line 2078 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 297 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : EXTERN;" << std::endl;
			}
		}
#line 2088 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 303 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "storage_class_specifier : TYPEDEF;" << std::endl;
			}
		}
#line 2098 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 312 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : VOID;" << std::endl;
			}
		}
#line 2108 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 318 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : CHAR;" << std::endl;
			}
		}
#line 2118 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 324 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SHORT;" << std::endl;
			}
		}
#line 2128 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 330 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : INT;" << std::endl;
			}
		}
#line 2138 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 336 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : LONG;" << std::endl;
			}
		}
#line 2148 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 342 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : FLOAT;" << std::endl;
			}
		}
#line 2158 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 348 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : DOUBLE;" << std::endl;
			}
		}
#line 2168 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 354 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : SIGNED;" << std::endl;
			}
		}
#line 2178 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 360 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : UNSIGNED;" << std::endl;
			}
		}
#line 2188 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 366 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : struct_or_union_specifier;" << std::endl;
			}
		}
#line 2198 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 372 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : enum_specifier;" << std::endl;
			}
		}
#line 2208 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 378 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_specifier : TYPEDEF_NAME;" << std::endl;
			}
		}
#line 2218 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 387 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : CONST;" << std::endl;
			}
		}
#line 2228 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 393 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier : VOLATILE;" << std::endl;
			}
		}
#line 2238 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 402 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2248 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 408 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union LCURL struct_declaration_list RCURL;" << std::endl;
			}
		}
#line 2258 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 414 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union_specifier : struct_or_union identifier;" << std::endl;
			}
		}
#line 2268 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 423 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : STRUCT;" << std::endl;
			}
		}
#line 2278 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 429 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_or_union : UNION;" << std::endl;
			}
		}
#line 2288 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 438 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration;" << std::endl;
			}
		}
#line 2298 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 444 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration_list : struct_declaration_list struct_declaration;" << std::endl;
			}
		}
#line 2308 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 453 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator;" << std::endl;
			}
		}
#line 2318 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 459 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator_list : init_declarator_list COMMA init_declarator;" << std::endl;
			}
		}
#line 2328 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 468 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "init_declarator : declarator;" << std::endl;
			}
		}
#line 2338 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 474 "../parser/cParser.y" /* yacc.c:1646  */
    { 
 			if (!(yyvsp[-4].entry)->setIdentifierValue(*((yyvsp[-1].val)))) {
 				std::cout << COLOR_NORMAL << COLOR_CYAN_NORMAL << "ERROR:" << COLOR_NORMAL << " Invalid assignment." << std::endl;
 				yyerror("");
 			}
			if(YFLAG){
				outY << "init_declarator : declarator ASSIGN initializer;" << std::endl;
			}
			(yyvsp[-4].entry)->printIdentifierValue(); 
			(yyval.entry) = (yyvsp[-4].entry);
		}
#line 2354 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 489 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declaration : specifier_qualifier_list struct_declarator_list SEMI;" << std::endl;
			}
		}
#line 2364 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 498 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier;" << std::endl;
			}
		}
#line 2374 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 504 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_specifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2384 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 510 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2394 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 516 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "specifier_qualifier_list : type_qualifier specifier_qualifier_list;" << std::endl;
			}
		}
#line 2404 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 525 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator;" << std::endl;
			}
		}
#line 2414 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 531 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator_list : struct_declarator_list COMMA struct_declarator;" << std::endl;
			}
		}
#line 2424 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 540 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator;" << std::endl;
			}
		}
#line 2434 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 546 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : COLON constant_expression;" << std::endl;
			}
		}
#line 2444 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 552 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "struct_declarator : declarator COLON constant_expression;" << std::endl;
			}
		}
#line 2454 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 561 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2464 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 567 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier LCURL enumerator_list RCURL;" << std::endl;
			}
		}
#line 2474 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 573 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enum_specifier : ENUM identifier;" << std::endl;
			}
		}
#line 2484 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 582 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator;" << std::endl;
			}
		}
#line 2494 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 588 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator_list : enumerator_list COMMA enumerator;" << std::endl;
			}
		}
#line 2504 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 597 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier;" << std::endl;
			}
		}
#line 2514 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 603 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "enumerator : identifier ASSIGN constant_expression;" << std::endl;
			}
		}
#line 2524 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 612 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			{(yyval.entry) = (yyvsp[0].entry);}
			if(YFLAG){
				outY << "declarator : direct_declarator;" << std::endl;
			}
		}
#line 2535 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 619 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "declarator : pointer direct_declarator;" << std::endl;
			}
		}
#line 2545 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 628 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			{(yyval.entry) = (yyvsp[0].entry);}
			if(YFLAG){
				outY << "direct_declarator : identifier;" << std::endl;
			}
		}
#line 2556 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 635 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : LPAREN declarator RPAREN;" << std::endl;
			}
		}
#line 2566 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 641 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2576 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 647 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyvsp[-3].entry)->setArray();
 			(yyvsp[-3].entry)->addArrayDimension((yyvsp[-1].val)->value._number); 
			std::vector<int> tempVector = (yyvsp[-3].entry)->getArrayDimensions(); 

			if(YFLAG){
				outY << "direct_declarator : direct_declarator LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2590 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 657 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2600 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 663 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			std::string idName = (yyvsp[-6].entry)->getIdentifierName();
 			assignParams((yyvsp[-6].entry), funcParams); 
 			funcParams.clear(); 
 			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
	
		}
#line 2614 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 673 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "direct_declarator : direct_declarator LPAREN identifier_list RPAREN;" << std::endl;
			}
		}
#line 2624 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 682 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT;" << std::endl;
			}
		}
#line 2634 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 688 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list;" << std::endl;
			}
		}
#line 2644 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 694 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT pointer;" << std::endl;
			}
		}
#line 2654 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 700 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "pointer : MULT type_qualifier_list pointer;" << std::endl;
			}
		}
#line 2664 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 709 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier;" << std::endl;
			}
		}
#line 2674 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 715 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_qualifier_list : type_qualifier_list type_qualifier;" << std::endl;
			}
		}
#line 2684 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 724 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list;" << std::endl;
			}
		}
#line 2694 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 730 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_type_list : parameter_list COMMA ELIPSIS;" << std::endl;
			}
		}
#line 2704 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 739 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "parameter_list : parameter_declaration;" << std::endl;
			}
		}
#line 2714 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 745 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_list : parameter_list COMMA parameter_declaration;" << std::endl;
			}
		}
#line 2724 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 754 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			parameter tempParam;
 			tempParam.dataType = (yyvsp[0].entry)->getIdentifierType();
 			tempParam.formalParam = (yyvsp[0].entry)->getIdentifierName(); 
 			funcParams.push_back(tempParam); 
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers declarator;" << std::endl;
			}
		}
#line 2738 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 764 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers;" << std::endl;
			}
		}
#line 2748 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 770 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "parameter_declaration : declaration_specifiers abstract_declarator;" << std::endl;
			}
		}
#line 2758 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 779 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			
			if(YFLAG){
				outY << "identifier_list : identifier;" << std::endl;
			}
		}
#line 2769 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 786 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "identifier_list : identifier_list COMMA identifier;" << std::endl;
			}
		}
#line 2779 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 795 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : assignment_expression;" << std::endl;
			}
		}
#line 2789 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 801 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list RCURL;" << std::endl;
			}
		}
#line 2799 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 807 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer : LCURL initializer_list COMMA RCURL;" << std::endl;
			}
		}
#line 2809 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 816 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer;" << std::endl;
			}
		}
#line 2819 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 822 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "initializer_list : initializer_list COMMA initializer;" << std::endl;
			}
		}
#line 2829 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 831 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list;" << std::endl;
			}
		}
#line 2839 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 837 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "type_name : specifier_qualifier_list abstract_declarator;" << std::endl;
			}
		}
#line 2849 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 846 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer;" << std::endl;
			}
		}
#line 2859 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 852 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : direct_abstract_declarator;" << std::endl;
			}
		}
#line 2869 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 858 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "abstract_declarator : pointer direct_abstract_declarator;" << std::endl;
			}
		}
#line 2879 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 867 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN abstract_declarator RPAREN;" << std::endl;
			}
		}
#line 2889 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 874 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK RBRACK;" << std::endl;
			}
		}
#line 2899 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 880 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LBRACK constant_expression RBRACK;" << std::endl;
			}
		}
#line 2909 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 886 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK RBRACK;" << std::endl;
			}
		}
#line 2919 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 892 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LBRACK constant_expression;" << std::endl;
			}
		}
#line 2929 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 898 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN RPAREN;" << std::endl;
			}
		}
#line 2939 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 904 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2949 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 910 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN RPAREN;" << std::endl;
			}
		}
#line 2959 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 916 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "direct_abstract_declarator : direct_abstract_declarator LPAREN parameter_type_list RPAREN;" << std::endl;
			}
		}
#line 2969 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 925 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : labeled_statement;" << std::endl;
			}
		}
#line 2979 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 931 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : compound_statement;" << std::endl;
			}
		}
#line 2989 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 937 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : expression_statement;" << std::endl;
			}
		}
#line 2999 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 943 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : selection_statement;" << std::endl;
			}
		}
#line 3009 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 949 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : iteration_statement;" << std::endl;
			}
		}
#line 3019 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 955 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement : jump_statement;" << std::endl;
			}
		}
#line 3029 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 964 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : identifier COLON statement;" << std::endl;
			}
		}
#line 3039 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 970 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : CASE constant_expression COLON statement;" << std::endl;
			}
		}
#line 3049 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 976 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "labeled_statement : DEFAULT COLON statement;" << std::endl;
			}
		}
#line 3059 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 985 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : SEMI;" << std::endl;
			}
		}
#line 3069 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 991 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression_statement : expression SEMI;" << std::endl;
			}
		}
#line 3079 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1000 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL RCURL;" << std::endl;
			}
		}
#line 3089 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1006 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "compound_statement : LCURL statement_list RCURL;" << std::endl;
			}
		}
#line 3099 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1012 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "compound_statement : LCURL declaration_list RCURL;" << std::endl;
			}
		}
#line 3109 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1017 "../parser/cParser.y" /* yacc.c:1646  */
    {
		  if(YFLAG){
				outY << "compound_statement : LCURL declaration_list statement_list RCURL;" << std::endl;
	      }
	    }
#line 3119 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1025 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.pushLevelOn();
		inInsertMode = true;
		}
#line 3128 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1032 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.popLevelOff(); 
		inInsertMode = false;  
		}
#line 3137 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1039 "../parser/cParser.y" /* yacc.c:1646  */
    {
		inInsertMode = false; 
		}
#line 3145 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1045 "../parser/cParser.y" /* yacc.c:1646  */
    {
		inInsertMode = true; 
		}
#line 3153 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1051 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.pushLevelOn();
	   }
#line 3161 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1057 "../parser/cParser.y" /* yacc.c:1646  */
    {
		table.popLevelOff();  
		}
#line 3169 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1064 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement;" << std::endl;
			}
		}
#line 3179 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1070 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "statement_list : statement_list statement;" << std::endl;
			}
		}
#line 3189 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1079 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3199 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1085 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : IF LPAREN expression RPAREN statement ELSE statement;" << std::endl;
			}
		}
#line 3209 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1091 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "selection_statement : SWITCH LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3219 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1100 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : WHILE LPAREN expression RPAREN statement;" << std::endl;
			}
		}
#line 3229 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1106 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : DO statement WHILE LPAREN expression RPAREN SEMI;" << std::endl;
			}
		}
#line 3239 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1112 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3249 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1118 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3259 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1124 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3269 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1130 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3279 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1136 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3289 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1142 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3299 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1148 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI RPAREN statement;" << std::endl;
			}
		}
#line 3309 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1154 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "iteration_statement : FOR LPAREN expression SEMI expression SEMI expression RPAREN statement;" << std::endl;
			}
		}
#line 3319 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1163 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : GOTO identifier SEMI;" << std::endl;
			}
		}
#line 3329 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1169 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : CONTINUE SEMI;" << std::endl;
			}
		}
#line 3339 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1175 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : BREAK SEMI;" << std::endl;
			}
		}
#line 3349 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1181 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN SEMI;" << std::endl;
			}
		}
#line 3359 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1187 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "jump_statement : RETURN expression SEMI;" << std::endl;
			}
		}
#line 3369 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1196 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : assignment_expression;" << std::endl;
			}
		}
#line 3379 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1202 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "expression : expression COMMA assignment_expression;" << std::endl;
			}
		}
#line 3389 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1211 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : conditional_expression;" << std::endl;
			}
		}
#line 3399 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1217 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_expression : unary_expression assignment_operator assignment_expression;" << std::endl;
			}
		}
#line 3409 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1226 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ASSIGN;" << std::endl;
			}
		}
#line 3419 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1232 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MUL_ASSIGN;" << std::endl;
			}
		}
#line 3429 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1238 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : DIV_ASSIGN;" << std::endl;
			}
		}
#line 3439 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1244 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : MOD_ASSIGN;" << std::endl;
			}
		}
#line 3449 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1250 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : ADD_ASSIGN;" << std::endl;
			}
		}
#line 3459 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1256 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : SUB_ASSIGN;" << std::endl;
			}
		}
#line 3469 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1262 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : LEFT_ASSIGN;" << std::endl;
			}
		}
#line 3479 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1268 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : RIGHT_ASSIGN;" << std::endl;
			}
		}
#line 3489 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1274 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : AND_ASSIGN;" << std::endl;
			}
		}
#line 3499 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1280 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : XOR_ASSIGN;" << std::endl;
			}
		}
#line 3509 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1286 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "assignment_operator : OR_ASSIGN;" << std::endl;
			}
		}
#line 3519 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1295 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression;" << std::endl;
			}
		}
#line 3529 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1301 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "conditional_expression : logical_or_expression QUESTION expression COLON conditional_expression;" << std::endl;
			}
		}
#line 3539 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1310 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "constant_expression : conditional_expression;" << std::endl;
			}
		}
#line 3549 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1319 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_and_expression;" << std::endl;
			}
		}
#line 3559 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1325 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_or_expression : logical_or_expression OR_OP logical_and_expression;" << std::endl;
			}
		}
#line 3569 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1334 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : inclusive_or_expression;" << std::endl;
			}
		}
#line 3579 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1340 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "logical_and_expression : logical_and_expression AND_OP inclusive_or_expression;" << std::endl;
			}
		}
#line 3589 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1349 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : exclusive_or_expression;" << std::endl;
			}
		}
#line 3599 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1355 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "inclusive_or_expression : inclusive_or_expression PIPE exclusive_or_expression;" << std::endl;
			}
		}
#line 3609 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1364 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : and_expression;" << std::endl;
			}
		}
#line 3619 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1370 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "exclusive_or_expression : exclusive_or_expression CARROT and_expression;" << std::endl;
			}
		}
#line 3629 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1379 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : equality_expression;" << std::endl;
			}
		}
#line 3639 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1385 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "and_expression : and_expression AMP equality_expression;" << std::endl;
			}
		}
#line 3649 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1394 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : relational_expression;" << std::endl;
			}
		}
#line 3659 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1400 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression EQ_OP relational_expression;" << std::endl;
			}
		}
#line 3669 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1406 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "equality_expression : equality_expression NE_OP relational_expression;" << std::endl;
			}
		}
#line 3679 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1415 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : shift_expression;" << std::endl;
			}
		}
#line 3689 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1421 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LTHAN shift_expression;" << std::endl;
			}
		}
#line 3699 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1427 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GTHAN shift_expression;" << std::endl;
			}
		}
#line 3709 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1433 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression LE_OP shift_expression;" << std::endl;
			}
		}
#line 3719 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1439 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "relational_expression : relational_expression GE_OP shift_expression;" << std::endl;
			}
		}
#line 3729 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1448 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : additive_expression;" << std::endl;
			}
		}
#line 3739 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1454 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression LEFT_OP additive_expression;" << std::endl;
			}
		}
#line 3749 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1460 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "shift_expression : shift_expression RIGHT_OP additive_expression;" << std::endl;
			}
		}
#line 3759 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1469 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "additive_expression : multiplicative_expression;" << std::endl;
			}
		}
#line 3769 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1475 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if ((yyvsp[-2].val)->sEntry != NULL) {
 				dVal dTemp = (yyvsp[-2].val)->sEntry->getIdentifierValue(); 
 				dTemp.value._number = dTemp.value._number + (yyvsp[0].val)->value._number;
 				(yyval.val) = &dTemp; 
 			}

 			else {
 				(yyval.val)->value._number = (yyvsp[-2].val)->value._number + (yyvsp[0].val)->value._number;
 			} 
			if(YFLAG){
				outY << "additive_expression : additive_expression PLUS multiplicative_expression;" << std::endl;
			}
		}
#line 3788 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1490 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._number = (yyvsp[-2].val)->value._number - (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "additive_expression : additive_expression MINUS multiplicative_expression;" << std::endl;
			}
		}
#line 3799 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1500 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "multiplicative_expression : cast_expression;" << std::endl;
			}
		}
#line 3809 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1506 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if ((yyvsp[-2].val) != NULL && (yyvsp[0].val) != NULL) {
 		 		(yyval.val)->value._number = (yyvsp[-2].val)->value._number * (yyvsp[0].val)->value._number;
 		 	}
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MULT cast_expression;" << std::endl;
			}
		}
#line 3822 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1515 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if ((yyvsp[0].val)->value._number == 0) {
 				yyerror("Unable to divide by 0");
 			}
 			(yyval.val)->value._number = (yyvsp[-2].val)->value._number / (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression DIV cast_expression;" << std::endl;
			}
		}
#line 3836 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1525 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._number = (yyvsp[-2].val)->value._number % (yyvsp[0].val)->value._number;
			if(YFLAG){
				outY << "multiplicative_expression : multiplicative_expression MOD cast_expression;" << std::endl;
			}
		}
#line 3847 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1535 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : unary_expression;" << std::endl;
			}
		}
#line 3857 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1541 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "cast_expression : LPAREN type_name RPAREN cast_expression;" << std::endl;
			}
		}
#line 3867 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1550 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : postfix_expression;" << std::endl;
			}
		}
#line 3877 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1556 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : INC_OP unary_expression;" << std::endl;
			}
		}
#line 3887 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1562 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : DEC_OP unary_expression;" << std::endl;
			}
		}
#line 3897 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1568 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(unaryOperatorChosen == MINUS) { 
	 			switch((yyvsp[0].val)->dataType) {
	 				case LONG_LONG_T:
	 					(yyval.val)->dataType = (yyvsp[0].val)->dataType;
	 					(yyval.val)->value._number = (yyvsp[0].val)->value._number * -1;  
	 					break; 

	 				case LONG_DOUBLE_T:
	  					(yyval.val)->dataType = (yyvsp[0].val)->dataType;
	 					(yyval.val)->value._decimal = (yyvsp[0].val)->value._decimal;   
	 					break; 

	 				default:
	 					std::cout << "cast_expression is ???" << std::endl; 
	 					break; 
	 			}
	 			unaryOperatorChosen = -1;
	 		}
			if(YFLAG){
				outY << "unary_expression : unary_operator cast_expression;" << std::endl;
			}
		}
#line 3925 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1592 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF unary_expression;" << std::endl;
			}
		}
#line 3935 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1598 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "unary_expression : SIZEOF LPAREN type_name RPAREN;" << std::endl;
			}
		}
#line 3945 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1607 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = AMP; 
			if(YFLAG){
				outY << "unary_operator : AMP;" << std::endl;
			}
		}
#line 3956 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1614 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = MULT;
			if(YFLAG){
				outY << "unary_operator : MULT;" << std::endl;
			}
		}
#line 3967 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1621 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = PLUS;
			if(YFLAG){
				outY << "unary_operator : PLUS;" << std::endl;
			}
		}
#line 3978 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1628 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = MINUS;
			if(YFLAG){
				outY << "unary_operator : MINUS;" << std::endl;
			}
		}
#line 3989 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1635 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = TILDE;
			if(YFLAG){
				outY << "unary_operator : TILDE;" << std::endl;
			}
		}
#line 4000 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1642 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			unaryOperatorChosen = BANG;
			if(YFLAG){
				outY << "unary_operator : BANG;" << std::endl;
			}
		}
#line 4011 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1652 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "postfix_expression : primary_expression;" << std::endl;
			}
		}
#line 4021 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1658 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "postfix_expression : postfix_expression LBRACK expression RBRACK;" << std::endl;
			}
		}
#line 4031 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1664 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression LPAREN RPAREN;" << std::endl;
			}
		}
#line 4041 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1670 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if (!(yyvsp[-3].val)->sEntry->checkParams(funcCallingParams)) {
 				std::cout << COLOR_NORMAL << COLOR_CYAN_NORMAL << "ERROR:" << COLOR_NORMAL << " Invalid function arguments." << std::endl;
 				yyerror("");
 			}
 			funcCallingParams.clear();  
			if(YFLAG){
				outY << "postfix_expression : primary_expression LPAREN argument_expression_list RPAREN;" << std::endl;
			}
		}
#line 4056 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1681 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DOT identifier;" << std::endl;
			}
		}
#line 4066 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1687 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression PTR_OP identifier;" << std::endl;
			}
		}
#line 4076 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 1693 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression INC_OP;" << std::endl;
			}
		}
#line 4086 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 1699 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "postfix_expression : postfix_expression DEC_OP;" << std::endl;
			}
		}
#line 4096 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 1708 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->sEntry = (yyvsp[0].entry);
			if(YFLAG){
				outY << "primary_expression : identifier;" << std::endl;
			}
		}
#line 4107 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 1715 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			if(YFLAG){
				outY << "primary_expression : constant;" << std::endl;
			}
		}
#line 4117 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 1721 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : string;" << std::endl;
			}
		}
#line 4127 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 1727 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "primary_expression : LPAREN expression RPAREN;" << std::endl;
			}
		}
#line 4137 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 1736 "../parser/cParser.y" /* yacc.c:1646  */
    { 
 			funcCallingParams.push_back((yyvsp[0].val)->sEntry);
			if(YFLAG){
				outY << "argument_expression_list : assignment_expression;" << std::endl;
			}
		}
#line 4148 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 1743 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			funcCallingParams.push_back((yyvsp[0].val)->sEntry);
			if(YFLAG){
				outY << "argument_expression_list : argument_expression_list COMMA assignment_expression;" << std::endl;
			}
		}
#line 4159 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 1753 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._number = (yyvsp[0].val)->value._number; 
 			(yyval.val)->dataType = LONG_LONG_T; 
 			if(YFLAG){
				outY << "constant : INTEGER_CONSTANT;" << std::endl;
			}
		}
#line 4171 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 1761 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._char = (yyvsp[0].val)->value._char;
 			(yyval.val)->dataType = CHAR_T; 
			if(YFLAG){
				outY << "constant : CHARACTER_CONSTANT;" << std::endl;
			}
		}
#line 4183 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 1769 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			(yyval.val)->value._decimal = (yyvsp[0].val)->value._decimal; 
 			(yyval.val)->dataType = LONG_DOUBLE_T; 
			if(YFLAG){
				outY << "constant : FLOATING_CONSTANT;" << std::endl;
			}
		}
#line 4195 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 1777 "../parser/cParser.y" /* yacc.c:1646  */
    {
 			/* not sure what to do about this */
			if(YFLAG){
				outY << "constant : ENUMERATION_CONSTANT;" << std::endl;
			}
		}
#line 4206 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 1787 "../parser/cParser.y" /* yacc.c:1646  */
    {
			if(YFLAG){
				outY << "string : STRING_LITERAL;" << std::endl;
			}
		}
#line 4216 "cParser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 1795 "../parser/cParser.y" /* yacc.c:1646  */
    {(yyval.entry) = (yyvsp[0].entry);}
#line 4222 "cParser.tab.c" /* yacc.c:1646  */
    break;


#line 4226 "cParser.tab.c" /* yacc.c:1646  */
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
#line 1797 "../parser/cParser.y" /* yacc.c:1906  */
 /* end of ANSI C grammar and actions */

/* user code */
void yyerror(const char* s) {

	std::cout << s << std::endl;
	exit(-1);
}

void assignParams(symbolTableEntry* entry, std::vector<parameter> params) {
	if (entry != NULL) {
		for(unsigned int i = 0; i < params.size(); i++) {
			entry->addParameter(params[i]);
		}
	}
}
