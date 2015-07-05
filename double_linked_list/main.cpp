#include<stdlib.h>
#include<stdio.h>
#include "dulinklist.h"

int main()
{
    DuLinkList La;
    InitList_DuL(La);
    ElemType e;
    printf("Assigment for La:\n");
    CreateList_DuL(La,5);
    printf("The elements in La:\n");
    ListTraverse_DuL(La,Display_DuL);
    ListDelete_DuL(La, 2, e);
    printf("We have deleted the 2th element in La:\n");
    ListTraverse_DuL(La,Display_DuL);
    ListInsert_DuL(La, 2, e);
    printf("Put the element deleted in the proier statement in 2th:\n");
    ListTraverse_DuL(La,Display_DuL);
}