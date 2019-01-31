#ifndef   __SEQLIST_H__
#define   __SEQLIST_H__

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<string.h>
#include<assert.h>

//Ë³Ðò±íµÄ¾²Ì¬´¢´æ£»
//#define N 100;
//typedef  int  SLDataType;
//
//typedef struct SeqList
//{
//     SLDataType array[N];
//	 size_t  size;
//}SeqList;


//Ë³Ðò±íµÄ¶¯Ì¬´¢´æ£»
typedef int SLDataType;

typedef struct SeqList
{
    SLDataType* _array;
	size_t _size;
	size_t _capacity; 
}SeqList;


void SeqListInit(SeqList* ps,size_t _capacity);
void SeqListDestory(SeqList* ps);
void CheckCapacity(SeqList* ps);
void SeqListPushBank(SeqList* ps,SLDataType x);
void SeqListPopBank(SeqList* ps);
void SeqListPushFort(SeqList* ps,SLDataType x);
void SeqListPopFort(SeqList* ps);
void SeqListPrint(SeqList* ps);

int SeqListFind(SeqList* ps, SLDataType x);
void SeqListInsert(SeqList* ps ,size_t pos , SLDataType x);
void SeqListErase(SeqList* ps, size_t pos);

void SeqListBubblesort(SeqList* ps, SLDataType x);
int SeqListBinaryFind(SeqList* ps, SLDataType x);
void SeqListRemoveAll(SeqList* ps, SLDataType x);



#endif   //__SEQLIST_H__
