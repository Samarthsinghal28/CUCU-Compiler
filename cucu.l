%{
#include <stdio.h>
#include <string.h>
#include "cucu.tab.h"
void yyerror(char *s);
FILE *lex_out ;
int line_number=0;
%}
%%

int[ ]                  {fprintf(lex_out, "DATA TYPE : int \n" ) ; return INTEGER_DT;}  /* DATA TYPE */
char[ ]\*               {fprintf(lex_out, "DATA TYPE : char* \n" ) ; return CHARACTER_DT;}
if                      {fprintf(lex_out, "IF CONDITION : if \n" ) ; return IF;}
[ \t\n]+                ;
else                    {fprintf(lex_out, "ELSE : if \n" ) ; return ELSE;}
while                   {fprintf(lex_out, "LOOP : while \n") ; return WHILE;}
return                  {fprintf(lex_out, "RETURN : return \n" ) ; return RETURN;}
[a-zA-Z_][a-zA-Z0-9_]*  {fprintf(lex_out, "IDENTIFIER : %s \n", yytext ) ; yylval.str=strdup(yytext);return VAR;}
[0-9]+                  {fprintf( lex_out, "NUMBER : =  %s \n", yytext) ;  yylval.n=atoi(yytext); return INT;}
\"([^\"])*\"            {  fprintf(lex_out, "STRING : %s\n ",yytext); yylval.str=strdup(yytext);  return STR; }

(\/\/.*)                /* Ignoring Single Line Comments */
"/*"(\*+[^/*]|([^*]))*\**"*/"  /* Ignoring Multiple Line Comments */


\}                    {fprintf(lex_out, "PARANTHESIS : } \n") ; return CLOSE_CURLY_BRACE;}
\{                    {fprintf(lex_out, "PARANTHESIS : { \n") ; return OPEN_CURLY_BRACE;}
=                     {fprintf(lex_out, "ASSIGN : =  \n") ; return EQUALS_ASSIGN;}
\(                    {fprintf(lex_out, "PARANTHESIS : ( \n") ; return LEFT_PARENTHESIS;}
\)                    {fprintf(lex_out, "PARANTHESIS : ) \n") ; return RIGHT_PARENTHESIS;}
\*                    {fprintf(lex_out, "MULTIPLY : * \n") ; return MULTIPLY;}
\/                    {fprintf(lex_out, "DIVIDE : / \n") ; return DIVIDE;}
\+                    {fprintf(lex_out, "PLUS : + \n") ; return PLUS;}
-                     {fprintf(lex_out, "MINUS : - \n") ; return MINUS;}
==                    {fprintf(lex_out, "INEQUALITY : == \n") ; return EQUAL;}
!=                    {fprintf(lex_out, "INEQUALITY : != \n") ; return NOT_EQUAL;}
\<                    {fprintf(lex_out, "INEQUALITY : < \n") ; return LESS_THAN;}
\<=                   {fprintf(lex_out, "INEQUALITY : <= \n") ; return LESS_THAN_EQUAL;}
\>                    {fprintf(lex_out, "INEQUALITY : > \n") ; return GRTR_THAN;}
\>=                   {fprintf(lex_out, "INEQUALITY : >= \n") ; return GRTR_THAN_EQUAL;}
,                     {fprintf(lex_out, "COMMA : , \n") ; return COMMA;}
\;                    {fprintf(lex_out, "SEMICOLON : ; \n") ; return SEMICOLON;}
\\n                   { line_number++;}
.                     {fprintf(lex_out,"Line number %d: Lexical error, there is no defined token in input: %s\n", line_number, yytext);}
%%


