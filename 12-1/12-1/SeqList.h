#ifndef    __SEQLIST_H__
#define    __SEQLIST_H__

#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>




typedef int SLDataType;

typedef struct SeqList
{
  SLDataType* _array;
   size_t  _size;
   size_t   _capicity;
}SeqList;

void SeqListInit(SeqList* ps ,size_t capicity);
void SeqListDestory(SeqList* ps);

void SeqListPushBank(SeqList* ps,SLDataType x);
void SeqListPushFront(SeqList* ps,SLDataType x);
void SeqListPopFront(SeqList* ps);
void SeqListPopBank(SeqList* ps);

void SeqListInsert(SeqList*ps, size_t pos,SLDataType x);
void SeqListErase(SeqList*ps, size_t pos);
int SeqListFind(SeqList*ps, SLDataType x);

void SeqListBubbleSort(SeqList* ps);
int SeqListBinaryFind(SeqList* ps, SLDataType x);
void SeqListRemoveAll(SeqList* ps, SLDataType x);

void SeqListprint(SeqList*ps);
void SeqListTest1();


#endif  //__SEQLIST_H__