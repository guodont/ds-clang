#ifndef DULINKLIST_H_INCLUDE
#define DULINKLIST_H_INCLUDE

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
typedef struct DuLNode{
    ElemType data;
    struct DuLNode * prior; //前趋结点
    struct DuLNode * next;  //后继结点
}DuLNode, *DuLinkList;

void InitList_DuL(DuLinkList &L);       //implement
void DestroyList_DuL(DuLinkList &L);
void ClearList_DuL(DuLinkList &L);
void CreateList_DuL(DuLinkList &L,int n);
Status ListEmpty_DuL(DuLinkList L);
int ListLength_DuL(DuLinkList L);
Status GetElem_DuL(DuLinkList L,int i,ElemType &e);
int LocateElme_DuL(DuLinkList L,ElemType e,Status (*compare)(ElemType,ElemType));
Status Equal_DuL(ElemType e1,ElemType e2);
Status NextElem_DuL(DuLinkList L,ElemType cur_e,ElemType &next_e);
Status PriorElem_DuL(DuLinkList L,ElemType cur_e,ElemType &pre_e);
Status ListInsert_DuL(DuLinkList &L, int i, ElemType e);    //implement
Status ListDelete_DuL(DuLinkList &L, int i, ElemType &e);   //implement
void MergeList_DuL(DuLinkList &La, DuLinkList &Lb, DuLinkList &Lc);
void ListTraverse_DuL(DuLinkList &L, Status(*vist)(ElemType));
Status Display_DuL(ElemType);

#endif // DULINKLIST_H_INCLUDE