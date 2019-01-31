#include "SeqList.h"

void SeqListInit(SeqList* ps,size_t capacity) //��ʼ��
{
    assert(ps);
	ps->_array = (SLDataType*)malloc(sizeof(SLDataType)*capacity);
	ps->_capacity = capacity;
	ps->_size = 0;
}
void SeqListDestory(SeqList* ps) //�ͷ�
{
    assert(ps);
	if(ps->_array)
	{
	    free(ps->_array );
		ps->_array  = NULL;
		ps->_capacity = ps->_size = 0;
	}
}
void CheckCapacity(SeqList* ps)  //�������
{
    assert(ps);
	if(ps->_size == ps->_capacity )  //�Ⱥ�û��д�ã�
	{
		ps->_capacity *= 2;
		ps->_array =realloc(ps->_array , ps->_capacity * sizeof(SLDataType));
		assert(ps->_array); 
	}
}
void SeqListPushBank(SeqList* ps,SLDataType x)  //β��
{
     assert(ps);
     CheckCapacity(ps);
	 ps->_array[ps->_size ] = x;
	 ps->_size++;
}
void SeqListPopBank(SeqList* ps) //βɾ
{
     assert(ps && ps->_array);
	 ps->_size--;
}
void SeqListPushFort(SeqList* ps,SLDataType x) //ͷ��
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
void SeqListPopFort(SeqList* ps)  //ͷɾ
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


int SeqListFind(SeqList* ps, SLDataType x)  //����
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
void SeqListInsert(SeqList* ps ,size_t pos , SLDataType x) //�ڵ�ǰλ�ò���
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
void SeqListErase(SeqList* ps, size_t pos)    //�ڵ�ǰλ��ɾ��
{
	int i = 0;
   assert(ps);
   while(pos < ps->_size)    //���ﲻ�Ǳ�����һ�������ҵ��Ǹ�λ�ü�һ��
   {
		ps->_array[pos] = ps->_array[pos + 1];
		pos++;
   }
  ps->_size--;
}

void SeqListBubblesort(SeqList* ps)   //ð������
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
int SeqListBinaryFind(SeqList* ps, SLDataType x) //���ֲ��ң���һ��С���⣬�ҵ��ˣ�������ң�
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
void SeqListRemoveAll(SeqList* ps, SLDataType x) //ɾ����ǰ�Ժ��ȫ��λ��
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