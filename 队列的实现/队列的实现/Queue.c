#include "Queue.h"

void QueueInit(Queue* pq)
{
      assert(pq);
      pq->_head  = pq->_tail = NULL;
}

void QueueDestory(Queue* pq)
{
	struct QueueNode* cur = pq->_head ;
    assert(pq);
	while(cur)
	{
	  struct QueueNode* next = cur->_next ;
      free(cur);
	  cur = next;
	}
	pq->_head = pq->_tail = NULL;
}

QueueNode* BuyQueueNode(QUDataType x)
{
   QueueNode*  node = (QueueNode*)malloc(sizeof(QueueNode));
   node->_data = x;
   node->_next = NULL;
   return node;
}
void QueuePush(Queue* pq, QUDataType x)
{
    assert(pq);
    /*QueueNode* newnode = (QueueNode*)malloc(sizeof(QueueNode)); 一样的代码，上面就是自己定义了一个
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
	}*/   
    if(pq->_head  == NULL)
	{
	   pq->_head  = pq->_tail = BuyQueueNode(x);
	}
	else
	{
	    pq->_tail ->_next = BuyQueueNode(x);
		pq->_tail = pq->_tail ->_next ;
	}

}

void QueuePop(Queue* pq)
{
    assert(pq);
	if(pq->_head )
	{
	    QueueNode* next = pq->_head ->_next ;
		free(pq->_head );
		pq->_head = next ; 

		if(pq->_head  == NULL)
		{
		   pq->_tail = NULL;
		}
	}
}

int QueueSize(Queue* pq)
{
    int size = 0;
	struct QueueNode* cur = pq->_head ;
	assert(pq);
	while(cur != NULL)
	{
	     ++size;
		 cur = cur->_next ;
	}
	return size;
}

int QueueEmpty(Queue* pq)
{
	assert(pq);
	return pq->_head == pq->_tail  ? 0 : 1;
}

QUDataType QueueFront(Queue* pq)
{
     assert(pq);
	 return pq->_head ->_data ;
}

QUDataType QueueBack(Queue* pq)
{
    assert(pq);
	return pq->_tail ->_next ;
}

void QueuePrint(Queue* pq)
{
	QueueNode* cur = pq->_head;
	assert(pq);
	while(cur != NULL)
	{
        printf("%d ",cur->_data);
		cur = cur ->_next ;
    }
   printf("\n");
}


int main()
{
	Queue pq;
	QueueInit(&pq);

    QueuePush(&pq,1);
	QueuePush(&pq,2);
	QueuePush(&pq,3);
	QueuePush(&pq,4);
	QueuePush(&pq,5);
	QueuePrint(&pq);

	QueuePop(&pq);
	QueuePrint(&pq);

	QueueFront(&pq);
    QueuePrint(&pq);

	while(QueueEmpty(&pq) != 0)  //后面的是显示头的数值，把这里屏蔽了，就可以了，
	{
	   printf("%d ",QueueFront(&pq));
	   QueuePop(&pq);
	   printf("\n");
	}
	QueueDestory(&pq);

   return 0;
}