%{
#include <stdio.h>
#include <stdlib.h>
#include "token.h"	
void norProc(enum yytokentype type,char * content);
_YYLVAL yylval;
%}
white 			 [\t\n\x20]+
Y_ID 			 [A-Za-z_][A-Za-z0-9_]*
num_INT_HEX		 (0[xX][a-fA-F0-9]+)
num_INT			 (-?[0-9]+)
num_FLOAT 		 ([0-9]+\.[0-9]*)
%%
"int"			{yylval.token = 1 ;return Y_INT;}
"float"			{yylval.token = 1 ;return Y_FLOAT;}
"const"			{yylval.token = 1 ;return Y_CONST;}
"void"			{yylval.token = 1 ;return Y_VOID;}
"if"			{yylval.token = 1 ;return Y_IF;}
"else"			{yylval.token = 1 ;return Y_ELSE;}
"while"			{yylval.token = 1 ;return Y_WHILE;}
"continue"		{yylval.token = 1 ;return Y_CONTINUE;}
"return"		{yylval.token = 1 ;return Y_RETURN;}
"break"			{yylval.token = 1 ;return Y_BREAK;}

"+"				{yylval.token = 2 ;return Y_ADD;}
"-" 			{yylval.token = 2 ;return Y_SUB;}
"*"				{yylval.token = 2 ;return Y_MUL;}
"/"				{yylval.token = 2 ;return Y_DIV;}
"%"				{yylval.token = 2 ;return Y_MODULO;}
"<="			{yylval.token = 2 ;return Y_LESSEQ;}
"<"				{yylval.token = 2 ;return Y_LESS;}
">"				{yylval.token = 2 ;return Y_GREAT;}
">="			{yylval.token = 2 ;return Y_GREATEQ;}
"!="			{yylval.token = 2 ;return Y_NOTEQ;}
"=="			{yylval.token = 2 ;return Y_EQ;}
"!"				{yylval.token = 2 ;return Y_NOT;}
"&&"			{yylval.token = 2 ;return Y_AND;}
"||"			{yylval.token = 2 ;return Y_OR;}
"="				{yylval.token = 2 ;return Y_ASSIGN;}

"("				{yylval.token = 3;return Y_LPAR;}
")"				{yylval.token = 3;return Y_RPAR;}
";"				{yylval.token = 3;return Y_SEMICOLON;}
","				{yylval.token = 3;return Y_COMMA;}
"["				{yylval.token = 3;return Y_LSQUARE;}
"]"				{yylval.token = 3;return Y_RSQUARE;}
"}"				{yylval.token = 3;return Y_RBRACKET;}
"{"				{yylval.token = 3;return Y_LBRACKET;}

{white} 		{/*do nothing*/}
{num_INT_HEX}	{yylval.int_value = (int)strtol(yytext,NULL,16);return num_INT;}
{num_INT}		{yylval.int_value = atoi(yytext);return num_INT;}
{num_FLOAT}   	{yylval.float_value = atof(yytext);return num_FLOAT;}
{Y_ID}			{yylval.id_name = yytext;return Y_ID;}
%%
void norProc(enum yytokentype type,char * content){
	printf("<%d, %s>\n",type,content);
}

int main(int argc, char* argv[]) {
    enum yytokentype token;
    while(token = yylex()){
        char buf[100] = {0};
        if(token==num_INT) {sprintf(buf,"%d",yylval.int_value);norProc(token,buf);}
        else if(token==num_FLOAT) {sprintf(buf,"%f",yylval.float_value);norProc(token,buf);}
        else if(token==Y_ID) {norProc(token,yylval.id_name);}
        else {
            switch (yylval.token){
                case 1:
                    norProc(token,"KEYWORD");
                    break;
                case 2:
                    norProc(token,"OPERATOR");
                    break;
                case 3:
                    norProc(token,"SYMBOL");
            }
        }
    }
    return 0;
}

int yywrap() { 
    return 1;
}