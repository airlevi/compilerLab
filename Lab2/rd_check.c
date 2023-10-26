#include "token.h"
#include <stdio.h>
#include <stdlib.h>
#define LEN_TOKEN_L 10
void Block();
void BlockItems();
void error_p(char *s);
extern char *yytext;
// short indexList = -1;
// TokenType cur_token_list[LEN_TOKEN_L];
void advance() 
{
    cur_token.token = yylex();
    printf("cur_token.token: %d\n", cur_token.token);
    printf("cur_token.attr.ivalue: %d\n", cur_token.attr.ivalue);
    printf("cur_token.attr.fvalue: %f\n", cur_token.attr.fvalue);
    printf("cur_token.attr.svalue: %s\n", cur_token.attr.svalue);
}
int main(int argc, char *argv[])
{
    advance();
    // 开始识别Block，定义再sysy.y里面的
    Block();
    return 0;
}
void Block()
{
    if(cur_token.token == Y_LBRACKET)
    {
        advance();
        if(cur_token.token == Y_RBRACKET)
        {
            return;
        }else{
            BlockItems();
        }
        return;
    }
    error_p("Block err 1 Y_LBRACKET");
}

void rd_call_paras(){
    Exp();
    if(cur_token.token == Y_COMMA){
        advance();
        rd_call_paras();
    }
    return;
}

void rd_array_subscripts(){
    if(cur_token.token != Y_LSQUARE) error_p("rd_array_subscripts err 1 Y_LSQUARE");
    advance();
    Exp();
    if(cur_token.token != Y_RSQUARE) error_p("rd_array_subscripts err 2 Y_RSQUARE");
    advance();
    if(cur_token.token == Y_LSQUARE){
        rd_array_subscripts();
    }
    return;
}

void RelExp(){
    AddExp();
    if(cur_token.token == Y_LESS || cur_token.token == Y_LESSEQ || cur_token.token == Y_GREAT || cur_token.token == Y_GREATEQ){
        advance();
        RelExp();
    }
    return;
}

void EqExp(){
    RelExp();
    if(cur_token.token == Y_EQ || cur_token.token == Y_NOTEQ){
        advance();
        EqExp();
    }
    return;
}

void LAndExp(){
    EqExp();
    if(cur_token.token == Y_AND){
        advance();
        LAndExp();
    }
    return;
}

void LOrExp(){
    LAndExp();
    if(cur_token.token == Y_OR){
        advance();
        LOrExp();
    }
    return;
}

void UnaryExp(){
    if(cur_token.token == Y_ID){
        advance();
        if(cur_token.token != Y_LPAR) error_p("UnaryExp 2 3 Y_LPAR");
        advance();
        if(cur_token.token != Y_RPAR){
            rd_call_paras();
        }else{
            advance();
        }
        return;
    }
    else if(cur_token.token == Y_ADD || cur_token.token == Y_SUB || cur_token.token == Y_NOT){
        advance();
        UnaryExp();
        return;
    }
}

void MulExp(){
    UnaryExp();
    while(cur_token.token == Y_MUL || cur_token.token == Y_DIV || cur_token.token == Y_MODULO){
        advance();
        UnaryExp();
    }
    return;
}

void AddExp(){
    MulExp();
    while(cur_token.token == Y_ADD || cur_token.token == Y_SUB){
        advance();
        AddExp();
    }
    return;
}

void Exp(){
    AddExp();
}

void Stmt(){
    //LVal Y_ASSIGN Exp Y_SEMICOLON
    if(cur_token.token == Y_ID){
        advance();
        if(cur_token.token == Y_ASSIGN){
            advance();
            Exp();
        }else{//LVal :Y_ID ArraySubscripts
            rd_array_subscripts();
            if(cur_token.token == Y_ASSIGN){
                advance();
                Exp();
            }else{
                error_p("Stmt err 1 Y_ASSIGN");
                return;
            }
        }
        if(cur_token.token != Y_SEMICOLON){
            error_p("Stmt err 1 Y_SEMICOLON");
            return;
        }
        advance();
        return;
    }
    //Y_SEMICOLON
    else if(cur_token.token == Y_SEMICOLON){
        advance();
        return;
    }
    //Block
    else if(cur_token.token == Y_LBRACKET){
        advance();
        Block();
        return;
    }
    else if(cur_token.token == Y_WHILE){
        advance();
        if(cur_token.token != Y_LPAR) error_p("Stmt err 5 Y_LPAR");
        advance();
        LOrExp();
        if(cur_token.token != Y_RPAR) error_p("Stmt err 5 Y_RPAR");
        advance();
        Stmt();
        return;
    }
    else if(cur_token.token == Y_IF){
        advance();
        if(cur_token.token != Y_LPAR) error_p("Stmt err 6 Y_LPAR");
        advance();
        LOrExp();
        if(cur_token.token != Y_RPAR) error_p("Stmt err 6 Y_RPAR");
        advance();
        if(cur_token.token != Y_ELSE){
            Stmt();
        }else{
            advance();
        }
            return;
    }
    else if(cur_token.token == Y_BREAK){
        advance();
        if(cur_token.token != Y_SEMICOLON) error_p("Stmt err 7 Y_SEMICOLON");
        advance();
        return;
    }
    else if(cur_token.token == Y_CONTINUE){
        advance();
        if(cur_token.token != Y_SEMICOLON) error_p("Stmt err 8 Y_SEMICOLON");
        advance();
        return;
    }
    else if(cur_token.token == Y_RETURN){
        advance();
        if(cur_token.token != Y_SEMICOLON) error_p("Stmt err 9 Y_SEMICOLON");
        advance();
        return;
    }
    else{
        Exp();
        advance();
        if(cur_token.token != Y_SEMICOLON) error_p("Stmt err 3 Y_SEMICOLON");
        advance();
        return;
    }
}
void BlockItems()
{
   Stmt();
}
void error_p(char *s)
{
    printf("error: %s\n", s);
    exit(0);
}