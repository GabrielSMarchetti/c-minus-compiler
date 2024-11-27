%option noyywrap
%{
#include "parser.tab.h"  
#include <stdio.h>
#include <stdlib.h>
#include "globals.h"

extern int cur_line_number;

%}

letter          [a-zA-Z]
digit           [0-9]
identifier      {letter}+
number          {digit}+

%%
"if"            { return IF; }
"else"          { return ELSE; }
"while"         { return WHILE; }
"return"        { return RETURN; }
"int"           { return INT; }
"void"          { return VOID; }
"+"             { return PLUS; }
"-"             { return MINUS; }
"*"             { return MULT; }
"/"             { return DIV; }
"="             { return ASSIGN; }
"=="            { return EQ; }
"<"             { return LT; }
"<="            { return LE; }
">"             { return GT; }
">="            { return GE; }
"!="            { return NEQ; }
"("             { return LPAREN; }
")"             { return RPAREN; }
"{"             { return LBRACE; }
"}"             { return RBRACE; }
";"             { return SEMI; }
","             { return COMMA; }
"["             { return LSBRACK; }
"]"             { return RSBRACK; }

{identifier}    { return ID; }
{number}        { return NUMBER; }

"//".*          {}

"/*"            {
		    char c;
		    while (1) {
			    c = input();
			    if (c == '*') { 
			        c = input();
			        if (c == '/') break;
			    } else if (c == '\n') {
			        cur_line_number++;
			    } else if (c == 0) { 
			        return ERROR;
			    }
		    }
		}

[\n\r]             { cur_line_number++; }


[ \t]+          {}


.               { return ERROR;}

%%

int get_token(void) {
    return yylex();  // Chama o lexer
}

