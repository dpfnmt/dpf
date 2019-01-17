#define _CRT_SECURE_NO_WARNINGS 1

#include"SeqList.h"

void  SListInit(SList* ps,size_t capacity)
{
     assert(plist);
     ps->_array = (SLDataType)malloc(sizeof(SLDataType)*capacity);
     ps->_size = 0;
	 ps->capacity = capacity;
}
void  SListDestory(SList* ps)
{
    assert(ps);
	if(ps->_array)
	{
	    free(ps->_array)
		ps->_array = NULL;
		ps->_capacity = ps->size_t =0;
	}
}

void CheckCapacity(SeqList* ps)
{
	assert(ps);

	if (ps->_size == ps->_capacity)
	{
		ps->_capacity *= 2;
		ps->_array = realloc(ps->_array, ps->_capacity*sizeof(SLDataType));
		assert(ps->_array);
	}
}

void SeqListPushBank(SList* ps)
{
      assert(ps);
      CheckCapacity(ps);
	  
	 ps->_array[ps->_size] = x;
	 ps->_size++;
	 
}


void SListPrint(SList* ps)
{
	int i=0;
   assert(ps);
   if(i=0; i<(int)ps->size ; i++)
   {
       printf("%d ",_arrar[i]);   
   }
   printf("\n");
}

void SListTest()
{
  SeqList s;
  SeqListInit(&s,5);
  SeqLisrPushBank(&s,1);
  SeqLisrPushBank(&s,2);
  SeqLisrPushBank(&s,3);
  SeqLisrPushBank(&s,4);
}