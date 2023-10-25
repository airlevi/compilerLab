#include "token.h"
#include <stdio.h>
#include <stdlib.h>
#define LEN_TOKEN_L 10
void Block();
void BlockItems();
void error_p(char* s);
extern char* yytext;
short indexList;
TokenType cur_token_list[LEN_TOKEN_L];
void advance()//一次读满cur_token_list,便于回溯
{
    for(int i = 0; i < LEN_TOKEN_L; i++)
    {
        cur_token_list[i].token = yylex();
        cur_token_list[i].attr.svalue = cur_token.attr.svalue;
        cur_token_list[i].attr.ivalue = cur_token.attr.ivalue;
        cur_token_list[i].attr.fvalue = cur_token.attr.fvalue;
    }
    indexList = 0;
}
int main(int argc, char* argv[]) {
    //开始识别Block，定义再sysy.y里面的
    advance();
    Block();
    return 0;
}
void Block(){
    //如果indexList<0,说明是有错
    if(indexList < 0)
        error_p("Block: indexList < 0");
    //如果indexList<LEN_TOKEN_L,说明还有单词没读完,不需要advance
    if(indexList >= LEN_TOKEN_L)
        advance();
    //读取判断是否为{,如果不是,回溯上去
    if(cur_token_list[indexList].token != Y_LBRACKET)
        {
            indexList--;
            return;
        }
    indexList++;//读取下一个单词
    BlockItems();
        
}
void BlockItems(){
    //如果indexList<LEN_TOKEN_L,说明还有单词没读完,不需要advance
    if(indexList >= LEN_TOKEN_L)
        advance();
}
void error_p(char *s){
    printf("error: %s\n", s);
    exit(0);
}