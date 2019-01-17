#ifdef    __QUEUE_H__
#define   __QUEUE_H__


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>
#include<malloc.h>

void QueueInit(Queue* pq);
void QueueDestory(Queue* pq);
QueueNode* BuyQueueNode(QUDataType x);
void QueuePush(Queue* pq, QUDataType x);
void QueuePop(Queue* pq);
QUDataType QueueFront(Queue* pq);
QUDataType QueueBack(Queue* pq);
int QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);
void QueuePrint(Queue* pq);
void TestQueue();

#endif 