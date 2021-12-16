/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
