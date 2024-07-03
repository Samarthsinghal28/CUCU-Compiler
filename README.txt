Name : Samarth Singhal
Entry No : 2022CSB1118

*****************************************

Files:

*****************************************

1)cucu.l
2) cucu.y
3) sample.cu
4) sample1.cu
5) Lexer.txt
6) Parser.txt
7) README.txt

To run the program :

1)flex cucu.l
2)bison -d cucu.y
3)gcc cucu.tab.c lex.yy.c -lfl -o cucu
4)./cucu input_file.cu


LANGUAGE DESCRIPTION :
*****************************************

1)Identifier is a sequence of letters, digits and an underscore symbol starting with a letter!

2)Variable Declarations:

Data Type allowed :
int , char * 

Example:
    int i ;
    int i = 10 ;
    char *s;
    char *s = "string" ;

3)Function Declaration :

Data_Type Funtion_name( argument_list);

Example:
    int func(char *s,int len);

4)Argument list :

Sequence of comma-separated "type identifier".

Example:
    char* s, int from, int to

5)Function Defination :

Data_Type Funtion_name( argument_list){
    Statements;
}
 Example :
    int func(int a,int b){
        int c =a+b;
        return c;
    }

6)Comments :

Comments are enclosed in /* and */

7)Expression :

o Expressions are limited to Boolean and arithmetic expressions
o Boolean expressions are used as tests in control statements (if and while)
o Relational operators are: == (equals) and != (not equals)
o Arithmetic operators are: +, - and *, /
o Parenthesis () can be used for grouping terms
o Precedence Order (High to Low)
    i)Parenthesis
    ii)* and /
    iii)+ and -
    iv)== and !=
    v)Assignment (=)

Example :
    i = 2 + 3;

8)Control Statements :

i)If statement:

    if(expression){
        ..
    }
    else{
        ..
    }

    IF statement should have the statements written in curly braces after condition. 
    IF statement need not be necessarily followed by ELSE statement.
    Nested IFs are also allowed.

ii)While Loop:

    while(expression){
        ..
    }


9)Function Call

Example:
    int x;
    x = func(i);


*****************************************

ASSUMPTIONS :
1) As the function is returning INT/CHAR it cannot be called without assigning its value to a variable.
2) Function without any arguments can also be there.
3) A function will have atleast one statement.
4) Boolean expressions can also be passed as a function parameter.
5) Funtion Call cannot be done globally.
6) A function always returns some value.








