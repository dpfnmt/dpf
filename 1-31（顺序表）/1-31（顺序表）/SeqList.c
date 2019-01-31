#include "SeqList.h"

void SeqListInit(SeqList* ps,size_t capacity) //初始化
{
    assert(ps);
	ps->_array = (SLDataType*)malloc(sizeof(SLDataType)*capacity);
	ps->_capacity = capacity;
	ps->_size = 0;
}
void SeqListDestory(SeqList* ps) //释放
{
    assert(ps);
	if(ps->_array)
	{
	    free(ps->_array );
		ps->_array  = NULL;
		ps->_capacity = ps->_size = 0;
	}
}
void CheckCapacity(SeqList* ps)  //检查容量
{
    assert(ps);
	if(ps->_size == ps->_capacity )  //等号没有写好；
	{
		ps->_capacity *= 2;
		ps->_array =realloc(ps->_array , ps->_capacity * sizeof(SLDataType));
		assert(ps->_array); 
	}
}
void SeqListPushBank(SeqList* ps,SLDataType x)  //尾插
{
     assert(ps);
     CheckCapacity(ps);
	 ps->_array[ps->_size ] = x;
	 ps->_size++;
}
void SeqListPopBank(SeqList* ps) //尾删
{
     assert(ps && ps->_array);
	 ps->_size--;
}
void SeqListPushFort(SeqList* ps,SLDataType x) //头插
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
void SeqListPopFort(SeqList* ps)  //头删
{
   int left = 0;
   int right = ps->_size - 1;
   assert(ps);
   while(left < right)
   {
       ps->_array[left] = ps->_array[left + 1];
	   left++;
   }
   ps->_size--;
}


int SeqListFind(SeqList* ps, SLDataType x)  //查找
{
	int i = 0;
    assert(ps);
	for(i = 0; i< ps->_size;i++)
	{
	    if(x == ps->_array[i])
		{
			return i;
		}
	}
	return -1;
}
void SeqListInsert(SeqList* ps ,size_t pos , SLDataType x) //在当前位置插入
{
	int end = ps->_size -1;
    assert(ps && pos < ps->_size );
    while(end >= 0)  
	{
	    ps->_array[end + 1] = ps->_array[end];
		--end;
	}
	ps->_array[pos] = x;
	ps->_size++;
	
    
}
void SeqListErase(SeqList* ps, size_t pos)    //在当前位置删除
{
	int i = 0;
   assert(ps);
   while(pos < ps->_size)    //这里不是变量加一，而是找的那个位置加一；
   {
		ps->_array[pos] = ps->_array[pos + 1];
		pos++;
   }
  ps->_size--;
}

void SeqListBubblesort(SeqList* ps)   //冒泡排序
{
	int i = 0 ;
	int end = 0;
	end = ps->_size-1 ;
   assert(ps);
   while(end >= 0)
   {
       for(i = 0 ;i < end ; i++)
	   {
	        if(ps->_array[i] > ps->_array[i + 1])
			{
			   SLDataType tmp = ps->_array[i];
			   ps->_array[i] = ps->_array[i + 1];
			   ps->_array[i+1] = tmp;
			}
	   }
	   end--;
   }
   
}
int SeqListBinaryFind(SeqList* ps, SLDataType x) //二分查找（有一点小问题，找到了，请告诉我）
{
    int start = 0;
	int end = ps ->_size;
	int mid = 0;
	while(start < end)
	{
		mid = (start + end)/2;
		if(ps ->_array[mid] == x)
		{
			return mid;
		}
		else if(ps ->_array[mid] > x)
		{
			end = mid + 1;
		}
		else
		{
			start = mid + 1;
		}
	}
	return -1;
	
}
void SeqListRemoveAll(SeqList* ps, SLDataType x) //删除当前以后的全部位置
{
	int i =0 ;
     assert(ps);
     for(i =0 ; i< ps->_size ;i++)
	 {
	    if(ps->_array[i] == x)
		{
		    SeqListErase(ps,x);
			i--;
		}
	 }
}
void SeqListPrint(SeqList* ps)
{
	 int i = 0;
     for(i  = 0; i < ps->_size ; i++)
	 {
	       printf("%d ",ps->_array[i]);
	 }
	 printf("\n");
}


int main()
{
   SeqList s;
   SeqListInit(&s,10);
   SeqListPushBank(&s,1);
   SeqListPushBank(&s,3);
   SeqListPushBank(&s,2);
   SeqListPushBank(&s,4);
   SeqListPushBank(&s,6);
   SeqListPushBank(&s,8);
   SeqListPushBank(&s,7);
   SeqListPrint(&s);

   SeqListBubblesort(&s);
   SeqListPrint(&s);

   //printf("%d\n",SeqListBinaryFind(&s,7));

    SeqListRemoveAll(&s,4);
      SeqListPrint(&s);

   /*SeqListPopBank(&s);
   SeqListPrint(&s);
   
   SeqListPushFort(&s,0);
   SeqListPrint(&s);

   SeqListPopFort(&s);
   SeqListPrint(&s);*/
    
   /* printf("%d\n",SeqListFind(&s,2));

   SeqListInsert(&s , 0 , 0);
   SeqListPrint(&s);

   SeqListErase(&s,0);
   SeqListPrint(&s);*/



   SeqListDestory(&s);
   return 0;
}