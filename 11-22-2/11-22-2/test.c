#define _CRT_SECURE_NO_WARNINGS 1#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//void bubble_sort(int arr[],int sz)
//{
//   int i=0;
//   int j=0;
//   for(i=0;i<sz-1;i++)
//   {
//      for(j=0;j<sz-1-i;j++)
//	  {
//
//		  while(arr[j] > arr[j+1])
//		  {
//		     int tmp = arr[j];
//		     arr[j] = arr[j+1];
//		     arr[j+1] = tmp;
//		  }
//	     /*int tmp = arr[j];
//		  arr[j] = arr[j+1];
//		  arr[j+1] = tmp;*/
//	  }
//   }
//}
//
//void print_arr(int arr[],int sz)
//{
//   int i=0; 
//   for(i=0;i<sz;i++)
//   {
//      printf("%d ",arr[i]);
//   }
//   printf("\n");
//}
//int main()
//{
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print_arr(arr,sz);
//   return 0;
//

//#include<stdio.h>
//#include<stdlib.h>
//
//
//int cmp_int(const void*e1, const void* e2)
//{
//   return *(int*)e1 - *(int*)e2;
//}
//int print_arr(int arr[],int sz)
//{
//   int i=0;
//   for(i=0;i<sz;i++)
//   {
//      printf("%d",arr[i]);
//   }
//   printf("\n");
//
//}
//int main()
//{
//    int arr[]={9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	print_arr(arr,sz);
//
//   return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//struct Stu
//{
//   char name[20];
//   int age;
//};
////int cpm_stu_by_age(const void*e1, const void* e2)
////{
////   return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
////}
//int cpm_stu_by_name(const void*e1, const void* e2)
//{
//   return strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
//}
//void test1()
//{
//	struct Stu s[3]={{"zhangsan",15},{"lisi",30},{"wangwu",20}};
//	int sz=sizeof(s)/sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]),cpm_stu_by_name);
//}
//
//int main()
//{
//    test1();
//	return 0;
//}


#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void Swap(char*buf1, char*buf2, int width)
{
	int i = 0;
	for(i=0; i<width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void*base, int sz, int width, 
				 int (*cmp)(const void*e1, const void*e2))
{
	int i = 0;
	int j = 0;
	for(i=0; i<sz-1; i++)
	{
		for(j=0; j<sz-1-i; j++)
		{
			if(cmp((char*)base+j*width, (char*)base+(j+1)*width)>0)
			{
				Swap((char*)base+j*width, (char*)base+(j+1)*width, width);
			}
		}
	}
}

struct Stu
{
   char name[20];
   int age;
};
int cpm_stu_by_age(const void* e1, const void* e2)
{
   return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
//int cpm_stu_by_name(const void*e1, const void* e2)
//{
//   return strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);
//}
void test1()
{
	struct Stu s[3]={{"zhangsan",15},{"lisi",30},{"wangwu",20}};
	int sz=sizeof(s)/sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]),cpm_stu_by_age);
}

int main()
{
    test1();
	return 0;
}