#ifndef LINKLIST_H_INCLUDE
#define LINKLIST_H_INCLUDE

#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

typedef int ElemType;
typedef int Status;
typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode, *LinkList;

void InitList_L(LinkList &L);
void DestroyList_L(LinkList &L);
void ClearList_L(LinkList &L);
void CreateList_L(LinkList &L,int n);
Status ListEmpty_L(LinkList L);
int ListLength_L(LinkList L);
Status GetElem_L(LinkList L,int i,ElemType &e);
int LocateElme_L(LinkList L,ElemType e,Status (*compare)(ElemType,ElemType));
Status Equal_L(ElemType e1,ElemType e2);
Status NextElem_L(LinkList L,ElemType cur_e,ElemType &next_e);
Status PriorElem_L(LinkList L,ElemType cur_e,ElemType &pre_e);
Status ListInsert_L(LinkList &L, int i, ElemType e);
Status ListDelete_L(LinkList &L, int i, ElemType &e);
void MergeList_L(LinkList &La, LinkList &Lb, LinkList &Lc);
void ListTraverse_L(LinkList &L, Status(*vist)(ElemType));
Status Display_L(ElemType);

#endif // LINKLIST_H_INCLUDE