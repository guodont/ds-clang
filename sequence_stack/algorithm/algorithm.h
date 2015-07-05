#include "../seqstack.h"
#ifndef _ALGORITHM_H
#define _ALGORITHM_H

// #define OK 1
// #define ERROR 0
// #define TRUE 1
// #define FALSE 0

// #define STACK_INIT_SIZE 100		//存储空间初始分配量
// #define STACKINCREMENT 10		//存储空间分配增量

// typedef int SElemType;		//针对不同的要求选择不同类型 char 或 int
// typedef int Status;

typedef int OperandType;

void conversion();
Status BracketMatch(char *expr);
void LineEdit();
bool In(char c);
char Precede(char c1, char c2);
int Operate(int a, char oper, int b);
int EvaluateExpression();
void mov(char x, int n, char z);
void hanoi(int n, char x, char y, char z);
#endif