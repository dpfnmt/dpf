#ifndef    __LIST_H__
#define    __LIST_H__


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

typedef int  LDataType;

typedef struct ListNode
{
   LDataType _data;
   struct ListNode* _next;
   struct ListNode* _prev;
}ListNode;

typedef struct List 
{
   ListNode* _head;
}List;t

void ListInit(List* Plist);
void ListDestory(List* Plist);


void ListPushBank( List* Plist,LDataNode x);
void ListPushFront(List* plist,LDataNode x);
void ListPopBank(List* plist);
void ListPopFrond(List* plist);

void ListPrint(List* Plist);
void ListTest();

#endif      //__LIST_H__