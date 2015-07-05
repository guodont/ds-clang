#include <stdio.h>
#include <stdlib.h>
#include "dulinklist.h"

void InitList_DuL(DuLinkList &L)
{
    //构造空的双向链表
    L = (struct DuLNode *)malloc(sizeof(DuLNode));
    L->next = NULL;
    L->prior = NULL;
}//InitList_Dul

Status GetElem_DuL(DuLinkList &L, int i,ElemType &e)
{
    //L为带头结点的双链表的头指针
    //当第i个元素存在时，其值赋给e并返回OK，否则返回ERROR
    DuLNode *p = L->next;
    int j =1;
    while(p && j<i){
        p = p->next;
        ++j;
    }
    if(!p || j>i) return ERROR;
    e = p->data;
    return OK;
}//GetElem_Dul

DuLNode * GetElemP_DuL(DuLinkList &L, int i)
{
    //L为带头结点的双链表的头指针
    //当第i个元素存在时，其结点返回
    DuLNode *p = L->next;
    int j =1;
    while(p && j<i){
        p = p->next;
        ++j;
    }
    if(!p || j>i) return NULL;
    return p;
}//GetElem_Dul

Status ListInsert_DuL(DuLinkList &L, int i, ElemType e)
{
    //在L中第i个位置之前插入e
    DuLNode *p = L;
    int j = 0;
    while(p && j<i-1){
        p = p->next;
        ++j;
    }
    if(!p || j>i-1) return ERROR;
    DuLNode * s = (DuLinkList)malloc(sizeof(DuLNode));
    s->data = e;
    s->prior = p->prior;
    p->prior->next = s;
    s->next = p;
    p->prior = s;
    return OK;
}//ListInsert_DuL

Status ListDelete_DuL(DuLinkList &L,int i ,ElemType &e)
{
    //删除L中的第i个元素
    DuLNode *p = L;
    int j = 0;
    while(p->next && j<i-1){
        p = p->next;
        ++j;
    }
    if(!(p->next) || j>i-1) return ERROR;
    e = p->data;
    p->prior->next = p->next;
    p->next->prior = p->prior;
    free(p);
    return OK;
}//ListDelete_DuL

void CreateList_DuL(DuLinkList &L, int n)
{
    //逆序输入n个元素的值，建立带表头结点的双链线性表L
    int i;
    DuLNode *p;
    L = (DuLinkList)malloc(sizeof(DuLNode));
    L->next = NULL;
    L->prior = NULL;
    printf("Please input %d numbers for the DuLinkList\n",n);
    for(i=n; i>0; i--){
        p = (DuLinkList)malloc(sizeof(DuLNode));
        scanf("%d", &p->data);
        p->next = L->next;
        L->next = p;
        p->prior = L;
    }
}// CreateList_DuL

void ListTraverse_DuL(DuLinkList &L, Status(*visit)(ElemType))
{
    //遍历L中所有元素
    DuLNode *p = L->next;
    while(p){
        visit(p->data);
        p = p->next;
    }
    printf("\n");
}// ListTraverse_DuL

Status Display_DuL(ElemType e)
{
    //输出p的值
    printf("%d ",e);
    return OK;
}// Display_DuL