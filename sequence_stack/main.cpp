#include <stdio.h>
#include <stdlib.h>
#include "seqstack.h"

int main()
{
    SqStack S;
    InitStack(S);
    printf("InitStack finished\n");
    SElemType se;
    Push(S,'a');
    Push(S,'b');
    Push(S,'c');
    Push(S,'d');
    printf("all push finished now stack :\n");
    StackTraverse(S,Visit_Display_Char);
    Pop(S,se);
    printf("%c pop\n",se);
    Pop(S,se);
    printf("%c pop\n",se);
    return 0;
}