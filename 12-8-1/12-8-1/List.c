#include "list.h"

ListNode* BuyListNode(LTDataType x)
{
    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    node->_next = NULL;
	node->_prev = NULL;
	node->_data = x;

	return node;
}

void ListInit(List* plist)
{
   ListNode* head = BuyListNode(-1);
   assert(plist);
   head->_next =head;
   head->_prev =head;
   plist->_head =head;
}

//void ListDestory(List* plist)  // �ͷ�����
//{
//	 ListNode* cur= plist->_head ->_next ; //��һ���ڵ�
//    assert(plist);
//	 while(cur != plist->_head )     // ��cur�Ƿ���� _head
//	 {
//	     ListNode* next = cur->_next ;
//		 free(cur);
//		 cur = cur->_next ;
//	 }
//	 free(plist->_head );   // ������ͷ�ͷ�Ļ���֮��Ҫ��ͷ��Ϊ��
//	 plist->_head =NULL;
//}

void ListPrint(List* plist)
{
	 ListNode* cur= plist->_head ->_next ;
   assert(plist);
   printf("<-head->");
   while(cur != plist->_head)
   {
       printf("<-%d->",cur->_data); // ����������ӡ�� cur->����data д�������ˣ�������,�����ˣ�
	   cur = cur->_next ;
   }
   printf("\n");
}


void ListPushBank(List* plist,LTDataType x)  //������������Ѿ��������ˣ�
{/*
	ListNode* head = plist->_head ;
	ListNode* tail = head->_prev ;
	ListNode* newnode = BuyListNode(x);
    assert(plist);
	tail->_next =newnode;
	newnode->_prev = tail;
	newnode->_next = head;
	head->_prev = newnode;*/
	ListInsert(plist->_head,3); 
}
void ListPushFront(List* plist,LTDataType x)
{
	/*ListNode* head = plist->_head ;
	ListNode* next = head->_next  ;
	ListNode* newnode = BuyListNode(x);
    assert(plist);
	head->_next = newnode;
	newnode->_prev =head;
	newnode->_next =next;
	next->_prev  = newnode; */
	ListInsert(plist->_head,3);
}
void ListPopBank(List* plist)
{
    /*ListNode* head = plist->_head ;
    ListNode* tail = head->_next ;
	ListNode* tailprev =tail->_prev;
	assert(plist && plist->_head ->_next != plist->_head );
	free(tail);
	tailprev->_next = head;
	head->_prev = tailprev;*/

	ListErase(plist->_head);
}
void ListPopFrond(List* plist)
{
    /*ListNode* head = plist->_head ;
	ListNode* next = head->_next ;
	ListNode* nextnext = next->_next ;
	assert(plist && plist->_head->_next != plist->_head  );
	free(next);
	head->_next = nextnext;
	nextnext->_prev =head;*/

	ListErase(plist->_head);
}


ListNode* ListFind(List* plist, LTDataType x)
{
    ListNode* cur = plist->_head ->_next ;
	assert(plist && plist->_head );
	while(cur != plist->_head )
	{
	    if(cur->_data == x)
		{
		    return cur;
		}
         return NULL;   //��һ���������
	}
}
void  ListInsert(ListNode* pos, LTDataType x)
{
    ListNode* prev = pos->_prev ;
	ListNode* newnode = BuyListNode(x);
	assert(pos);
    prev->_next = newnode;
	newnode->_prev = prev;

	newnode->_next = pos;
	pos->_prev = newnode;
}
void  ListErase(ListNode* pos)
{
     ListNode* prev = pos->_prev ;
	 ListNode* next = pos->_next ;
	 assert(pos);
	 prev->_next = next;
	 next->_prev = prev;
	 free(pos);
}

void ListTest()
{
	
     List list;
	 ListInit(&list);
	 ListPushBank(&list,1); //  �������PushBank  д���� PushiBank,ֱ������;
	 ListPushBank(&list,2);
	 ListPushBank(&list,3);
	 ListPushBank(&list,4);
	 ListPushBank(&list,5);

	 ListPrint(&list);

	 ListPushFront(&list,0);
	  ListPrint(&list);

	  ListPopBank(&list);
	  ListPrint(&list);    // ����������ͬʱ���ڣ�Ҳ����˵������   ���Էֿ�֤��

	  ListPopFrond(&list);
	  ListPrint(&list);
     /* ListFind(&list,2);
	  ListInsert(&list,2);
      ListPrint(&list);*/
    /* ListDestory(&list);
	 ListPrint(&list);*/
}
