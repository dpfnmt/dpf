#define _CRT_SECURE_NO_WARNINGS 1
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

#include<stdio.h>
#include<stdlib.h>


int cpm_stu_by_age(const void*e1, const void* e2)
{
   return *(int*)e1 - *(int*)e2;
}
struct Stu
{
   char name[20];
   int age;
};
void test1()
{
	struct Stu s[3]={{"zhangsan",15},{"lisi",30},{"wangwu",20}};
	int sz=sizeof(s)/sizeof(arr[s]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}


int print_arr(int arr[],int sz)
{
   int i=0;
   for(i=0;i<sz;i++)
   {
      printf("%d",arr[i]);
   }
   printf("\n");

}
int main()
{
    test1();
	print_arr(arr,sz);

   return 0;
}