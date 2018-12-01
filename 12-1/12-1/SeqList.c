#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SeqListInit(SeqList* ps ,size_t capicity)
{
    assert(ps);
	ps->_array =(SLDataType*)malloc(sizeof(SLDataType)*capicity);
	ps->_size = 0;
	ps->_capicity =capicity;
}


void SeqListDestory(SeqList*ps)
{
    assert(ps);
	if(ps->_array )
	{
	   free(ps->_array);
	   ps->_array =NULL;
	   ps->_capicity =ps->_size =0;
	}
}

void  CheckCapicity(SeqList* ps)
{
   assert(ps);
   if(ps->_size == ps->_capicity )
   {
	   ps->_capicity *= 2;
       ps->_array =realloc(ps->_array ,ps->_capicity*sizeof(SLDataType));
	   assert(ps->_array );
   }
}

void SeqListPushBank(SeqList* ps,SLDataType x)
{
   assert(ps);
   CheckCapicity(ps);
   ps->_array [ps->_size ]=x;
   ps->_size ++;
}

void SeqListPopBank(SeqList* ps)
{
	
     assert(ps && ps->_size >0);
     ps->_size--;
	 
}

void SeqListPushFront(SeqList*ps,SLDataType x)
{
	int end = ps->_size -1;
   assert(ps);
   CheckCapicity(ps);
   while(end >= 0)
	 {
	   ps->_array [end+1]=ps->_array [end];
	   --end;
	 }
   ps->_array[0]=x;
   ps->_size++;

}

void SeqListPopFront(SeqList* ps)
{
	int right = 0;
    assert(ps);	
	while(right < (int)ps->_size - 1 )
	{
	   ps->_array[right+1]=ps->_array[right];
	   ++right;
	}
	ps->_size--;
}


void SeqListInsert(SeqList* ps, size_t pos, SLDataType x)
{
	int end = ps->_size - 1;
	assert(ps && pos <= ps->_size);
	CheckCapicity(ps);

	
	while (end >= (int)pos)
	{
		ps->_array[end + 1] = ps->_array[end];
		--end;
	}

	/*(int)end = ps->_size;
	while (end >(int)pos)
	{
		ps->_array[end] = ps->_array[end - 1];
		--end;
	}*/

	ps->_array[pos] = x;
	ps->_size++;
}

void SeqListErase(SeqList*ps, size_t pos)
{
     size_t right = pos;
	assert(ps && pos <= ps->_size);
	CheckCapicity(ps);
    while(right < ps->_size -1)
	{
	    ps->_array [right] = ps->_array [right+1];
		++right;
	}
	   --ps->_size ;
}


int SeqListFind(SeqList*ps, SLDataType x)
{
	int i = 0;
	assert(ps);
	for(i = 0; i < (int)ps ->_size ; i++)
	{
		if(x == ps ->_array [i])
		{
			return i;
		}
	}
	return -1;
}


void SeqListBubbleSort(SeqList* ps)
{
	int i=0;
	int finish = 0;
	(int)finish = ps->_size-1;
    assert(ps);
	while (finish > 0)
	{
		int exchange = 0;
		for (i = 1;(int)i <= finish; ++i)
		{
			if (ps->_array[i - 1] > ps->_array[i])
			{
				SLDataType tmp = ps->_array[i - 1];
				ps->_array[i - 1] = ps->_array[i];
				ps->_array[i] = tmp;
				exchange = 1;
			}
		}

		if (exchange == 0)
			break;

		--finish;
	}
}

int SeqListBinaryFind(SeqList* ps, SLDataType x)
{
	int right =0;
	int end = ps->_size -1;
    assert(ps);
	while(right < end);
	{
	    int mid = ( right + end)/2;
		if(ps->_array [mid] < x)
		{
		    right=mid+1; 
		}
		else if(ps->_array [mid] > x)
		{
		    end = mid;
		}
		else
		{
		    return mid;
		}
	}
	return -1;
}


void SeqListprint(SeqList*ps)
{
	int i =0;
   assert(ps);
   for(i=0;i < (int)ps->_size ;i++)
   {
	   printf("%d ",ps->_array[i]);
   }
   printf("\n");
}

//void SeqListTest()
//{
//    SeqList s;
//	SeqListInit(&s,10);
//	SeqListPushBank(&s,1);
//	SeqListPushBank(&s,2);
//	SeqListPushBank(&s,3);
//	SeqListPushBank(&s,4);
//	SeqListPushBank(&s,5);
//    SeqListprint(&s);
//
//
//	SeqListPopBank(&s);
//	SeqListPopBank(&s);
//    SeqListprint(&s);
//
//	SeqListPushFront(&s,0);
//    SeqListprint(&s);
//   
//	SeqListPopFront(&s);
//    SeqListprint(&s);
//
//	SeqListInsert(&s,2,10);
//    SeqListprint(&s);
//
//    SeqListErase(&s,2);
//    SeqListprint(&s);
//	
//	SeqListDestory(&s);
//
//}

//void SeqListTest1()
//{
//    SeqList s;
//	SeqListInit(&s,10);
//	SeqListPushBank(&s,1);
//	SeqListPushBank(&s,2);
//	SeqListPushBank(&s,3);
//	SeqListPushBank(&s,4);
//	SeqListPushBank(&s,5);
//    SeqListprint(&s);
//	SeqListFind(&s,3);
//	printf("%d\n",SeqListFind(&s,4));
//	 
//
//	SeqListDestory(&s);
//	
//}

void SeqListTest1()
{
    SeqList s;
	SeqListInit(&s,10);
	SeqListPushBank(&s,1);
	SeqListPushBank(&s,4);
	SeqListPushBank(&s,3);
	SeqListPushBank(&s,2);
	SeqListPushBank(&s,5);
    SeqListprint(&s);
	
     SeqListBubbleSort(&s);
       SeqListprint(&s);


	   printf("%d\n",SeqListBinaryFind(&s,3));

	 

	 

	SeqListDestory(&s);
	
}




