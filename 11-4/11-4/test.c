#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<stdlib.h>
//void bubble_sort(int arr[],int sz)
//{
//    int i = 0;
//	for(i=0;i<sz-1;i++) //只需要8趟就可以结束;
//	{
//	   int j=0;
//	   for(j=0;j<sz-1-i;j++) //每趟回来就减少一个;
//	   {
//		  if(arr[j] > arr[j+1])
//		  {
//			int tmp = arr[j];
//		    arr[j] = arr[j+1];
//		    arr[j+1] = tmp;
//		  }
//	   }
//	}
//}
//
//void print_arr(int arr[], int sz) //把int arr写成了 char arr就完蛋了;
//{
//   int i =0;
//   for(i=0;i<sz;i++)
//   {
//      printf("%d",arr[i]);
//   }
//   printf("\n");
//}
//int main()
//{
//	int arr[]={9,8,7,6,5,4,3,2,1,0};
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    bubble_sort(arr,sz);
//	print_arr(arr,sz);
//  return 0;
//}
//#include<string.h>
//#include<assert.h>
//int strlen( char*str)
//{   
//	assert(str != NULL);
//    int count = 0;
//	while(*str  !='\0')
//	{
//	   count++;
//	   str++;
//	}
//	return count;
//}
//int main()
//{
//   char arr[]="abcdef";
//   int len=strlen(arr);
//   printf("len=%d\n",len);
//   return 0;
//}
//#include<string.h>
//#include<assert.h>
//char*my_strcpy(char*dest,const char*str)
//{
//	assert(str != NULL);
//    while(*str != '\0')
//	{
//		*dest = *str;
//	    dest++;
//		str++;
//	}
//	*dest = *str;
//	return dest;
//}
//int main()
//{
//	char arr[20]={0};
//	char *p="xi an";
//    my_strcpy(arr,p);
//	printf("%s\n",arr);
//   return  0;
//}