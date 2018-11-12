#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int fib(n)
//{
//    int i =0;
//	for(i =1;i<=n;i++)
//	{
//	    int j=0;
//		for(j=1;j<=i;j++)
//		{
//		   printf("%d*%d=%2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//    scanf("%d",&n);
//	fib(n);
//  return 0;
//}
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[]="hello xian";
//	char arr2[]="**********";
//	int left = 0;
//	int right =strlen(arr1)-1;
//	while(left<=right)
//	{
//	   arr2[left]=arr1[left];
//	   arr2[right]=arr1[right];
//	   printf("%s\n",arr2);
//	   Sleep(1000);
//	   system("cls");
//	   left++;
//	   right--;
//	}
//    return 0;
//}
//int my_strlen(char *str)
//{
//   if(*str == '\0')
//	   return 0;
//   else
//	   return 1+my_strlen(str+1);
//}
//
//int main()
//{
//	char arr[]="abcdef";
//	char *p = {0};
//	int ret=my_strlen(arr,p);
//	printf("ret=%d\n",ret);
//	return 0;
//}

 int my_strlen(char *str)
{
   /*if(*str == '\0')
	   return 0;
   else
	   return 1+my_strlen(str+1);*/
//	int count =0;
//     while(*str != '\0')
//	 {
//	    count++;
//		str++;
//	 }
//     return count;
// }
//
//
//
//int main()
//{
//	char arr[]="abcdef";
//	char *p = {0};
//	int ret=my_strlen(arr,p);
//	printf("ret=%d\n",ret);
//	return 0;
//}
#include<string.h>
char*my_strcpy(char* dest,const char* str)
{
	int *ret=dest;
     while(*str != '\0')
	 {
		 *dest = *str;
	    dest++;
		str++;
	 }
	  *dest = *str;
	 return dest;
}
int main()
{
	char arr[20]={0};
	char *p = "xian";
	my_strcpy(arr,p);
    printf("%s\n",arr);
  return 0;
}