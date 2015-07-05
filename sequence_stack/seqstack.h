#ifndef SQ_STACK_H_INCLUDE
#define SQ_STACK_H_INCLUDE

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

#define STACK_INIT_SIZE 100		//存储空间初始分配量
#define STACKINCREMENT 10		//存储空间分配增量

typedef char SElemType;
typedef int Status;

typedef struct {
	SElemType *base;	//在栈构造之前和销毁之后，base的值为NULL
	SElemType *top;		//栈顶指针
	int stacksize;		//当前已分配的储存空间，以元素为单位
}SqStack;

Status InitStack(SqStack &S);               //初始化函数
Status DestroyStack(SqStack &S);            //删除栈
Status ClearStack(SqStack &S);              //清空栈
Status StackEmpty(SqStack S);               //栈是否为空
int StackLength(SqStack S);                 //栈长度
SElemType GetTop(SqStack S);                //获得栈顶元素
Status Push(SqStack &S, SElemType e);       //入栈
Status Pop(SqStack &S, SElemType &e);       //出栈
Status Visit_Display_Char(SElemType e);     //打印字符
Status Visit_Display_Int(SElemType e);      //打印整数
Status StackTraverse(SqStack S, Status(*visit)(SElemType)); //遍历

#endif  //SQ_STACK_H_INCLUDE