#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int strlen(char arr[])
//{
//   if(*arr == 0)
//	   return 0;
//   else
//	   return 1 + strlen(arr+1);
//}
//int main()
//{
//	char arr[]="abcdef";
//	printf("%d\n",strlen(arr));
//  return 0;
// }
//
//int main()
//{
////int arr[][4]={1,2,3,4};
//int arr[3][4]={0};
//int i =0;
//int j =0;
//for(i=0;i<=3;i++)
//{
//   for(j=0; j<=4;j++)
//   {
//      arr[i][j]=i*4+j+1;
//   }
//   printf("\n");
//}
//return 0;
//}

// int main()
//{
//   //int arr[][4]={1,2,3,4};
//    int arr[3][4]={0};
//    int i =0;
//    int j =0;
//	int * p =&arr[0][0];
//    for(i=0;i<=3;i++)
//      {
//         for(j=0; j<=4;j++)
//          {
//			   arr[i][j]=i*4+j+1;
//           }
//	   }
//	for(i=0; i<12;i++)
//	{
//	  printf("%d",*(p+i));
//	}
//	printf("\n");
//
//	return 0;
// }




//void bubble_sort(int arr[],int sz)
//{
//    int i=0;
//	for(i=0;i<sz-1;i++)
//	{
//	   int j=0;
//	   int flag =0;
//	   for(j=0;j<sz-1-i;j++)
//	   {
//	      if(arr[j]>arr[j+1])
//		  {
//		    int tmp =arr[j];
//			arr[j]= arr[j+1];
//			arr[j+1] = tmp;
//			flag =1;
//		  }
//	    }
//		  if(flag == 0);
//	      break;
//	}
//
//}
//int print_arr(int arr[], int sz)
//{
//   int i=0;
//   for(i=0;i<sz;i++)
//   {
//     printf("%d ",arr[i]);
//   }
//   printf("\n");
//}
//int main()
//{
//	 int arr[]={1,2,3,4,5,6,7,8,9};
//     int sz =sizeof(arr)/sizeof(arr[0]);
//     print_arr(arr,sz);
//	 bubble_sort(arr,sz);
//	 print_arr(arr,sz);
//   return 0;
//}


//这个就不对啊 ，老师怎么说的啊！！！！
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	冒泡排序的趟数
//	for(i=0; i<sz-1; i++)
//	{
//		int j = 0;
//		int flag = 0;
//		for(j=0; j<sz-1-i; j++)
//		{
//			一对元素的比较
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 1;
//			}
//		}
//		if(flag == 0)
//			break;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = {0,1,2,3,4,5,6,7,8,9};
//
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}

//#include<string.h>
//struct Student 
//{
//  char name[20];
//  int age;
//  char sex[5];
//};
//int main()
//{
//   char*p="abcdef";
//  //strcpy(s.name,"zhangsan");
//   s.name="zhangsan";
//  s.age = 20;
//  //strcpy(s.sex,"男");
//   s.sex= "男";
//printf("%s %d %s\n",s.name,s.age,s.sex);
//
//    return 0;
//}

#include <stdio.h>

#include <string.h>

//
//½á¹¹Ìå
//
struct Student
{
	char name[20];
	int age;
	char sex[5];
};
//int / float
int main()
{
	//int a;
	char* p = "abcdef";//

	//struct Student s = {"lisi", 23, "男"};
	//struct Student* ps = &s;
	//printf("%s\n", (*ps).name);
	//printf("%s %d %s\n", ps->name,ps->age,ps->sex);

	//s.name = "zhangsan";
	strcpy(s.name, "zhangsan");
	s.age = 20;
	//s.sex = "男";
	strcpy(s.sex, "男");
	printf("%s %d %s\n", s.name, s.age, s.sex);
	return 0;
}