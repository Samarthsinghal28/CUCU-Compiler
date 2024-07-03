%{
    #include<stdio.h>
    #include<stdlib.h>
    int yyerror(char *error_msg);
    int yylex();    
    FILE *lex_out, *yyout , *yyin;

    int yyerror (char *str){
        fprintf(yyout, "Syntax Error ! : %s\n",str);
    }
%}


/* Defining Tokens Used in CUCU.L file */

%token INTEGER_DT CHARACTER_DT IF ELSE WHILE RETURN EQUALS_ASSIGN EQUAL NOT_EQUAL LESS_THAN LESS_THAN_EQUAL GRTR_THAN GRTR_THAN_EQUAL LEFT_PARENTHESIS RIGHT_PARENTHESIS OPEN_CURLY_BRACE CLOSE_CURLY_BRACE PLUS MINUS DIVIDE MULTIPLY COMMA SEMICOLON  

%union{
    int n;                      /* Integer value */     
    char *str;                  /* String value */
}
%token <str> STR                /* Token representing a string */
%token <str> VAR                /* Token representing a variable */

       
%token <n> INT


/* Defining Left Associativity */

%left EQUALS_ASSIGN
%left EQUAL NOT_EQUAL   
%left MULTIPLY DIVIDE
%left PLUS MINUS

%%

PROGRAM : FUNCTION_DECLARATION PROGRAM| FUNCTION_DEFINATION PROGRAM| VAR_DECLARATION PROGRAM |  ;

VAR_DECLARATION : INTEGER_DT VAR SEMICOLON                { fprintf(yyout,"Variable type : Integer \nIdentifier : %s \n",$2);                  } 
        | INTEGER_DT VAR EQUALS_ASSIGN EXPR SEMICOLON     { fprintf(yyout,"Variable type : Integer \nIdentifier : %s \n",$2);                  } 
        | CHARACTER_DT VAR SEMICOLON                       { fprintf(yyout,"Variable type : Character \nIdentifier : %s \n",$2);                  } 
        | CHARACTER_DT VAR EQUALS_ASSIGN VAR SEMICOLON     { fprintf(yyout,"Variable type : Character \nIdentifier : %s \n",$2);                  }          
        | CHARACTER_DT VAR EQUALS_ASSIGN STR SEMICOLON     { fprintf(yyout,"Variable type : Character \nIdentifier : %s\n",$2);                 } 
        | VAR EQUALS_ASSIGN STR SEMICOLON               { fprintf(yyout,"Character Identifier : %s \n",$1);                                            }
        | VAR EQUALS_ASSIGN EXPR SEMICOLON              { fprintf(yyout,"Identifier : %s \n",$1);                                            }
        ;


EXPR :  INT                                             {fprintf(yyout,"Integer :  %d \n", $1);         }
        | VAR                                           {fprintf(yyout,"Variable : %s \n", $1);         }
        | EXPR PLUS EXPR                                {fprintf(yyout,"Arithmetic Operator : + \n");   }
        | EXPR MINUS EXPR                               {fprintf(yyout,"Arithmetic Operator : - \n");   }
        | EXPR MULTIPLY EXPR                            {fprintf(yyout,"Arithmetic Operator : * \n");   }
        | EXPR DIVIDE EXPR                              {fprintf(yyout,"Arithmetic Operator : / \n");   }
        | LEFT_PARENTHESIS EXPR RIGHT_PARENTHESIS;

FUNCTION_DECLARATION : INTEGER_DT VAR LEFT_PARENTHESIS ARGUMENTS RIGHT_PARENTHESIS SEMICOLON 
                       {    fprintf(yyout,"Function Declaration : \nReturn Type : Integer \nFunction name : %s \n",$2);}
                       | CHARACTER_DT VAR LEFT_PARENTHESIS ARGUMENTS RIGHT_PARENTHESIS SEMICOLON 
                       {    fprintf(yyout,"Function Declaration \nReturn Type : Character \nFunction name : %s \n",$2); }
                       | INTEGER_DT VAR LEFT_PARENTHESIS RIGHT_PARENTHESIS SEMICOLON 
                       {    fprintf(yyout,"Function Declaration : \nReturn Type : Integer \nFunction name : %s \n",$2);}
                       | CHARACTER_DT VAR LEFT_PARENTHESIS RIGHT_PARENTHESIS SEMICOLON 
                       {    fprintf(yyout,"Function Declaration \nReturn Type : Character \nFunction name : %s \n",$2); }
                       ;

FUNCTION_DEFINATION: INTEGER_DT VAR LEFT_PARENTHESIS ARGUMENTS RIGHT_PARENTHESIS OPEN_CURLY_BRACE STATEMENTS CLOSE_CURLY_BRACE
            {   fprintf(yyout,"Function \nReturn Type : Integer \nFunction name : %s \n",$2);   }
            | CHARACTER_DT VAR LEFT_PARENTHESIS ARGUMENTS RIGHT_PARENTHESIS OPEN_CURLY_BRACE STATEMENTS CLOSE_CURLY_BRACE
            {    fprintf(yyout,"Function \nReturn Type : Character \nFunction name : %s \n",$2);}
            INTEGER_DT VAR LEFT_PARENTHESIS RIGHT_PARENTHESIS OPEN_CURLY_BRACE STATEMENTS CLOSE_CURLY_BRACE
            {   fprintf(yyout,"Function \nReturn Type : Integer \nFunction name : %s \n",$2);   }
            | CHARACTER_DT VAR LEFT_PARENTHESIS RIGHT_PARENTHESIS OPEN_CURLY_BRACE STATEMENTS CLOSE_CURLY_BRACE
            {    fprintf(yyout,"Function \nReturn Type : Character \nFunction name : %s \n",$2);}

            ;

ARGUMENTS :  INTEGER_DT VAR                        {           fprintf(yyout,"Function Arguement : %s\n Variable Type : Integer",$2);                  }
        | CHARACTER_DT VAR                          {           fprintf(yyout,"Function Arguement : %s\n Variable Type : Character",$2);                  }
        | INTEGER_DT VAR COMMA ARGUMENTS               {           fprintf(yyout,"Function Arguement : %s\n Variable Type : Integer",$2);                  }
        | CHARACTER_DT VAR COMMA ARGUMENTS               {           fprintf(yyout,"Function Arguement : %s\n Variable Type : Character",$2);                  }
        ;


STATEMENTS : STATEMENT ;

STATEMENT : VAR_DECLARATION STATEMENT
            | IF_CONDITION STATEMENT
            | WHILE_LOOP STATEMENT
            | FUNCTION_CALL STATEMENT
            | FUNCTION_RETURN
            ;

FUNCTION_RETURN : RETURN EXPR SEMICOLON          { fprintf(yyout,"RETURN TYPE : EXPRESSION \n");}
                |   RETURN STR SEMICOLON          { fprintf(yyout,"RETURN VALUE : %s \n",$2);}

FUNCTION_CALL : VAR EQUALS_ASSIGN VAR LEFT_PARENTHESIS PARAMETERS RIGHT_PARENTHESIS SEMICOLON
            {    fprintf(yyout,"FUNCTION CALL  \nReturn var name : %s \nFunction name : %s \n",$1,$3);                          }
            | INTEGER_DT VAR EQUALS_ASSIGN VAR LEFT_PARENTHESIS PARAMETERS RIGHT_PARENTHESIS SEMICOLON
            {   fprintf(yyout,"FUNCTION CALL  \nReturn Type : Integer \n Return var name : %s \nFunction name : %s \n",$2,$4);  }
            | CHARACTER_DT VAR EQUALS_ASSIGN VAR LEFT_PARENTHESIS PARAMETERS RIGHT_PARENTHESIS SEMICOLON
            {   fprintf(yyout,"FUNCTION CALL  \nReturn Type : Character \nReturn var name : %s \n Function name : %s \n",$2,$4);}
            | VAR LEFT_PARENTHESIS PARAMETERS RIGHT_PARENTHESIS SEMICOLON
            {   fprintf(yyout,"FUNCTION CALL \nFunction name : %s \n",$1);  }          
            | VAR EQUALS_ASSIGN VAR LEFT_PARENTHESIS RIGHT_PARENTHESIS SEMICOLON
            {    fprintf(yyout,"FUNCTION CALL  \nReturn var name : %s \nFunction name : %s \n",$1,$3);                          }  
            | INTEGER_DT VAR EQUALS_ASSIGN VAR LEFT_PARENTHESIS RIGHT_PARENTHESIS SEMICOLON
            {   fprintf(yyout,"FUNCTION CALL  \nReturn Type : Integer \n Return var name : %s \nFunction name : %s \n",$2,$4);  }
            | CHARACTER_DT VAR EQUALS_ASSIGN VAR LEFT_PARENTHESIS RIGHT_PARENTHESIS SEMICOLON
            {   fprintf(yyout,"FUNCTION CALL  \nReturn Type : Character \nReturn var name : %s \n Function name : %s \n",$2,$4);}
        



WHILE_LOOP :  WHILE LEFT_PARENTHESIS CONDITION RIGHT_PARENTHESIS OPEN_CURLY_BRACE STATEMENTS CLOSE_CURLY_BRACE 
            {    fprintf(yyout,"WHILE LOOP  \n");   }
            ;

IF_CONDITION :  IF LEFT_PARENTHESIS CONDITION RIGHT_PARENTHESIS OPEN_CURLY_BRACE STATEMENTS CLOSE_CURLY_BRACE ELSE_CONDITION STATEMENTS
            {    fprintf(yyout,"IF statement : \n");    }
            ;


ELSE_CONDITION : ELSE OPEN_CURLY_BRACE STATEMENTS CLOSE_CURLY_BRACE STATEMENTS     {    fprintf(yyout,"ELSE statement : \n");  }
            | ;

CONDITION : INT                         {   fprintf(yyout,"CONDITION :  %d != 0 \n",$1);                        }
            | VAR                       {   fprintf(yyout,"CONDITION :  %s != 0 \n",$1);                        }
            | INT INEQUALITY INT        {   fprintf(yyout,"First Operand : %d \nSecond Operand : %d \n",$1,$3); }
            | VAR INEQUALITY VAR        {   fprintf(yyout,"First Operand : %s \nSecond Operand : %s \n",$1,$3); } 
            ;

INEQUALITY : EQUAL                           { fprintf(yyout,"CONDITION : Equals\n");                   }
        | NOT_EQUAL                          { fprintf(yyout,"CONDITION : Not Equals\n");               }
        | GRTR_THAN                          { fprintf(yyout,"CONDITION : Greater than\n");             }
        | GRTR_THAN_EQUAL                    { fprintf(yyout,"CONDITION : Greater than equals\n");      }
        | LESS_THAN                          { fprintf(yyout,"CONDITION : Less than \n");               }
        | LESS_THAN_EQUAL                    { fprintf(yyout,"CONDITION : Less than equals\n");         } 
        ; 


PARAMETERS : EXPR                             {           fprintf(yyout,"Function Arguement : \n");                      }
        | EXPR EQUAL EXPR                     {           fprintf(yyout,"Function Arguement : \n Operator : ==\n");      }
        | EXPR COMMA PARAMETERS
        ;

%%

int yywrap()
{
	return 1;
}


int main(int argc , char *argv[])
{
    yyin = fopen(argv[1],"r");
    lex_out = fopen("Lexer.txt","w");
    yyout = fopen("Parser.txt","w");
    yyparse();

    fclose(yyin);
    fclose(lex_out);
    fclose(yyout);
    return 0;
}


