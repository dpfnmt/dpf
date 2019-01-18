#ifndef    __SEQLIST_H__
#define    __SEQLIST_H__


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<malloc.h>

typedef int SLDataType;
 //˳���Ķ�̬�洢
typedef struct SeqList
{
    SLDataType* _array; // ָ��̬���ٵ�����
    size_t _size ; // ��Ч���ݸ���
    size_t _capicity ; // �����ռ�Ĵ�С
}SeqList;


// ������ɾ��Ľӿ�

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

// ��չ������ʵ��
void SeqListBubbleSort(SeqList* ps);
int SeqListBinaryFind(SeqList* ps, SLDataType x);
//// ����Ҫ��ʱ�临�Ӷȣ�O(N) �ռ临�Ӷ� O(1)
void SeqListRemoveAll(SeqList* ps, SLDataType x);


void SeqListPrint(SeqList* ps);

void SeqListTest1();


#endif

  