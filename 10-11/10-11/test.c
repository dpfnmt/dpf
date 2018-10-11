#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int print_table(int line)
//{
//   int i =0;
//   for(i=1; i<=line; i++)
//   {
//     int j=0;
//	 for(j=1; j<=i; j++)
//	 {
//	   printf("%d*%d=%d ",i,j,i*j);
//	 }
//	 printf("\n");
//   }
//}
//int main()
//{
//	int line = 0;
//	scanf("%d",&line);
//	print_table(line);
//
//  return 0;
//}
//void  init(int arr[],int sz,int set)
//{
//   int i=0;
//   for(i=0; i<sz; i++)
//   {
//      arr[i] = set;
//   }
//}
//
//void Print(int* arr, int sz)
// {
// 	int i = 0;
// 	for(i=0; i<sz; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// 	printf("\n");
// }
//int main()
//{
//	int arr[]={11,2,3,4,5,6,7,8,9,0,1};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	init(arr,sz,1);
//	print(arr, sz);
//
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
//   int  n = 0;
//   int  ret = 0;
//   scanf("%d",&n);
//   ret = fac(n);
//   printf("ret = %d\n",ret);
//  return 0;
//}
//int main()
//{
//    int ret =1;
//	int i= 0;
//	int n= 0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//	    ret = ret*i;
//	}
//	printf("ret = %d\n",ret);
//  return 0;
// }
// 【  1234   输出  1 2 3 4 】
//void print(int n)
//{
//   if(n/9)
//        print(n/10);
//	   printf("%d ",n%10);
//}
//int main()
//{
//	int num =0;
//	scanf("%d",&num);
//	print(num);
//  return 0;
//}
//废弃那波束 慢；
//int  fib(int n)
//{
//   if(n<=2)
//	   return 1;
//   else
//	   return fib(n-1)+fib(n-2);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = fib(n);
//    printf("%d\n",ret);
//  return 0;
//}
// 废弃那波束  快速
//int fib(int n)
//{    
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//	//if(n <= 2)
//       // return 1;
//	//else
//	//{
//		//int i =0;
//	    for(i=2;i<n;i++)
//		{
//		    c = a+b;
//			a = b;
//			b = c;
//		}
//		return c;
//	//}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d\n", fib(n));
//
//}
//老师原码
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//
//	for(i=2; i<n; i++)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//}
//int is_prime(int n)
//{
//   int j = 0;
//   for(j=2; j<sqrt(n); j++)
//    {
//     if(n%j  == 0)
//	     return 0;
//	}
//   return 1;
//}
//int main()
//{
//	int i =0;
//	int count =0;
//	for(i=100; i<=200; i++)
//	{
//	   if(1 == is_prime(i))
//	   {
//		   count++;
//	      printf("%d\n",i);
//	   }
//	}
//	printf("count=%d\n",count);
//   return 0;
//}
//int is_prime(int n)
//{
//   int j = 0;
//   for(j=2; j<n; j++)
//    {
//     if(n%j  == 0)
//	    return  0;
//	}
//   return 1;
//}
//int main()
//{
//	int i =0;
//	int count =0;
//	for(i=100; i<=200; i++)
//	{
//	   if(1 == is_prime(i))
//	   {
//		   count++;
//	      printf("%d\n",i);
//	   }
//	}
//	printf("count=%d\n",count);
//   return 0;
//}
//int main()
//{
//	int i = 0;
//	int count =0;
//	for(i=100; i<=200; i++)
//	{
//	    int j = 0;
//		for(j=2;j<i;j++)
//		{
//		   if(i%j == 0)
//			   break;
//		}
//		if(j>=i)
//			count++;
//			printf("%d\n",i);
//		
//	}
//   printf("\ncount=%d\n",count);
//  return 0;
//}
//int main()
//{
//	int i =0;
//	int count=0;
//	for(i=100;i<=200; i++)
//	{
//	  if(i%2 == 1)
//		  count++;
//		  printf("%d\n",i);
//	}
//	printf("\ncount=%d\n",count);
//   return 0;
//}
//int main()
//{
//	int i=0;
//	int count =0;
//	for(i=1000; i<=2000;i++)
//	{
//	  if((0 == i%4)&&(0 != i%100)||(0 == i%400))
//	  {
//		  count++;
//	      printf("%d\n",i);
//	  }
//	}
//	printf("\ncount=%d\n",count);
//  return 0;
//}
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	char arr1[] = "welcome  to  xian";
//	char arr2[] = "*****************";
//	int left =0;
//	int right = strlen(arr1)-1;
//	while(left<=right)
//	{
//	   arr2[left]=arr1[left];
//	   arr2[right]=arr1[right];
//        printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//	   left++;
//	   right--;
//	
//	}
//  return 0;
//}
