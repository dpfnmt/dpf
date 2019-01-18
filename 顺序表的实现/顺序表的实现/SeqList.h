#ifndef    __SEQLIST_H__
#define    __SEQLIST_H__


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<malloc.h>

typedef int SLDataType;
 //顺序表的动态存储
typedef struct SeqList
{
    SLDataType* _array; // 指向动态开辟的数组
    size_t _size ; // 有效数据个数
    size_t _capicity ; // 容量空间的大小
}SeqList;


// 基本增删查改接口

void SeqListInit(SeqList* ps, size_t capacity);
void SeqListDestory(SeqList* ps);
void CheckCapacity(SeqList* ps);
void SeqListPushBack(SeqList* ps, SLDataType x);
void SeqListPopBack(SeqList* ps);
void SeqListPushFront(SeqList* ps, SLDataType x);
void SeqListPopFront(SeqList* ps);
int SeqListFind(SeqList* ps, SLDataType x);
void SeqListInsert(SeqList* ps, size_t pos, SLDataType x);
void SeqListErase(SeqList* ps, size_t pos);
//void SeqListRemove(SeqList* ps, SLDataType x);
//void SeqListModify(SeqList* ps, size_t pos, SLDataType x);

// 扩展面试题实现
void SeqListBubbleSort(SeqList* ps);
int SeqListBinaryFind(SeqList* ps, SLDataType x);
//// 本题要求：时间复杂度：O(N) 空间复杂度 O(1)
void SeqListRemoveAll(SeqList* ps, SLDataType x);


void SeqListPrint(SeqList* ps);

void SeqListTest1();


#endif

  