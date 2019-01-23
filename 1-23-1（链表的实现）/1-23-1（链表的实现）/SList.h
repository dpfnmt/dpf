#define _CRT_SECURE_NO_WARNINGS 1
#ifndef    __SList_H__
#define    __SList_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<malloc.h>

//��ͷ�����ѭ���������ɾ���ң�
typedef int SLTDataType;

typedef struct SListNode
{
     SLTDataType _data;
     struct SListNode* _next;
}SListNode;
typedef struct SList
{
      SListNode* _head;
}SList;

void SListInit(SList* plist);
void SListDestory(SList* plist);
SListNode* BuySListNode(SLTDataType x);
void SListPushFront(SList* plist, SLTDataType x);
void SListPopFront(SList* plist);
// ��pos�ĺ�����в���
void SListInsertAfter(SListNode* pos, SLTDataType x);
// ��pos��ǰ����в���
void SListEraseAfter(SListNode* pos);
void SListRemove(SList* plist, SLTDataType x);
void SListPrint(SList* plist);
void TestSList();

#endif  //__SList_H__