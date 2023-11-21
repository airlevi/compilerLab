%{
#include <stdio.h>
#include <stdlib.h>
#include "rdlab2.h"	
void norProc(enum yytokentype type,char * content);
TokenType cur_token;
%}
white 			 [\t\n\x20]+
Y_ID 			 [A-Za-z_][A-Za-z0-9_]*
num_INT_HEX		 (0[xX][a-fA-F0-9]+)
num_INT			 (-?[0-9]+)
num_FLOAT 		 ([0-9]+\.[0-9]*)
%%
"int"			{cur_token.token = 1 ;return Y_INT;}
"float"			{cur_token.token = 1 ;return Y_FLOAT;}
"const"			{cur_token.token = 1 ;return Y_CONST;}
"void"			{cur_token.token = 1 ;return Y_VOID;}
"if"			{cur_token.token = 1 ;return Y_IF;}
"else"			{cur_token.token = 1 ;return Y_ELSE;}
"while"			{cur_token.token = 1 ;return Y_WHILE;}
"continue"		{cur_token.token = 1 ;return Y_CONTINUE;}
"return"		{cur_token.token = 1 ;return Y_RETURN;}
"break"			{cur_token.token = 1 ;return Y_BREAK;}

"+"				{cur_token.token = 2 ;return Y_ADD;}
"-" 			{cur_token.token = 2 ;return Y_SUB;}
"*"				{cur_token.token = 2 ;return Y_MUL;}
"/"				{cur_token.token = 2 ;return Y_DIV;}
"%"				{cur_token.token = 2 ;return Y_MODULO;}
"<="			{cur_token.token = 2 ;return Y_LESSEQ;}
"<"				{cur_token.token = 2 ;return Y_LESS;}
">"				{cur_token.token = 2 ;return Y_GREAT;}
">="			{cur_token.token = 2 ;return Y_GREATEQ;}
"!="			{cur_token.token = 2 ;return Y_NOTEQ;}
"=="			{cur_token.token = 2 ;return Y_EQ;}
"!"				{cur_token.token = 2 ;return Y_NOT;}
"&&"			{cur_token.token = 2 ;return Y_AND;}
"||"			{cur_token.token = 2 ;return Y_OR;}
"="				{cur_token.token = 2 ;return Y_ASSIGN;}

"("				{cur_token.token = 3;return Y_LPAR;}
")"				{cur_token.token = 3;return Y_RPAR;}
";"				{cur_token.token = 3;return Y_SEMICOLON;}
","				{cur_token.token = 3;return Y_COMMA;}
"["				{cur_token.token = 3;return Y_LSQUARE;}
"]"				{cur_token.token = 3;return Y_RSQUARE;}
"}"				{cur_token.token = 3;return Y_RBRACKET;}
"{"				{cur_token.token = 3;return Y_LBRACKET;}

{white} 		{/*do nothing*/}
{num_INT_HEX}	{cur_token.attr.ivalue = (int)strtol(yytext,NULL,16);return num_INT;}
{num_INT}		{cur_token.attr.ivalue = atoi(yytext);return num_INT;}
{num_FLOAT}   	{cur_token.attr.fvalue = atof(yytext);return num_FLOAT;}
{Y_ID}			{cur_token.attr.svalue = yytext;return Y_ID;}
%%




int yywrap() { 
    return 1;
}