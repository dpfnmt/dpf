#include"SList.h"


SListNode* BuySListNode(SLTDataType x)
{
    SListNode* node = (SListNode*)malloc(sizeof(SListNode));
	assert(node);
	node->_next = NULL;
	node->_data = x;
	return node;
}
void SListInit(SList* plist)
{
     assert(plist);
	 plist->_head = NULL;

}
void SListDestory(SList* plist);
void SListPushBack(SList* plist, SLTDataType x)
{
   SListNode* tail;
   assert(plist);
   if(plist->_head == NULL)
   {
       plist->_head = BuySListNode(x);
   }
   else
   {
      tail = plist->_head ;
	  while(tail->_next )
	  {
	      tail = tail->_next ;
	  }
	  tail->_next = BuySListNode(x);
   }
}

  void SListPopBack(SList* plist)
{
     SListNode*prev,*tail;
	 assert(plist);
	 prev = NULL;
	 tail = plist->_head ;

	 if(tail->_next  == NULL)
	 {
	     free(tail);
		 plist->_head = NULL;
		 //printf("hehe");
	 }
	 else
	 {
	     while(tail->_next != NULL)
		 {
			 //printf("hehe2");
		     prev = tail;
			 tail = tail->_next;
		 }
		 free(tail);
		 prev->_next = NULL;
	 }
}
void SListPushFront(SList* plist, SLTDataType x)
{
     SListNode* newnode;
	 assert(plist);
	 newnode = BuySListNode(x);
	 newnode->_next = plist->_head ;
	 plist->_head = newnode;

}
void SListPopFront(SList* plist)
{
	SListNode* next;
    assert(plist);
	next = plist->_head ->_next ;
	free(plist->_head );
	plist->_head = next; 

}


SListNode* SListFind(SList* plist, SLTDataType x)
{
    SListNode* cur = plist->_head;
	assert(plist);
	while(cur)
	{
	    if(cur->_data  == x)
		{
		    return cur;
		}
		cur = cur->_next ;
	}
	return NULL;
}
void SListInsertAfter(SListNode* pos, SLTDataType x)  // ��pos�ĺ�����в���
{
   SListNode* next, *newnode;
   assert(pos);
   next = pos->_next ;
   newnode =  BuySListNode(x);
   pos->_next  = newnode;
   newnode->_next = next;
}

void SListEraseAfter(SListNode* pos) // ��pos��ǰ����в���
{
    SListNode* next = pos->_next;
   assert(pos);
   if(pos->_next  == NULL)
   {
      return;
   }
   pos->_next = next->_next ;
   free(next);
   next = NULL;
}
void SListRemove(SList* plist, SLTDataType x) //���Լ����Լ�ɾ��
{
    SListNode* cur = plist->_head ;
    SListNode* prev = NULL;
    if(plist->_head ->_data == x)
	{
	    SListPopFront(plist); //�������ǰ���SListȥ���ᱨһ����������дһ�����ͣ�
		return;
	}
	assert(plist);
	
	while(cur)
	{
	   if(cur->_data  == x)
	   {
		   prev->_next = cur->_next; //����д���ˣ����³�����ˣ�
	       free(cur);
           cur = NULL;  //����������ȥ����������ѭ���ˣ�
		   break;
	   }
	   else
	   {
	       prev = cur;
		   cur = cur->_next ;
	   }
	}
}
void SListPrint(SList* plist)
{
   SListNode* cur;
   assert(plist);
   cur = plist->_head ;
   while(cur)
   {
      printf("%d->",cur->_data );
	  cur = cur->_next ;
   }
   printf("NULL\n");
}
void TestSList1()
{
     SList s;
	 SListInit(&s);
     SListPushBack(&s,1);
     SListPushBack(&s,2);
     SListPushBack(&s,3);
     SListPrint(&s);

     SListPopBack(&s);
     SListPrint(&s);

	 SListPushFront(&s,1);
     SListPrint(&s);
     
	  SListPopFront(&s);
      SListPrint(&s);
      
	 /* SListNode* pos = SListFind(&s,2);
	  SListInsertAfter(pos,3);
      SListPrint(&s);*/

	 /* SListEraseAfter(pos);
      SListPrint(&s);*/

	  SListRemove(&s,3);
	  SListRemove(&s,2);
	  SListRemove(&s,1);
      SListPrint(&s);

}

void TestSList2()
{
     SList s;
	 SListInit(&s);
     SListPushBack(&s,1);
     SListPushBack(&s,2);
     SListPushBack(&s,3);
     SListPrint(&s);

	  SListNode* pos = SListFind(&s,2); //������Ǳ��벻��ȥ����һ��С���⣬�����Ǳ����������⣺
	  SListInsertAfter(pos,3);
      SListPrint(&s);

	 /* SListEraseAfter(pos);
      SListPrint(&s);*/

	  SListRemove(&s,3);
	  SListRemove(&s,2);
	  SListRemove(&s,1);
      SListPrint(&s);

}