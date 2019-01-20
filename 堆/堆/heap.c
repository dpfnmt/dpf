#include "heap.h"


void Swap(HPDataType* pd1,HPDataType* pd2)
{
    HPDataType tmp = *pd1;
	  *pd1 = *pd2;
	  *pd2 = tmp;
}
void AdjustDown(HPDataType* a, size_t n, int root)
{
	int parent = root;
	int child = parent * 2 + 1;

	while (child < n)
	{
		// �����Һ�ֽС��
		if (child+1 < n && a[child + 1] < a[child])  //�������С�ںű�ɴ��ںţ���ɴ�ѣ�
			++child;

		if (a[child] < a[parent])
		{
			HPDataType tmp = a[child];     //�����������Swap������
			a[child] = a[parent];
			a[parent] = tmp;

			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}	
}

void HeapInit(Heap* hp, HPDataType* a, size_t n)   //�����ǽ���
{
	int i = 0;
	assert(hp && a);
	hp->_array = (HPDataType*)malloc(sizeof(HPDataType)*n);
	hp->_size = hp->_capacity = n;
	memcpy(hp->_array, a, sizeof(HPDataType)*n);
	
	for (i = (hp->_size - 2) / 2; i >= 0; --i)
	{
		AdjustDown(hp->_array, hp->_size, i);
	}
}

void HeapDestory(Heap* hp)
{
   assert(hp);
   free(hp->_array);
   hp->_array = NULL;
   hp->_size = hp->_capacity = 0;
}

void AdjustUp(int* a ,int n , int child)
{
     int parent = (child -1) / 2;
	 while(child > 0)
	 {
	      if(a[child] > a[parent])
		  {
		     Swap(&a[parent],&a[child]); //��������д����,��һ���ǲ��ǿ���ͨ����
		     child = parent;              //ͨ�����ԣ����Կ����������ǿ��Եģ�
			 parent = (child -1) / 2;
		  }
		  else 
		  {
		      break;
		  }
	 }
}
//void HeapPush(Heap* hp, HPDataType x)
//{
//	int newcapacity = 0;
//	assert(hp);
//	if(hp->_size == hp->_capacity)
//	{
//	   newcapacity = hp->_capacity == 0 ? 3 : hp->_capacity * 2 ;
//	   hp->_array = (HPDataType*)realloc(hp->_array , sizeof((HPDataType) * newcapacity));
//	   hp->_capacity = newcapacity;
//	}
//
//	hp->_array[hp->_size++] = x;
//	AdjustUp(hp->_array,hp->_size,hp->_size-1);
//
//}

void HeapPop(Heap* hp)
{
   assert(hp);
   Swap(&hp->_array[0],&hp->_array[hp->_size - 1]);
   hp->_size--;

   AdjustDown(hp->_array , hp->_size , 0);
}
HPDataType HeapTop(Heap* hp)
{
    assert(hp);

	return hp->_array[0];
}
int HeapSize(Heap* hp)
{
    return hp->_size;
}
int HeapEmpty(Heap* hp)
{
	return hp->_size == 0 ? 0 : 1;
}
//// ������
void HeapSort(int* a, int n)  //top k����
{
   int i = 0;
   int end = 0;
   for(i = (n - 2) / 2 ; i >= 0; i--)
   {
       AdjustDown(a, n, i);
   }
   end = n - 1;
   while(end > 0)
   {
       Swap(&a[0] , &a[end]);
	   end--;
   }
}

void HeapPrint(Heap* hp)
{
      int i = 0;
      for(i =0 ; i < hp->_size ; i++)
	  {
	      printf("%d",hp->_array[i]);
	  }
	  printf("\n");
}
int main()
{
	int a[10] = {2,0,5,6,7,0,9,0,3,4};
     Heap hp;
	 HeapInit(&hp , a,sizeof(a)/sizeof(0));
	 HeapPrint(&hp);
	/* HeapPush(&hp, 10); ��Ӵ��󣬳�������
	 HeapPrint(&hp);*/

	 HeapPop(&hp);
	 HeapPrint(&hp);

	 HeapSort( a ,sizeof(a)/sizeof(0));
     HeapPrint(&hp);
	 return 0;
}
