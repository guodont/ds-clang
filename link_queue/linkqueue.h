#ifndef _LINKQUEUE_H_
#define _LINKQUEUE_H_

#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0

typedef int QElemType;
typedef int Status;

typedef struct QNode{
	QElemType		data;
	struct QNode	*next;
}QNode, *QueuePtr;

typedef struct{
	QueuePtr front;	
	QueuePtr rear;
}LinkQueue;

Status InitQueue(LinkQueue &Q);
Status DestroyQueue(LinkQueue &Q);
Status ClearQueue(LinkQueue &Q);
Status QueueEmpty(LinkQueue Q);
int QueueLength(LinkQueue Q);
SElemType GetHead(LinkQueue Q);
Status EnQueue(LinkQueue &Q, QElemType e);
Status DeQueue(LinkQueue &Q, QElemType &e);
Status QueueTraverse(LinkQueue Q, Status(*visit)(QElemType));
Status Visit_Display_Int_LQ(QElemType e);

#endif