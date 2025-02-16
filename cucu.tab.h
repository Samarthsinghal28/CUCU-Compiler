/* A Bison parser, made by GNU Bison 2.4.2.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2006, 2009-2010 Free Software
   Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEGER_DT = 258,
     CHARACTER_DT = 259,
     IF = 260,
     ELSE = 261,
     WHILE = 262,
     RETURN = 263,
     EQUALS_ASSIGN = 264,
     EQUAL = 265,
     NOT_EQUAL = 266,
     LESS_THAN = 267,
     LESS_THAN_EQUAL = 268,
     GRTR_THAN = 269,
     GRTR_THAN_EQUAL = 270,
     LEFT_PARENTHESIS = 271,
     RIGHT_PARENTHESIS = 272,
     OPEN_CURLY_BRACE = 273,
     CLOSE_CURLY_BRACE = 274,
     PLUS = 275,
     MINUS = 276,
     DIVIDE = 277,
     MULTIPLY = 278,
     COMMA = 279,
     SEMICOLON = 280,
     STR = 281,
     VAR = 282,
     INT = 283
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1685 of yacc.c  */
#line 18 "cucu.y"

    int n;                      /* Integer value */     
    char *str;                  /* String value */



/* Line 1685 of yacc.c  */
#line 86 "cucu.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


