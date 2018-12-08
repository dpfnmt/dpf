#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

typedef int  LTDataType;

typedef struct ListNode
{
   LTDataType _data;
   struct ListNode* _next;
   struct ListNode* _prev;
}ListNode;

typedef struct List 
{
   ListNode* _head;
}List;

void ListInit(List* Plist);
void ListDestory(List* Plist);
void ListPrint(List* Plist);

void ListPushBank( List* Plist,LTDataType x);  //把这里的 LTDataType  写成了  LTDataNode;
void ListPushFront(List* plist,LTDataType x);
void ListPopBank(List* plist);
void ListPopFrond(List* plist);

ListNode* ListFind(List* plist, LTDataType x);
void  ListInsert(ListNode* pos, LTDataType x);
void  ListErase(ListNode* pos);


void Listtest();