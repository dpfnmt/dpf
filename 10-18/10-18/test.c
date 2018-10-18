#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int n=0;
//	int i=0;
//	int ret =1;
//	scanf("%d",&n);
//	for(i=1;i<n;i++)
//	{
//	  ret = ret*i;
//	}
//	printf("ret = %d\n",ret);
//  return 0;
//}
//int main()
//{  
//    int n=0;
//	int i=0;
//	int ret=1;
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//	       ret=ret*i;
//	}
//     printf("ret=%d\n",ret);
//  return 0;
//}
//int main()
//{
//	int i=0;
//	int ret=1;
//	int sum = 0;
//	
//	for(i=1; i<=5;i++)
//	{
//	 ret = ret*i;
//	  sum += ret;
//	}
//	printf("sum= %d\n",sum);
//  return 0;
//}

//int fac(int n)
//{
//   if(n<=1)
//	   return 1;
//   else
//	   return n*fac(n-1);
//}
//int main()
//{
//	int n=0;
//	int ret =1;
//	scanf("%d",&n);
//     ret = fac(n);
//	 printf("ret=%d\n",ret);
//  return 0;
//}

#include<string.h>
#include<windows.h>
int  main()
{
	char arr1[] = "********************";
	char arr2[] = "welcome   to    xian";
	int left =0;
	int right = strlen(arr1)-1;
	//int sz = sizeof(arr)/sizeof(arr[0]);
	while(left<=right)
	{
	  arr2[left] = arr1[left];
	  arr2[]= arr1[right];
      printf("%s\n",arr2);
	  Sleep(1000);
	  left++;
	  right--;
	}
    return 0;
}
