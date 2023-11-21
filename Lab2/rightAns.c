
#include "rdlab2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


past newParaDecl(past left, past right, past next);
past newBinaryOper(int oper, past left, past right);
past newCompoundStmt(past left, past right);
past newWhileStmt(past left, past right);
past newIfStmt(past if_cond, past left, past right);
past newReturnStmt(past left, past right);
past newDeclRefExp(char* name, past left, past right);
past newBreakStmt();
past newContinueStmt();
past astAddExp();
past astMulExp();
past astMulExp();
past astUnaryExp();
past astPrimaryExp();
past astLOrExp();
past astLAndExp();
past astEqExp();
past newAstNode();

past rd_stmt();


past rd_array_subscripts();
past rd_block();

<<<<<<< HEAD
// void Block();
// void BlockItems();
// void error_p(char *s);
// void Exp();
// void AddExp();

// // short indexList = -1;
// // TokenType cur_token_list[LEN_TOKEN_L];
// void advance()
// {
//     cur_token.token = yylex();
//     printf("cur_token.token: %d\n", cur_token.token);
//     printf("cur_token.attr.ivalue: %d\n", cur_token.attr.ivalue);
//     printf("cur_token.attr.fvalue: %f\n", cur_token.attr.fvalue);
//     printf("cur_token.attr.svalue: %s\n", cur_token.attr.svalue);
// }
// int main(int argc, char *argv[])
// {
//     advance();
//     // 开始识别Block，定义再sysy.y里面的
//     Block();
//     return 0;
// }
=======
void Block();
void BlockItems();
void error_p(char* s);
void Exp();
void AddExp();

#define __weak __attribute__((weak))

__weak past rd_block() {
    return NULL;
}

__weak past rd_array_subscripts() {
    return NULL;
}
__weak past newAstNode() {
    return malloc(sizeof(ast));
}

past newInt(int value){
    past t = newAstNode();
    t->ivalue = value;
    t->nodeType = INTEGER_LITERAL;
}
>>>>>>> f1d3d8ebfe53128e7e012d0796206d7bf0e8233f

// void advance()
// {
//     cur_token.token = yylex();
//     printf("cur_token.token: %d\n", cur_token.token);
//     // printf("cur_token.attr.ivalue: %d\n", cur_token.attr.ivalue);
//     // printf("cur_token.attr.fvalue: %f\n", cur_token.attr.fvalue);
// }

// void printTree(past node) {
//     if (node == NULL) return;
//     printf("nodeType: %d\n", node->nodeType);
//     printf("int value: %d\n", node->ivalue);
//     printf("float value: %f\n", node->fvalue);
//     if (node->nodeType == DECL_REF_EXPR) printf("string value: %s\n", node->svalue);
//     printf("----------------\n");
//     printTree(node->left);
//     printTree(node->right);
// }

// int main(int argc, char* argv[])
// {
//     advance();
//     // 开始识别Stmt，定义再sysy.y里面的
//     past node = rd_stmt();
//     //打印树,按照中缀遍历的顺序打印
//     if (node == NULL) printf("NULL\n");
//     else printTree(node);
//     return 0;
// }

past rd_call_paras()
{
    past l = astAddExp();
    past t = l;
    while (cur_token.token == Y_COMMA)
    {
        advance();
        past r = astAddExp();
        l->next = r;
        l = l->next;
    }
    return t;
}
/*
对于关系表达式，文法是：
RelExp: AddExp
   85       | AddExp Y_LESS RelExp
   86       | AddExp Y_GREAT RelExp
   87       | AddExp Y_LESSEQ RelExp
   88       | AddExp Y_GREATEQ RelExp
相当于是以AddExp开头，后面跟着0个或多个Y_LESS/Y_GREAT/Y_LESSEQ/Y_GREATEQ AddExp
*/
past rd_relexp()
{
    past l = astAddExp();
    while (cur_token.token == Y_LESS || cur_token.token == Y_LESSEQ || cur_token.token == Y_GREAT || cur_token.token == Y_GREATEQ)
    {
        int oper = cur_token.token;
        advance();//读入下一个token
        past r = astAddExp();
        l = newBinaryOper(oper, l, r);
    }
    return l;
}

past rd_stmt()
{
    past t;
    if (cur_token.token == Y_ID)    //如果是变量名，那就定位到LVal Y_ASSIGN Exp Y_SEMICOLON这个文法或者是Exp Y_SEMICOLON文法
    {
        // char* s = cur_token.attr.svalue;  //s为变量名的字符串
        char* sTemp = cur_token.attr.svalue;
        char* s = malloc(sizeof(sTemp));
        //把sTemp 复制到 s中
        strcpy(s, sTemp);
        advance();
        if (cur_token.token == Y_LSQUARE || cur_token.token == Y_ASSIGN) {//如果是有左方括号或者赋值符号，说明是第一个产生式
            rd_array_subscripts();//我认为这里写的有问题，应该要把数组[]参数放入ID的树里面，也就是改为
            // past param = rd_array_subscripts();
            if (cur_token.token != Y_ASSIGN) //校验下一个是不是赋值符号(=)，否则返回空
            {
                return NULL;
            }
            advance();//校验成功，移入下一个
            past l = astAddExp();//下一个是LL分析exp，产生exp子树,由于产生式Exp: AddExp,所以直接调用AddExp的生成树函数
            if (cur_token.token != Y_SEMICOLON)
            {
                return NULL;
            }
            advance();
            past r = newDeclRefExp(s, NULL, NULL);//相应的，建立ID的引用时
            // past r = newDeclRefExp(s,param,NULL);
            return newBinaryOper(Y_ASSIGN, r, l);
        }
        else {
            // t = astAddExp();
            if (cur_token.token == Y_LPAR) {
                advance();
                if (cur_token.token == Y_RPAR)
                {
                    advance();
                    t = newDeclRefExp(s, NULL, NULL);
                }
                else
                {
                    past l = rd_call_paras();        //有问题，参数的树没有加上去
                    if (cur_token.token != Y_RPAR)
                    {
                        t = NULL;
                    }
                    advance();
                    //我觉得应该改成：
                    //return newDeclRefExp(s,l,NULL);
                    t = newDeclRefExp(s, NULL, NULL);
                }
            }
            else {//为Lval的情况
                past l = newDeclRefExp(s, NULL, NULL);
                if (cur_token.token == Y_LPAR)
                {
                    past r = rd_array_subscripts();
                    //我觉得还应该加上把参数加入id的树里面
                    //l->left = r;
                }
                t = l;
            }

            while (cur_token.token == Y_MUL || cur_token.token == Y_DIV || cur_token.token == Y_MODULO)
            {
                int oper = cur_token.token;
                advance();
                past r = astUnaryExp();
                t = newBinaryOper(oper, t, r);
            }

            while (cur_token.token == Y_ADD || cur_token.token == Y_SUB)
            {
                int oper = cur_token.token;
                advance();
                past r = astMulExp();           //MulExp子树构造,它作为AddExp的右子树
                t = newBinaryOper(oper, t, r);
            }
            if (cur_token.token != Y_SEMICOLON)
            {
                return NULL;
            }
            advance();
            return t;
        }
    }
    else if (cur_token.token == Y_SEMICOLON)
    {
        advance();
        return NULL;
    }
    // else if ((t = astAddExp())),这里有问题，应该要放到末尾最后判断
    // {
    //     if (cur_token.token != Y_SEMICOLON)
    //     {
    //         return NULL;
    //     }
    //     advance();
    //     return t;
    // }
    else if (cur_token.token == Y_LBRACKET)
    {
        advance();
        past l = rd_block();
        if (cur_token.token != Y_RBRACKET)
        {
            return NULL;
        }
        advance();
        return l;
    }
    else if (cur_token.token == Y_WHILE)//while语句处理，分为condition 和body，condition为左子树，body为右子树
    {
        //cord = 1;   //不知道用来干嘛的，感觉可以去掉
        advance();
        if (cur_token.token != Y_LPAR)
        {
            return NULL;
        }
        advance();
        past l = astLOrExp();//循环条件，作为左子树
        if (cur_token.token != Y_RPAR)//需要右括号
        {
            return NULL;
        }
        advance();
        past r = rd_stmt();//右子树是循环体
        return newWhileStmt(l, r);
    }
    else if (cur_token.token == Y_IF)//if语句处理，分为condition 和两个body
    {
        advance();
        if (cur_token.token != Y_LPAR)
        {
            return NULL;
        }
        advance();
        past l1 = astLOrExp();  //condition部分
        if (cur_token.token != Y_RPAR)
        {
            return NULL;
        }
        advance();
        past l2 = rd_stmt();//为真执行的语句
        if (cur_token.token != Y_ELSE)
        {
            return newIfStmt(l1, l2, NULL);//无else情况
        }
        advance();
        past l3 = rd_stmt();//else执行的语句
        return newIfStmt(l1, l2, l3);
    }
    else if (cur_token.token == Y_BREAK)
    {
        advance();
        if (cur_token.token != Y_SEMICOLON)
        {
            return NULL;
        }
        advance();
        return newBreakStmt();
    }
    else if (cur_token.token == Y_CONTINUE)
    {
        advance();
        if (cur_token.token != Y_SEMICOLON)
        {
            return NULL;
        }
        advance();
        return newContinueStmt();
    }
    else if (cur_token.token == Y_RETURN)
    {
        advance();
        past l = astAddExp();//允许return后面不跟表达式，那么l就是NULL
        if (cur_token.token != Y_SEMICOLON)
        {
            return NULL;
        }
        advance();
        return newReturnStmt(l, NULL);
    }
    else if ((t = astAddExp()))
    {
        if (cur_token.token != Y_SEMICOLON)
        {
            return NULL;
        }
        advance();
        return t;
    }
    else
    {
        return NULL;
    }
}

past astLOrExp()
{
    past l = astLAndExp();  //左子树是与操作的抽象语法子树，因为它的优先级高于或操作
    while (cur_token.token == Y_OR)
    {
        advance();
        past r = astLAndExp();
        l = newBinaryOper(Y_OR, l, r);
    }
    return l;
}

past astLAndExp()
{
    past l = astEqExp(); //左子树是相等操作的抽象语法子树，因为它的优先级高于与操作
    while (cur_token.token == Y_AND)
    {
        advance();
        past r = astEqExp();
        l = newBinaryOper(Y_AND, l, r);
    }

    return l;
}

past astEqExp()
{
    past l = rd_relexp();   //左子树是关系操作的抽象语法子树，因为它的优先级高于相等操作
    while (cur_token.token == Y_EQ || cur_token.token == Y_NOTEQ)
    {
        int oper = cur_token.token;
        advance();
        past r = rd_relexp();
        l = newBinaryOper(oper, l, r);
    }

    return l;
}
/*
PrimaryExp子树构造
文法是：
    PrimaryExp: Y_LPAR Exp Y_RPAR
   66           | LVal
   67           | num_INT
   68           | num_FLOAT

*/
past astPrimaryExp()
{
    if (cur_token.token == Y_LPAR)
    {
        advance();
        past n1 = astAddExp();
        if (cur_token.token != Y_RPAR)
        {
            return NULL;
        }
        return n1;
    }
    else if (cur_token.token == Y_ID)
    {
        // char* s = cur_token.attr.svalue;
        char* sTemp = cur_token.attr.svalue;
        char* s = malloc(sizeof(sTemp));
        //把sTemp 复制到 s中
        strcpy(s, sTemp);
        past l = newDeclRefExp(s, NULL, NULL);
        advance();
        if (cur_token.token == Y_LPAR)
        {
            rd_array_subscripts();
        }
        return l;
    }
    else if (cur_token.token == num_INT)
    {
        past n2 = newInt(cur_token.attr.ivalue);
		advance();
		return n2;
    }
    else if (cur_token.token == num_FLOAT)
    {
        past n3 = newAstNode();
        n3->fvalue = cur_token.attr.fvalue;
        n3->nodeType = FLOATING_LITERAL;
        advance();
        return n3;
    }
    else
    {
        return NULL;
    }
}
/*
单目算术符号或者函数调用或者是数组元素
文法是：
    UnaryExp: PrimaryExp
   70         | Y_ID Y_LPAR Y_RPAR
   71         | Y_ID Y_LPAR CallParams Y_RPAR
   72         | Y_ADD UnaryExp
   73         | Y_SUB UnaryExp
   74         | Y_NOT UnaryExp
   相当于要么是变量名[]或者是变量名(参数)，要么是一个基本表达式（PrimaryExp）

*/
past astUnaryExp()
{
    if (cur_token.token == Y_ID) {//以ID开头的token有两个选择，一个是PrimaryExp里面的Lval，另一个就是unaryexp里面的函数调用（这种情况ID后跟着()）
        char* sTemp = cur_token.attr.svalue;
        char* s = malloc(sizeof(sTemp));
        //把sTemp 复制到 s中
        strcpy(s, sTemp);
        advance();
        if (cur_token.token == Y_LPAR) {
            advance();
            if (cur_token.token == Y_RPAR)
            {
                advance();
                return newDeclRefExp(s, NULL, NULL);
            }
            else
            {
                past l = rd_call_paras();        //有问题，参数的树没有加上去
                if (cur_token.token != Y_RPAR)
                {
                    return NULL;
                }
                advance();
                //我觉得应该改成：
                //return newDeclRefExp(s,l,NULL);
                return newDeclRefExp(s, NULL, NULL);
            }
        }
        else {//为Lval的情况
            past l = newDeclRefExp(s, NULL, NULL);
            if (cur_token.token == Y_LPAR)
            {
                past r = rd_array_subscripts();
                //我觉得还应该加上把参数加入id的树里面
                //l->left = r;
            }
            return l;
        }
    }
    //下面是单目运算的+、-、~
    else if (cur_token.token == Y_ADD)
    {
        advance();
        past l = astUnaryExp();
        return newBinaryOper(Y_ADD, NULL, l);
    }
    else if (cur_token.token == Y_SUB)
    {
        advance();
        past l = astUnaryExp();
        return newBinaryOper(Y_SUB, NULL, l);
    }
    else if (cur_token.token == Y_NOT)
    {
        advance();
        past l = astUnaryExp();
        return newBinaryOper(Y_NOT, NULL, l);
    }
    else
    {
        return astPrimaryExp();
    }
}
/*
乘法、除法表达式子树构造
文法是：
MulExp: UnaryExp
        | MulExp Y_MUL UnaryExp
        | MulExp Y_DIV UnaryExp
        | MulExp Y_MODULO UnaryExp
也就是以UnaryExp开头，后面跟着0个或多个Y_MUL/Y_DIV/Y_MODULO UnaryExp
与AddExp的文法类似
*/
past astMulExp()
{
    past l = astUnaryExp();
    while (cur_token.token == Y_MUL || cur_token.token == Y_DIV || cur_token.token == Y_MODULO)
    {
        int oper = cur_token.token;
        advance();
        past r = astUnaryExp();
        l = newBinaryOper(oper, l, r);
    }
    return l;
}
/*
AddExp子树构造，因为题目的sysy文法的Exp产生式就是AddExp，所以调用的exp函数就是AddExp
*/
past astAddExp()
{
    /*
    文法是：
    AddExp: MulExp
            | AddExp Y_ADD MulExp
            | AddExp Y_SUB MulExp
    也就是以MulExp开头，后面跟着0个或多个Y_ADD/Y_SUB MulExp
    这样可以实现乘法除法的优先级高于加法减法
    */
    past l = astMulExp();//MulExp子树构造,它作为AddExp的左子树
    while (cur_token.token == Y_ADD || cur_token.token == Y_SUB)
    {
        int oper = cur_token.token;
        advance();
        past r = astMulExp();           //MulExp子树构造,它作为AddExp的右子树
        l = newBinaryOper(oper, l, r);
    }
    return l;
}

past newWhileStmt(past left, past right)
{
    past node = newAstNode();
    node->nodeType = WHILE_STMT;
    node->left = left;//循环条件是左子树
    node->right = right;//循环体是右子树
    return node;
}

past newIfStmt(past if_cond, past left, past right)
{
    past node = newAstNode();
    node->nodeType = IF_STMT;
    node->if_cond = if_cond;//condition单独放在if_cond里面
    node->left = left;//为真执行的语句
    node->right = right;//为假执行的语句
    return node;
}

past newCompoundStmt(past left, past right)
{
    past node = newAstNode();
    node->nodeType = COMPOUND_STMT;
    node->left = left;
    node->right = right;
    return node;
}
/*
根据运算符号建立树
*/
past newBinaryOper(int oper, past left, past right)
{
    past node = newAstNode();
    node->nodeType = BINARY_OPERATOR;
    node->ivalue = oper;        //把操作的具体类别，也就是TokenType写在ivalue里面
    node->left = left;
    node->right = right;
    return node;
}

past newParaDecl(past left, past right, past next)
{
    past node = newAstNode();
    node->nodeType = PARM_DECL;
    node->left = left;
    node->right = right;
    return node;
}
past newBreakStmt()
{
    past node = newAstNode();
    node->nodeType = BREAK_STMT;//此节点只需要塞入类型就行了，因为是break语句
    return node;
}

past newContinueStmt()
{
    past node = newAstNode();
    node->nodeType = CONTINUE_STMT;//和break是一样的，只需要塞入类型就行了
    return node;
}

past newReturnStmt(past left, past right)
{
    past node = newAstNode();
    node->nodeType = RETURN_STMT;
    node->left = left;  //左子树放置返回值
    node->right = right;
    return node;
}

past newDeclRefExp(char* name, past left, past right)
{
    past node = newAstNode();
    node->nodeType = DECL_REF_EXPR;
    node->svalue = name;
    node->left = left;
    node->right = right;
    return node;
}
