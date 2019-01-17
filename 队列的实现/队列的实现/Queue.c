#include "Queue.h"

typedef int QUDataType;
typedef struct QueueNode
{
      struct QueueNode* _next;
      QUDataType _data;
}QueueNode;
typedef struct Queue
{
QueueNode* _head; // ¶ÓÍ·
QueueNode* _tail; // ¶ÓÎ²
}Queue;
void QueueInit(Queue* pq)
{
      assert(pq);
      pq->_head  = pq->_tail = NULL;
}

void QueueDestory(Queue* pq)
{
    assert(pq);
	QueueNode* cur = pq->_head ;
	while(cur)
	{
	  QueueNode* next = cur->_next ;
      free(cur);
	  cur = next;
	}
	pq->_head = pq->_tail = NULL;
}

QUDataType QueueFront(Queue* pq)
{
     assert(pq);
	 return pq->_head ->_data ;
}

void QueuePush(Queue* pq, QUDataType x)
{
    assert(pq);
    QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode));
    newnode->_data = x;
	newnode->_next = NULL;
	if(pq->_tail == NULL)
	{
	   pq->_tail = pq->_head  = newnode;
	}
	else
	{
	    pq->_tail ->_next = newnode;
		pq->_tail = newnode;
	}
}
void QueuePop(Queue* pq)
{
    assert(pq);
	QueueNode*newnode = pq->_head ->_next ;
	free(pq->_head );
	pq->_head  = newnode;
	if(newnode == NULL)
	{
	    pq->_tail = NULL;
	}
}
int QueueSize(Queue* pq)
{
    int Size = 0;
	QueueNode* cur = pq->_head ;
	while(cur != NULL)
	{
	     ++Size;
		 cur = cur->_next ;
	}
	return Size;
}
int QueueEmpty(Queue* pq)
{
	return pq->_head = NULL ? 0 : 1;
}
//QueueNode* BuyQueueNode(QUDataType x);
//QUDataType QueueFront(Queue* pq);
//QUDataType QueueBack(Queue* pq);
void QueuePrint(Queue* pq)
{
	int a[100] = {0};
   for(int i = 0; i < pq->_tail ; ++i)
   {
       printf("%d ",a[i]);
   }
   printf("\n");
}


void TestQueue()
{
	Queue st;
	QueueInit(&st);

    QueuePush(&st,1);
	QueuePush(&st,2);
	QueuePush(&st,3);
	QueuePush(&st,4);
	QueuePush(&st,5);

	/*while(QueueEmpty(&st) != 0)
	{
	   printf("%d ",QueueTop(&st));
	   QueuePop(&st);
	   printf("\n");
	}*/
	
	QueuePrint(&st);
   return 0;
}