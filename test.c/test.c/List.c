#include "List.h"

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>


void BuyListNode(LDataType x)
{
    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    node->_next = NUll;
	node->_prev = NULL;
	node->_data = x;
	return node;
}

void ListInit(List* plist)
{
   assert(plist);
   //plist->_head =BuyListNode(-1);   // ������İ����ڴ��滻�ˣ�
   //plist->_head ->_next =plist->_head ;
   ListNode* head = BuyListNode(-1);
   head->_next =head;
   head->_prev =head;
   plist->_head =head;
}
void ListDestory(List* plist)  // �ͷ�����
{
     assert(plist);
	 struct ListNode* cur= plist->_head ->_next ; //��һ���ڵ�
	 while(cur != plist->_head )     // ��cur�Ƿ���� _head
	 {
	     struct ListNode* next = cur->_next ;
		 free(cur);
		 cur = cur->_next ;
	 }
	 free(plist->_head )   // ������ͷ�ͷ�Ļ���֮��Ҫ��ͷ��Ϊ��
	  plist->_head =NULL;
}

void ListPushBank(List* plist,LDataNode x)
{
    assert(list);
	struct ListNode* head = plist->_head ;
	struct ListNode* tail = plist->_prev ;
	struct ListNode* NewNode = BuyListNode(x);
	tail->_next = NewNode;
	NewNode->_prev = tail;
	NewNode->_next = head;
	head->_prev = NewNode;

}
void ListPushFront(List* plist,LDataNode x)
{
    assert(plist)
	ListNode* head = plist->_head ;
	ListNode* next = head->_next  ;
	ListNode* newnode = BuyListNode(x);
	head->_next = newnode;
	newnode->_prev =head;
	newnode->_next =next;
	next->_prev  = newnode; 
}
void ListPopBank(List* plist);
void ListPopFrond(List* plist);

void ListPrint(List* plist)
{
   assert(plist);
   printf("<-head->");
   struct ListNode* cur= plist->_head ->_next ;
   while(cur != plist->_head )
   {
       printf("<-%d->");
	   cur = cur->_data ; 
	   cur = cur->_next ;
   }
   printf("\n");
}

void ListTest()
{
     List list;
	 ListInit(&list);
	 ListPushiBank(&list,1);
	 ListPushiBank(&list,2);
	 ListPushiBank(&list,3);
	 ListPushiBank(&list,4);
	 ListPushiBank(&list,5);

	 ListPrint(&list);
     ListDestory(&list);
}
