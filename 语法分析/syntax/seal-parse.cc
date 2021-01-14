/* A Bison parser, made by GNU Bison 3.7.2.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         seal_yyparse
#define yylex           seal_yylex
#define yyerror         seal_yyerror
#define yydebug         seal_yydebug
#define yynerrs         seal_yynerrs
#define yylval          seal_yylval
#define yychar          seal_yychar
#define yylloc          seal_yylloc

/* First part of user prologue.  */
#line 6 "seal.y"

  #include <iostream>
  #include "seal-decl.h"
  #include "seal-stmt.h"
  #include "seal-expr.h"
  #include "stringtab.h"
  #include "utilities.h"

  extern char *curr_filename;
  /* Locations */
  #define YYLTYPE int              /* the type of locations */
  #define seal_yylloc curr_lineno  /* use the curr_lineno from the lexer for the location of tokens */
    
    extern int node_lineno;          /* set before constructing a tree node to whatever you want the line number for the tree node to be */
      
      
      #define YYLLOC_DEFAULT(Current, Rhs, N)         \
      Current = Rhs[1];                             \
      node_lineno = Current;
    
    
    #define SET_NODELOC(Current)  \
    node_lineno = Current;
    
    /* IMPORTANT NOTE ON LINE NUMBERS
    *********************************
    * The above definitions and macros cause every terminal in your grammar to 
    * have the line number supplied by the lexer. The only task you have to
    * implement for line numbers to work correctly, is to use SET_NODELOC()
    * before constructing any constructs from non-terminals in your grammar.
    * Example: Consider you are matching on the following very restrictive 
    * (fictional) construct that matches a plus between two integer constants. 
    * (SUCH A RULE SHOULD NOT BE PART OF YOUR PARSER):
    
    add_consts	: INT_CONST '+' INT_CONST 
    
    * where INT_CONST is a terminal for an integer constant. Now, a correct
    * action for this rule that attaches the correct line number to plus_const
    * would look like the following:
    
    add_consts	: INT_CONST '+' INT_CONST 
    {
      // Set the line number of the current non-terminal:
      // ***********************************************
      // You can access the line numbers of the i'th item with @i, just
      // like you acess the value of the i'th exporession with $i.
      //
      // Here, we choose the line number of the last INT_CONST (@3) as the
      // line number of the resulting expression (@$). You are free to pick
      // any reasonable line as the line number of non-terminals. If you 
      // omit the statement @$=..., bison has default rules for deciding which 
      // line number to use. Check the manual for details if you are interested.
      @$ = @3;
      
      
      // Observe that we call SET_NODELOC(@3); this will set the global variable
      // node_lineno to @3. Since the constructor call "plus" uses the value of 
      // this global, the plus node will now have the correct line number.
      SET_NODELOC(@3);
      
      // construct the result node:
      $$ = add(int_const($1), int_const($3));
    }
    
    */
    
    
    
    void yyerror(char *s);        /*  defined below; called for each parse error */
    extern int yylex();           /*  the entry point to the lexer  */
    
    /************************************************************************/
    /*                DONT CHANGE ANYTHING IN THIS SECTION                  */
    
    Program ast_root;	      /* the result of the parse  */
    //Decls parse_results;        /* for use in semantic analysis */
    int omerrs = 0;               /* number of errors in lexing and parsing */
    

#line 159 "seal.tab.c"

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

#include "seal.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IF = 3,                         /* IF  */
  YYSYMBOL_ELSE = 4,                       /* ELSE  */
  YYSYMBOL_WHILE = 5,                      /* WHILE  */
  YYSYMBOL_FOR = 6,                        /* FOR  */
  YYSYMBOL_BREAK = 7,                      /* BREAK  */
  YYSYMBOL_CONTINUE = 8,                   /* CONTINUE  */
  YYSYMBOL_FUNC = 9,                       /* FUNC  */
  YYSYMBOL_RETURN = 10,                    /* RETURN  */
  YYSYMBOL_VAR = 11,                       /* VAR  */
  YYSYMBOL_AND = 12,                       /* AND  */
  YYSYMBOL_OR = 13,                        /* OR  */
  YYSYMBOL_EQUAL = 14,                     /* EQUAL  */
  YYSYMBOL_NE = 15,                        /* NE  */
  YYSYMBOL_GE = 16,                        /* GE  */
  YYSYMBOL_LE = 17,                        /* LE  */
  YYSYMBOL_CONST_BOOL = 18,                /* CONST_BOOL  */
  YYSYMBOL_CONST_INT = 19,                 /* CONST_INT  */
  YYSYMBOL_CONST_STRING = 20,              /* CONST_STRING  */
  YYSYMBOL_CONST_FLOAT = 21,               /* CONST_FLOAT  */
  YYSYMBOL_OBJECTID = 22,                  /* OBJECTID  */
  YYSYMBOL_TYPEID = 23,                    /* TYPEID  */
  YYSYMBOL_24_ = 24,                       /* '='  */
  YYSYMBOL_25_ = 25,                       /* '<'  */
  YYSYMBOL_26_ = 26,                       /* '>'  */
  YYSYMBOL_27_ = 27,                       /* '+'  */
  YYSYMBOL_28_ = 28,                       /* '-'  */
  YYSYMBOL_29_ = 29,                       /* '*'  */
  YYSYMBOL_30_ = 30,                       /* '/'  */
  YYSYMBOL_31_ = 31,                       /* '%'  */
  YYSYMBOL_UMINUS = 32,                    /* UMINUS  */
  YYSYMBOL_33_ = 33,                       /* '!'  */
  YYSYMBOL_34_ = 34,                       /* '~'  */
  YYSYMBOL_35_ = 35,                       /* '&'  */
  YYSYMBOL_36_ = 36,                       /* '|'  */
  YYSYMBOL_37_ = 37,                       /* '^'  */
  YYSYMBOL_38_ = 38,                       /* ';'  */
  YYSYMBOL_39_ = 39,                       /* ','  */
  YYSYMBOL_40_ = 40,                       /* '('  */
  YYSYMBOL_41_ = 41,                       /* ')'  */
  YYSYMBOL_42_ = 42,                       /* '{'  */
  YYSYMBOL_43_ = 43,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 44,                  /* $accept  */
  YYSYMBOL_program = 45,                   /* program  */
  YYSYMBOL_decl_list = 46,                 /* decl_list  */
  YYSYMBOL_decl = 47,                      /* decl  */
  YYSYMBOL_variableDecl = 48,              /* variableDecl  */
  YYSYMBOL_variable = 49,                  /* variable  */
  YYSYMBOL_variables = 50,                 /* variables  */
  YYSYMBOL_callDecl = 51,                  /* callDecl  */
  YYSYMBOL_variableDecls = 52,             /* variableDecls  */
  YYSYMBOL_stmts = 53,                     /* stmts  */
  YYSYMBOL_stmtBlock = 54,                 /* stmtBlock  */
  YYSYMBOL_stmt = 55,                      /* stmt  */
  YYSYMBOL_ifStmt = 56,                    /* ifStmt  */
  YYSYMBOL_whileStmt = 57,                 /* whileStmt  */
  YYSYMBOL_forStmt = 58,                   /* forStmt  */
  YYSYMBOL_returnStmt = 59,                /* returnStmt  */
  YYSYMBOL_continueStmt = 60,              /* continueStmt  */
  YYSYMBOL_breakStmt = 61,                 /* breakStmt  */
  YYSYMBOL_call = 62,                      /* call  */
  YYSYMBOL_actuals = 63,                   /* actuals  */
  YYSYMBOL_expr = 64                       /* expr  */
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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   680

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  44
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  21
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  142

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


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
       2,     2,     2,    33,     2,     2,     2,    31,    35,     2,
      40,    41,    29,    27,    39,    28,     2,    30,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    38,
      25,    24,    26,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    37,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,    36,    43,    34,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     2,
       4,     5,     6,     7,     8,     9,    10,    18,    19,    20,
      21,    11,     2,     2,    12,    13,    14,    15,    16,    17,
       2,     2,     2,     2,    22,    23,     2,    32
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   183,   183,   190,   192,   196,   196,   198,   203,   208,
     210,   215,   217,   222,   224,   229,   231,   236,   238,   240,
     242,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     251,   253,   258,   263,   265,   267,   269,   271,   273,   275,
     277,   282,   284,   289,   293,   297,   299,   304,   306,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   345,   347,   349,   351,
     353,   355,   357,   359,   361,   363
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
  "\"end of file\"", "error", "\"invalid token\"", "IF", "ELSE", "WHILE",
  "FOR", "BREAK", "CONTINUE", "FUNC", "RETURN", "VAR", "AND", "OR",
  "EQUAL", "NE", "GE", "LE", "CONST_BOOL", "CONST_INT", "CONST_STRING",
  "CONST_FLOAT", "OBJECTID", "TYPEID", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'%'", "UMINUS", "'!'", "'~'", "'&'", "'|'", "'^'", "';'",
  "','", "'('", "')'", "'{'", "'}'", "$accept", "program", "decl_list",
  "decl", "variableDecl", "variable", "variables", "callDecl",
  "variableDecls", "stmts", "stmtBlock", "stmt", "ifStmt", "whileStmt",
  "forStmt", "returnStmt", "continueStmt", "breakStmt", "call", "actuals",
  "expr", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   286,   258,   260,   261,   262,   263,   264,   265,
     266,   271,   274,   275,   276,   277,   278,   279,   267,   268,
     269,   270,   284,   285,    61,    60,    62,    43,    45,    42,
      47,    37,   287,    33,   126,    38,   124,    94,    59,    44,
      40,    41,   123,   125
};
#endif

#define YYPACT_NINF (-45)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,    -6,     0,    25,    22,   -45,   -45,   -45,   -12,    46,
      37,   -45,   -45,    -1,   -45,   -45,    60,   -45,    29,    -8,
       0,    61,   117,   -45,   -45,    -8,   624,   624,    59,    44,
      47,   555,   -45,   -45,   -45,   -45,    -4,   624,   624,   624,
     -45,   624,   -45,   -45,   158,   199,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   333,   -45,   272,   272,   578,
     360,   -45,   -45,   -45,   387,   624,   538,    11,    11,   -45,
     303,   -45,   -45,   240,   -45,   -45,   624,   624,   624,   624,
     624,   624,   624,   624,   624,   624,   624,   624,   624,   624,
     624,   624,   -45,    82,   -45,   -10,   414,   601,   -45,   468,
     -45,    33,   468,   -45,   -45,   494,   468,   518,   518,   643,
     643,   643,   643,    14,    14,    11,    11,    11,   -45,   -45,
     -45,    -8,   -45,   272,   -10,   -10,   441,   624,   -45,   -45,
     -45,   -45,   272,   -45,   272,   -10,   468,   -45,   -45,   -45,
     272,   -45
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     2,     3,     5,     6,     0,     0,
       0,     1,     4,     0,     8,     7,     0,     9,     0,     0,
       0,     0,     0,    12,    10,     0,     0,     0,     0,     0,
       0,     0,    51,    50,    52,    53,    55,     0,     0,     0,
      21,     0,    20,    13,     0,     0,    29,    15,    23,    24,
      25,    28,    27,    26,    75,     0,    11,     0,     0,     0,
       0,    44,    43,    42,     0,     0,     0,    72,    70,    71,
       0,    19,    14,     0,    18,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    31,    32,     0,     0,     0,    41,    49,
      46,     0,    47,    54,    17,    67,    68,    63,    64,    65,
      62,    61,    66,    56,    57,    58,    59,    60,    73,    74,
      69,     0,    33,     0,     0,     0,     0,     0,    45,    30,
      36,    35,     0,    34,     0,     0,    48,    39,    38,    37,
       0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,   -45,    84,   -17,     6,   -45,   -45,   -45,    -7,
     -19,   -44,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -24
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    10,    18,     7,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,   101,
      55
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    75,    57,    58,    60,    43,    56,    64,    32,    33,
      34,    35,    36,    67,    68,    69,     8,    70,    37,    17,
      65,     9,     9,    38,    39,    11,    24,    72,    13,    75,
      41,     1,    22,     2,    22,    96,    66,    73,    93,    94,
      16,    99,   102,    86,    87,    88,    89,    90,    91,    89,
      90,    91,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,    20,    14,
      21,   123,   127,   126,   128,    15,   122,    32,    33,    34,
      35,    36,    61,    19,    25,    62,   121,    37,    12,     0,
       0,     0,    38,    39,     0,     0,     0,    59,     0,    41,
     132,   134,   129,   136,   130,   131,   133,     0,     0,     0,
       0,   140,     0,   137,     0,   138,   139,     0,     0,     0,
      26,   141,    27,    28,    29,    30,     0,    31,     2,     0,
       0,     0,     0,     0,     0,    32,    33,    34,    35,    36,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
      38,    39,     0,     0,     0,    40,     0,    41,     0,    22,
      42,    26,     0,    27,    28,    29,    30,     0,    31,     2,
       0,     0,     0,     0,     0,     0,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,    39,     0,     0,     0,    40,     0,    41,     0,
      22,    71,    26,     0,    27,    28,    29,    30,     0,    31,
       0,     0,     0,     0,     0,     0,     0,    32,    33,    34,
      35,    36,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,    39,     0,     0,     0,    40,     0,    41,
       0,    22,    74,    26,     0,    27,    28,    29,    30,     0,
      31,     0,     0,     0,     0,     0,     0,     0,    32,    33,
      34,    35,    36,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,    39,     0,     0,     0,    40,     0,
      41,     0,    22,   104,    76,    77,    78,    79,    80,    81,
       0,     0,     0,     0,     0,     0,     0,    82,    83,    84,
      85,    86,    87,    88,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,    22,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,    82,    83,
      84,    85,    86,    87,    88,     0,     0,     0,    89,    90,
      91,     0,     0,     0,   103,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,     0,     0,     0,    82,    83,
      84,    85,    86,    87,    88,     0,     0,     0,    89,    90,
      91,    92,    76,    77,    78,    79,    80,    81,     0,     0,
       0,     0,     0,     0,     0,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,    89,    90,    91,    97,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
       0,     0,    82,    83,    84,    85,    86,    87,    88,     0,
       0,     0,    89,    90,    91,    98,    76,    77,    78,    79,
      80,    81,     0,     0,     0,     0,     0,     0,     0,    82,
      83,    84,    85,    86,    87,    88,     0,     0,     0,    89,
      90,    91,   124,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,     0,     0,    82,    83,    84,    85,
      86,    87,    88,     0,     0,     0,    89,    90,    91,   135,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,     0,     0,    82,    83,    84,    85,    86,    87,    88,
       0,     0,     0,    89,    90,    91,    76,     0,    78,    79,
      80,    81,     0,     0,     0,     0,     0,     0,     0,    82,
      83,    84,    85,    86,    87,    88,     0,     0,     0,    89,
      90,    91,    -1,    -1,    80,    81,     0,     0,     0,     0,
       0,     0,     0,    82,    83,    84,    85,    86,    87,    88,
       0,     0,     0,    89,    90,    91,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,    39,    32,    33,    34,    35,    36,    41,   100,
       0,     0,     0,    37,     0,     0,     0,     0,    38,    39,
       0,     0,     0,    63,     0,    41,    32,    33,    34,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,    39,     0,     0,     0,    95,     0,    41,    32,
      33,    34,    35,    36,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,    39,     0,     0,     0,   125,
       0,    41,    32,    33,    34,    35,    36,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,    39,    -1,
      -1,     0,     0,     0,    41,     0,     0,     0,    -1,    -1,
      84,    85,    86,    87,    88,     0,     0,     0,    89,    90,
      91
};

static const yytype_int16 yycheck[] =
{
      19,    45,    26,    27,    28,    22,    25,    31,    18,    19,
      20,    21,    22,    37,    38,    39,    22,    41,    28,    13,
      24,    22,    22,    33,    34,     0,    20,    44,    40,    73,
      40,     9,    42,    11,    42,    59,    40,    44,    57,    58,
      41,    65,    66,    29,    30,    31,    35,    36,    37,    35,
      36,    37,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    39,    23,
      41,    95,    39,    97,    41,    38,    95,    18,    19,    20,
      21,    22,    38,    23,    23,    38,     4,    28,     4,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    38,    -1,    40,
     124,   125,   121,   127,   123,   124,   125,    -1,    -1,    -1,
      -1,   135,    -1,   132,    -1,   134,   135,    -1,    -1,    -1,
       3,   140,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,
      33,    34,    -1,    -1,    -1,    38,    -1,    40,    -1,    42,
      43,     3,    -1,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    38,    -1,    40,    -1,
      42,    43,     3,    -1,     5,     6,     7,     8,    -1,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,
      -1,    -1,    33,    34,    -1,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,     3,    -1,     5,     6,     7,     8,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    38,    -1,
      40,    -1,    42,    43,    12,    13,    14,    15,    16,    17,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    -1,    35,    36,    37,
      -1,    -1,    -1,    -1,    42,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    35,    36,
      37,    -1,    -1,    -1,    41,    12,    13,    14,    15,    16,
      17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    35,    36,
      37,    38,    12,    13,    14,    15,    16,    17,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    35,    36,    37,    38,    12,
      13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    35,    36,    37,    38,    12,    13,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    35,
      36,    37,    38,    12,    13,    14,    15,    16,    17,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      12,    13,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    35,    36,    37,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    -1,    35,
      36,    37,    14,    15,    16,    17,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    -1,    35,    36,    37,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    18,    19,    20,    21,    22,    40,    41,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,
      -1,    -1,    -1,    38,    -1,    40,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    33,    34,    -1,    -1,    -1,    38,    -1,    40,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
      -1,    -1,    -1,    -1,    33,    34,    -1,    -1,    -1,    38,
      -1,    40,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    -1,    -1,    -1,    -1,    33,    34,    16,
      17,    -1,    -1,    -1,    40,    -1,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    35,    36,
      37
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     9,    11,    45,    46,    47,    48,    51,    22,    22,
      49,     0,    47,    40,    23,    38,    41,    49,    50,    23,
      39,    41,    42,    54,    49,    23,     3,     5,     6,     7,
       8,    10,    18,    19,    20,    21,    22,    28,    33,    34,
      38,    40,    43,    48,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    64,    54,    64,    64,    38,
      64,    38,    38,    38,    64,    24,    40,    64,    64,    64,
      64,    43,    48,    53,    43,    55,    12,    13,    14,    15,
      16,    17,    25,    26,    27,    28,    29,    30,    31,    35,
      36,    37,    38,    54,    54,    38,    64,    38,    38,    64,
      41,    63,    64,    41,    43,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,     4,    54,    64,    38,    38,    64,    39,    41,    54,
      54,    54,    64,    54,    64,    38,    64,    54,    54,    54,
      64,    54
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    44,    45,    46,    46,    47,    47,    48,    49,    50,
      50,    51,    51,    52,    52,    53,    53,    54,    54,    54,
      54,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    57,    58,    58,    58,    58,    58,    58,    58,
      58,    59,    59,    60,    61,    62,    62,    63,    63,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     1,
       3,     7,     6,     1,     2,     1,     2,     4,     3,     3,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       5,     3,     3,     4,     5,     5,     5,     6,     6,     6,
       7,     3,     2,     2,     2,     4,     3,     1,     3,     3,
       1,     1,     1,     1,     3,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     3,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

# ifndef YY_LOCATION_PRINT
#  if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#   define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

#  else
#   define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#  endif
# endif /* !defined YY_LOCATION_PRINT */


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yykind, yyvaluep, yylocationp);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp,
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
                       &yyvsp[(yyi + 1) - (yynrhs)],
                       &(yylsp[(yyi + 1) - (yynrhs)]));
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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

    /* The location stack: array, bottom, top.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls = yylsa;
    YYLTYPE *yylsp = yyls;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

  /* The locations where the error started and ended.  */
  YYLTYPE yyerror_range[3];



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yyerror_range[1] = yylloc;
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
  *++yylsp = yylloc;

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

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* program: decl_list  */
#line 183 "seal.y"
                                    {
        (yyloc) = (yylsp[0]);
        ast_root = program((yyvsp[0].decls)); 
      }
#line 1510 "seal.tab.c"
    break;

  case 3: /* decl_list: decl  */
#line 190 "seal.y"
                     {
        (yyval.decls) = single_Decls((yyvsp[0].decl));
    }
#line 1518 "seal.tab.c"
    break;

  case 4: /* decl_list: decl_list decl  */
#line 192 "seal.y"
                       {
        (yyval.decls) = append_Decls((yyvsp[-1].decls), single_Decls((yyvsp[0].decl)));
    }
#line 1526 "seal.tab.c"
    break;

  case 7: /* variableDecl: VAR variable ';'  */
#line 198 "seal.y"
                                     {
        (yyval.variableDecl) = variableDecl((yyvsp[-1].variable));
    }
#line 1534 "seal.tab.c"
    break;

  case 8: /* variable: OBJECTID TYPEID  */
#line 203 "seal.y"
                                 {
        (yyval.variable) = variable((yyvsp[-1].symbol), (yyvsp[0].symbol));
    }
#line 1542 "seal.tab.c"
    break;

  case 9: /* variables: variable  */
#line 208 "seal.y"
                         {
        (yyval.variables) = single_Variables((yyvsp[0].variable));
    }
#line 1550 "seal.tab.c"
    break;

  case 10: /* variables: variables ',' variable  */
#line 210 "seal.y"
                               {
        (yyval.variables) = append_Variables((yyvsp[-2].variables), single_Variables((yyvsp[0].variable)));
    }
#line 1558 "seal.tab.c"
    break;

  case 11: /* callDecl: FUNC OBJECTID '(' variables ')' TYPEID stmtBlock  */
#line 215 "seal.y"
                                                                    {
        (yyval.callDecl) = callDecl((yyvsp[-5].symbol), (yyvsp[-3].variables), (yyvsp[-1].symbol), (yyvsp[0].stmtBlock));
    }
#line 1566 "seal.tab.c"
    break;

  case 12: /* callDecl: FUNC OBJECTID '(' ')' TYPEID stmtBlock  */
#line 217 "seal.y"
                                               {
        (yyval.callDecl) = callDecl((yyvsp[-4].symbol), nil_Variables(), (yyvsp[-1].symbol), (yyvsp[0].stmtBlock));
    }
#line 1574 "seal.tab.c"
    break;

  case 13: /* variableDecls: variableDecl  */
#line 222 "seal.y"
                                 {
        (yyval.variableDecls) = single_VariableDecls((yyvsp[0].variableDecl));
    }
#line 1582 "seal.tab.c"
    break;

  case 14: /* variableDecls: variableDecls variableDecl  */
#line 224 "seal.y"
                                   {
        (yyval.variableDecls) = append_VariableDecls((yyvsp[-1].variableDecls), single_VariableDecls((yyvsp[0].variableDecl))); 
    }
#line 1590 "seal.tab.c"
    break;

  case 15: /* stmts: stmt  */
#line 229 "seal.y"
                 {
        (yyval.stmts) = single_Stmts((yyvsp[0].stmt));
    }
#line 1598 "seal.tab.c"
    break;

  case 16: /* stmts: stmts stmt  */
#line 231 "seal.y"
                   {
        (yyval.stmts) = append_Stmts((yyvsp[-1].stmts), single_Stmts((yyvsp[0].stmt))); 
    }
#line 1606 "seal.tab.c"
    break;

  case 17: /* stmtBlock: '{' variableDecls stmts '}'  */
#line 236 "seal.y"
                                            {
        (yyval.stmtBlock) = stmtBlock((yyvsp[-2].variableDecls), (yyvsp[-1].stmts));
    }
#line 1614 "seal.tab.c"
    break;

  case 18: /* stmtBlock: '{' stmts '}'  */
#line 238 "seal.y"
                      {
        (yyval.stmtBlock) = stmtBlock(nil_VariableDecls(), (yyvsp[-1].stmts));
    }
#line 1622 "seal.tab.c"
    break;

  case 19: /* stmtBlock: '{' variableDecls '}'  */
#line 240 "seal.y"
                              {
        (yyval.stmtBlock) = stmtBlock((yyvsp[-1].variableDecls), nil_Stmts());
    }
#line 1630 "seal.tab.c"
    break;

  case 20: /* stmtBlock: '{' '}'  */
#line 242 "seal.y"
                {
        (yyval.stmtBlock) = stmtBlock(nil_VariableDecls(), nil_Stmts());
    }
#line 1638 "seal.tab.c"
    break;

  case 30: /* ifStmt: IF expr stmtBlock ELSE stmtBlock  */
#line 251 "seal.y"
                                                 {
        (yyval.ifStmt) = ifstmt((yyvsp[-3].expr), (yyvsp[-2].stmtBlock), (yyvsp[0].stmtBlock));
    }
#line 1646 "seal.tab.c"
    break;

  case 31: /* ifStmt: IF expr stmtBlock  */
#line 253 "seal.y"
                          {
      (yyval.ifStmt) = ifstmt((yyvsp[-1].expr), (yyvsp[0].stmtBlock), stmtBlock(nil_VariableDecls(), nil_Stmts()));
    }
#line 1654 "seal.tab.c"
    break;

  case 32: /* whileStmt: WHILE expr stmtBlock  */
#line 258 "seal.y"
                                      {
        (yyval.whileStmt) = whilestmt((yyvsp[-1].expr), (yyvsp[0].stmtBlock));
    }
#line 1662 "seal.tab.c"
    break;

  case 33: /* forStmt: FOR ';' ';' stmtBlock  */
#line 263 "seal.y"
                                    {
        (yyval.forStmt) = forstmt(no_expr(), no_expr(), no_expr(), (yyvsp[0].stmtBlock));
    }
#line 1670 "seal.tab.c"
    break;

  case 34: /* forStmt: FOR expr ';' ';' stmtBlock  */
#line 265 "seal.y"
                                    {
        (yyval.forStmt) = forstmt((yyvsp[-3].expr), no_expr(), no_expr(), (yyvsp[0].stmtBlock));
    }
#line 1678 "seal.tab.c"
    break;

  case 35: /* forStmt: FOR ';' expr ';' stmtBlock  */
#line 267 "seal.y"
                                    {
        (yyval.forStmt) = forstmt(no_expr(), (yyvsp[-2].expr), no_expr(),  (yyvsp[0].stmtBlock));
    }
#line 1686 "seal.tab.c"
    break;

  case 36: /* forStmt: FOR ';' ';' expr stmtBlock  */
#line 269 "seal.y"
                                    {
        (yyval.forStmt) = forstmt(no_expr(), no_expr(), (yyvsp[-1].expr), (yyvsp[0].stmtBlock));
    }
#line 1694 "seal.tab.c"
    break;

  case 37: /* forStmt: FOR expr ';' expr ';' stmtBlock  */
#line 271 "seal.y"
                                        {
        (yyval.forStmt) = forstmt((yyvsp[-4].expr), (yyvsp[-2].expr), no_expr(), (yyvsp[0].stmtBlock));
    }
#line 1702 "seal.tab.c"
    break;

  case 38: /* forStmt: FOR expr ';' ';' expr stmtBlock  */
#line 273 "seal.y"
                                        {
        (yyval.forStmt) = forstmt((yyvsp[-4].expr), no_expr(), (yyvsp[-1].expr), (yyvsp[0].stmtBlock));
    }
#line 1710 "seal.tab.c"
    break;

  case 39: /* forStmt: FOR ';' expr ';' expr stmtBlock  */
#line 275 "seal.y"
                                        {
        (yyval.forStmt) = forstmt(no_expr(),(yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].stmtBlock));
    }
#line 1718 "seal.tab.c"
    break;

  case 40: /* forStmt: FOR expr ';' expr ';' expr stmtBlock  */
#line 277 "seal.y"
                                             {
        (yyval.forStmt) = forstmt((yyvsp[-5].expr), (yyvsp[-3].expr), (yyvsp[-1].expr), (yyvsp[0].stmtBlock));
    }
#line 1726 "seal.tab.c"
    break;

  case 41: /* returnStmt: RETURN expr ';'  */
#line 282 "seal.y"
                                  {
        (yyval.returnStmt) = returnstmt((yyvsp[-1].expr));
    }
#line 1734 "seal.tab.c"
    break;

  case 42: /* returnStmt: RETURN ';'  */
#line 284 "seal.y"
                   {
        (yyval.returnStmt) = returnstmt(no_expr());
    }
#line 1742 "seal.tab.c"
    break;

  case 43: /* continueStmt: CONTINUE ';'  */
#line 289 "seal.y"
                                 {
        (yyval.continueStmt) = continuestmt();
    }
#line 1750 "seal.tab.c"
    break;

  case 44: /* breakStmt: BREAK ';'  */
#line 293 "seal.y"
                          {
        (yyval.breakStmt) = breakstmt();
    }
#line 1758 "seal.tab.c"
    break;

  case 45: /* call: OBJECTID '(' actuals ')'  */
#line 297 "seal.y"
                                    {
        (yyval.call) = call((yyvsp[-3].symbol), (yyvsp[-1].actuals));
    }
#line 1766 "seal.tab.c"
    break;

  case 46: /* call: OBJECTID '(' ')'  */
#line 299 "seal.y"
                         {
        (yyval.call) = call((yyvsp[-2].symbol), nil_Actuals());
    }
#line 1774 "seal.tab.c"
    break;

  case 47: /* actuals: expr  */
#line 304 "seal.y"
                   {
        (yyval.actuals) = single_Actuals(actual((yyvsp[0].expr)));
    }
#line 1782 "seal.tab.c"
    break;

  case 48: /* actuals: actuals ',' expr  */
#line 306 "seal.y"
                         {
        (yyval.actuals) = append_Actuals((yyvsp[-2].actuals), single_Actuals(actual((yyvsp[0].expr))));
    }
#line 1790 "seal.tab.c"
    break;

  case 49: /* expr: OBJECTID '=' expr  */
#line 311 "seal.y"
                             {
        (yyval.expr) = assign((yyvsp[-2].symbol), (yyvsp[0].expr));
    }
#line 1798 "seal.tab.c"
    break;

  case 50: /* expr: CONST_INT  */
#line 313 "seal.y"
                  {
        (yyval.expr) = const_int((yyvsp[0].symbol));
    }
#line 1806 "seal.tab.c"
    break;

  case 51: /* expr: CONST_BOOL  */
#line 315 "seal.y"
                   {
        (yyval.expr) = const_bool((yyvsp[0].boolean));
    }
#line 1814 "seal.tab.c"
    break;

  case 52: /* expr: CONST_STRING  */
#line 317 "seal.y"
                     {
        (yyval.expr) = const_string((yyvsp[0].symbol));
    }
#line 1822 "seal.tab.c"
    break;

  case 53: /* expr: CONST_FLOAT  */
#line 319 "seal.y"
                    {
        (yyval.expr) = const_float((yyvsp[0].symbol));
    }
#line 1830 "seal.tab.c"
    break;

  case 54: /* expr: '(' expr ')'  */
#line 321 "seal.y"
                     {
        (yyval.expr) = (yyvsp[-1].expr);
    }
#line 1838 "seal.tab.c"
    break;

  case 55: /* expr: OBJECTID  */
#line 323 "seal.y"
                 {
        (yyval.expr) = object((yyvsp[0].symbol));
    }
#line 1846 "seal.tab.c"
    break;

  case 56: /* expr: expr '+' expr  */
#line 325 "seal.y"
                      {
        (yyval.expr) = add((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1854 "seal.tab.c"
    break;

  case 57: /* expr: expr '-' expr  */
#line 327 "seal.y"
                      {
        (yyval.expr) = minus((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1862 "seal.tab.c"
    break;

  case 58: /* expr: expr '*' expr  */
#line 329 "seal.y"
                      {
        (yyval.expr) = multi((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1870 "seal.tab.c"
    break;

  case 59: /* expr: expr '/' expr  */
#line 331 "seal.y"
                      {
        (yyval.expr) = divide((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1878 "seal.tab.c"
    break;

  case 60: /* expr: expr '%' expr  */
#line 333 "seal.y"
                      {
        (yyval.expr) = mod((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1886 "seal.tab.c"
    break;

  case 61: /* expr: expr '<' expr  */
#line 335 "seal.y"
                      {
        (yyval.expr) = lt((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1894 "seal.tab.c"
    break;

  case 62: /* expr: expr LE expr  */
#line 337 "seal.y"
                     {
        (yyval.expr) = le((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1902 "seal.tab.c"
    break;

  case 63: /* expr: expr EQUAL expr  */
#line 339 "seal.y"
                        {
        (yyval.expr) = equ((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1910 "seal.tab.c"
    break;

  case 64: /* expr: expr NE expr  */
#line 341 "seal.y"
                     {
        (yyval.expr) = neq((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1918 "seal.tab.c"
    break;

  case 65: /* expr: expr GE expr  */
#line 343 "seal.y"
                     {
        (yyval.expr) = ge((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1926 "seal.tab.c"
    break;

  case 66: /* expr: expr '>' expr  */
#line 345 "seal.y"
                      {
        (yyval.expr) = gt((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1934 "seal.tab.c"
    break;

  case 67: /* expr: expr AND expr  */
#line 347 "seal.y"
                      {
        (yyval.expr) = and_((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1942 "seal.tab.c"
    break;

  case 68: /* expr: expr OR expr  */
#line 349 "seal.y"
                     {
        (yyval.expr) = or_((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1950 "seal.tab.c"
    break;

  case 69: /* expr: expr '^' expr  */
#line 351 "seal.y"
                      {
        (yyval.expr) = xor_((yyvsp[-2].expr) ,(yyvsp[0].expr));
    }
#line 1958 "seal.tab.c"
    break;

  case 70: /* expr: '!' expr  */
#line 353 "seal.y"
                 {
        (yyval.expr) = not_((yyvsp[0].expr));
    }
#line 1966 "seal.tab.c"
    break;

  case 71: /* expr: '~' expr  */
#line 355 "seal.y"
                 {
        (yyval.expr) = bitnot((yyvsp[0].expr));
    }
#line 1974 "seal.tab.c"
    break;

  case 72: /* expr: '-' expr  */
#line 357 "seal.y"
                              {
        (yyval.expr) = neg((yyvsp[0].expr));
    }
#line 1982 "seal.tab.c"
    break;

  case 73: /* expr: expr '&' expr  */
#line 359 "seal.y"
                      {
        (yyval.expr) = bitand_((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1990 "seal.tab.c"
    break;

  case 74: /* expr: expr '|' expr  */
#line 361 "seal.y"
                      {
        (yyval.expr) = bitor_((yyvsp[-2].expr), (yyvsp[0].expr));
    }
#line 1998 "seal.tab.c"
    break;

  case 75: /* expr: call  */
#line 363 "seal.y"
             {
        (yyval.expr) = (yyvsp[0].call);
    }
#line 2006 "seal.tab.c"
    break;


#line 2010 "seal.tab.c"

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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;
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
                      yytoken, &yylval, &yylloc);
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  ++yylsp;
  YYLLOC_DEFAULT (*yylsp, yyerror_range, 2);

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 368 "seal.y"

    
    /* This function is called automatically when Bison detects a parse error. */
    void yyerror(char *s)
    {
      extern int curr_lineno;
      
      cerr << "\"" << curr_filename << "\", line " << curr_lineno << ": " \
      << s << " at or near ";
      print_seal_token(yychar);
      cerr << endl;
      omerrs++;
      
      if(omerrs>50) {fprintf(stdout, "More than 50 errors\n"); exit(1);}
    }
