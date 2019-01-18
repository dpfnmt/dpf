#include "SeqList.h"


void SeqListInit(SeqList* ps, size_t capacity)
{
        assert(ps);
        ps->_array = ( SLDataType*)malloc(sizeof(SLDataType)*capacity);
		ps->_capicity = capacity;
		ps->_size = 0;
}

void SeqListDestory(SeqList* ps)
{
        assert(ps);
		if(ps->_array)
		{
			  free(ps->_array);
		      ps->_array = NULL;
			  ps->_capicity =ps->_size =0;
		}
}

void CheckCapacity(SeqList* ps)
{
    assert(ps);
	if(ps->_size  == ps->_capicity )
	{
		 ps->_capicity *= 2;
		 ps->_array = realloc(ps->_array  ,ps->_capicity *sizeof(SLDataType));
		 assert(ps->_array );
	}
}
void SeqListPushBack(SeqList* ps, SLDataType x)
{
    assert(ps);
	CheckCapacity(ps);
	ps->_array[ps->_size ] = x;
	ps->_size++;
}
void SeqListPopBack(SeqList* ps)
{
    assert(ps && ps->_size);
	ps->_size--;
}
void SeqListPushFront(SeqList* ps, SLDataType x)
{
	int end = ps->_size-1;
      assert(ps);
	  CheckCapacity(ps);
	  while(end >= 0)
	  {
	      ps->_array[end+1] = ps->_array[end];
		 --end;
	  }
	  ps->_array[0]= x;
	  ps->_size++;
}
void SeqListPopFront(SeqList* ps)
{
    int right = 0;
	assert(ps);
	CheckCapacity(ps);
	while(right < ps->_size-1)
	{
	    ps->_array[right] = ps->_array[right + 1];
		right++;
	}
	ps->_size--;
}
int SeqListFind(SeqList* ps, SLDataType x)
{
     int i = 0;    
	 assert(ps);
     for(i= 0 ; i< ps->_size ;i++)
	 {
	      if(x == ps->_array[i])
		  {
		      return i;
		  }
	 }
	  return -1;
}
void SeqListInsert(SeqList* ps, size_t pos, SLDataType x)
{
     int end = ps->_size -1;
	 assert(ps && pos < ps->_size);
	 CheckCapacity(ps);
     while(end > pos)
	 {
	      ps->_array[end + 1] = ps->_array[end];
		  --end;
	 }
	 ps->_array[pos] = x;
	 ps->_size++;
}
void SeqListErase(SeqList* ps, size_t pos)
{
     size_t right = pos;
     assert(ps);
	 while(right < ps->_size )
	 {
	      ps->_array[right] = ps->_array[right+1];
		  right++;
	 }
	 ps->_size--;
}
//void SeqListRemove(SeqList* ps, SLDataType x);
//void SeqListModify(SeqList* ps, size_t pos, SLDataType x);

// 扩展面试题实现
void SeqListBubbleSort(SeqList* ps)
{
	int i=1;
	int end =0 ;
	int end2 =0;
	end = ps->_size;
	assert(ps);
    while(end >= 0)
	{
	  for(i = 1 ; i < end ; i++)
	  {
		     if(ps->_array[i-1] > ps->_array[i] )
		     {
		            SLDataType tmp = ps->_array[i-1];
			        ps->_array[i-1] = ps->_array[i];
			        ps->_array[i] = tmp;
		     }
	   }
          	--end;
	}
    
}
int SeqListBinaryFind(SeqList* ps, SLDataType x)
{
	int left = 0;
	int right = ps->_size-1;
    SLDataType mid =(left + (right - left)) / 2 ;
	assert(ps);
	while(ps->_size  >= 0)
	{
	    if(x > mid)
		{
		    ps->_array[left] = ps->_array[mid];
			++left;
		}
		if(x = mid)
		{
		     ps->_array[mid] = x;
		}
		if(x < mid)
		{
		    ps->_array[mid] = ps->_array[right];
			--right;
		}
		else
			break;
	}
	return mid;

}
//// 本题要求：时间复杂度：O(N) 空间复杂度 O(1)
void SeqListRemoveAll(SeqList* ps, SLDataType x)
{
	int i = 0;
	for(i = 0; i < ps->_size ; i++)
	{
	   if(ps->_array[i] == x)
	   {
	      SeqListErase(ps,i);
		  i--;
	   }
	}
}

void SeqListPrint(SeqList* ps)
{
     int i = 0;
	 assert(ps);
	 for(i = 0 ; i < ps->_size ;i++)
	 {
	    printf("%d ",ps->_array[i]);
	 }
	 printf("\n");
}


void test1()
{
	SeqList  s;
	SeqListInit(&s,10);
    SeqListPushBack(&s,1);
    SeqListPushBack(&s,2);
    SeqListPushBack(&s,3);
    SeqListPushBack(&s,4); 
     SeqListPrint(&s);

     SeqListPopBack(&s); 
     SeqListPrint(&s);

	 SeqListPushFront(&s,0);
     SeqListPrint(&s);

	  SeqListPopFront(&s);
     SeqListPrint(&s);

	  printf("%d",SeqListFind(&s,2));

	  SeqListInsert(&s,2,2);
     SeqListPrint(&s);

	 SeqListErase(&s,2,2);
     SeqListPrint(&s);

	SeqListDestory(&s);

     
}

void test2()
{
	SeqList  s;
	SeqListInit(&s,10);
    SeqListPushBack(&s,4);
    SeqListPushBack(&s,2);
    SeqListPushBack(&s,1);
    SeqListPushBack(&s,2);
    SeqListPushBack(&s,3); 
     SeqListPrint(&s);
	/*SeqListBubbleSort(&s);
   SeqListPrint(&s);

   printf("%d\n",SeqListBinaryFind(&s,2));*/

   	 SeqListRemoveAll(&s,2);
     SeqListPrint(&s);
    
    

	 SeqListDestory(&s);
    
}
int main()
{
	test2();
  return 0;
}