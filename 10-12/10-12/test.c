#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i =0;
//	int count = 0;
//	for(i=1000; i<=2000; i++)
//	{
//	     if((0 == i%4)&&(0 != i%100))
//		 {
//			 count++;
//		   printf("%d\t",i);
//		 }
//		 if(0 == i%400)
//		 { 
//			 count++;
//		    printf("%d\t",i);
//		 }
//	}
//     printf("%d\n",i);
//	 printf("\ncount=%d\n",count);
// return 0;
//}
//int is_leap_year(int i)
//{
//   if((0 == i%4)&&(0 != i%100))
//	   return 1;
//   if(0 == i%400)
//	   return 1;
//   return 0;
//}
//int main()
//{
//	 int i = 0;
//	 int count =0;
//	 for(i=1000; i<=2000; i++)
//	 {
//	   if(1 == is_leap_year(i))
//	   {
//		   count++;
//	      printf("%d\t",i);
//	   }
//	 }
//	 printf("\ncount=%d\n",count);
//   return 0;
//}
//int main()
//{
//	int i=0;
//	for(i=1; i<=9; i++)
//	{
//	   int j = 0;
//	   for(j=1; j<=i; j++)
//	   {
//	    printf("%d*%d=%d  ",i,j,i*j);
//	    }
//	   printf("\n");
//	}
//   return 0;
//}
//int is_prime(int line)
//{
//    int i =0;
//	for(i=1; i<=line;i++)
//	{
//	     int j=0;
//		 for(j=1;j<=i;j++)
//		 {
//		    printf("%d*%d=%d ",i, j, i*j);
//		 }
//		 printf("\n");
//	}
//}
//int main()
//{
//	int line =0;
//	int ret = 0;
//	scanf("%d",&line);
//	ret=is_prime(line);
//
//  return 0;
//}
//int main()
//{
//	int a =  10;
//	int b =  20;
//	int sum =0;
//	sum =a+b;
//	printf("sum=%d\n",sum);
//   return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = 4;
//	int c = 8;
//    if(a<b)
//	{
//	  int tmp = a;
//	  a = b;
//	  b = tmp;
//	}
//	 if(a<c)
//	{
//	  int tmp = a;
//	  a = c;
//	  c = tmp;
//	} if(b<c)
//	{
//	  int tmp = b;
//	  b = c;
//	  c = tmp;
//	}
//	printf("%d %d %d",a,b,c);
//   return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp =0;
//	scanf("%d%d",&num1, &num2);
//	printf("num1=%d num2=%d\n",num1,num2);
//	num1=num1^num2;
//	num2=num1^num2;
//	num1=num1^num2;
//	/*num1=num1+num2;
//	num2=num1-num2;
//	num1=num1-num2;*/
//	/*tmp =num1;
//	num1=num2;
//	num2=tmp;*/
//	printf("num1=%d num2=%d\n",num1,num2);
// return 0;
//}
//#include<math.h>
//int main()
//{
//	int i =0;
//	int count =0;
//	for(i=100; i<=200;i++)
//	{
//		int j=0;
//		//for(j=2;j<i/2;j++)
//		for(j=2;j<=sqrt(i);j++)
//		{
//		  if(i%j == 0)
//		  break;
//		}
//		if(j>=i/2)
//		{
//			count++;
//		   printf("%d ",i);
//		}
//	  /* if(i%2 == 1)
//	   {
//	     printf("%d",i);
//	   }*/
//	}
//	printf("%d\n",i);
//	printf("\ncount=%d\n",count);
//  return 0;
//}
//int main()
//{
//	int a = 18;
//	int b = 36;
//	int c=0;
//	//if(a%b != 0)
//	if(c=a%b)
//
//	{
//	   //c=a%b;
//	   a = b;
//	   b = c;
//	}
//	printf("%d\n",b);
//   return 0;
//}
//int main()
//{
//	int arr[10]={0};
//	int i=0;
//	int max =0;
//	for(i =0;i<10;i++)
//	{
//	  scanf("%s\n",arr[i]);
//	}
//	max =arr[0];
//	for(i=1; i<10; i++)
//	{
//	   if(arr[i]>max)
//		   max=arr[i];
//	}
//	printf("max=%d",max);
//
//  return 0;
//}
//#include<string.h>
//#include<windows.h>
//int main()
//{
//	
//	char arr1[]="welcome to xian";
//	char arr2[]="***************";
//	int left =0;
//	int right =strlen(arr1)-1;
//   // in sz=sizeof(arr)/sizeof(arr[0]);
//	while(left<=right)
//	{
//		
//	  arr2[left]=arr1[left];
//	  arr2[right]=arr1[right];
//	  printf("%s\n",arr2);
//	  Sleep(1000);
//	  system("cls");
//	  left++;
//	  right--;
//	}
//
//  return 0;
//}
//int main()
//{
//	int i =0;
//	int ret =1;
//		int n=0;
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//	    ret = ret * i;
//	}
//	printf("ret = %d\n",ret);
//  return 0;
//}
//int fac(int n)
//{
//   if(n<=1)
//      return 1;
//   else
//      return n*fac(n-1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret=fac(n);
//		printf("ret = %d\n",ret);
//   return 0;
//}
//int print(int num)
//{
//   if(num/9)
//	   print(num/10);
//	   printf("%d ",num%10);
//}
//int main()
//{
//	int num =0;
//	scanf("%d",&num);
//	print(num);
//  return 0;
//} 
//int fib(int n)
//{
//   if(n<=2)
//	   return 1;
//   else
//	   return fib(n-1) + fib(n-2);
//}
//int main()
//{
//	int n = 0;
//	int ret= 0;
//	scanf("%d",&n);
//	ret = fib(n);
//	printf("%d\n",ret);
//   return 0;
//}
//int fib(int n)
//{
//    int a = 1;
//	int b = 1;
//	//int c = 0;
//	//1 1 2 3 5 8 13 21 34 .....
//	int c = 1;
//	int i = 0;
//	for(i=2; i<n;i++)
//	{
//	   c = a+b;
//	   a = b;
//	   b = c;
//	}
//	return c;
//		/*if(n<=2)
//			return 1;
//		else
//		{
//		    int i = 0;
//			for(i=2;i<=n;i++)
//			{
//			   return fib(n-1)+fib(n-2);
//			}
//		}*/
//
//}
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	printf("%d\n",fib(n));
//  return 0;
//}
//int main()
//{
//	int i =0;
//	int count=0;
//	for(i=1000; i<=2000;i++)
//	{
//	   if((0 == i%4)&&(0 != i%100))
//	   {
//		   count++;
//	      printf("%d ",i);
//	   }
//	   if(0 == i%400)
//	   {
//		   count++;
//	      printf("%d ",i);
//	   }
//	 
//	}
//	printf("\ncount=%d\n",count);
//  return 0;
//}
//int is_leap_year(int year)
//{
//   //if((0 == year%4)&&(0 != year%100)||(0 == year%400))
//	return((0 == year%4)&&(0 != year%100)||(0 == year%400));
//	   //return 1;
//   //else if(0 == year%400)
//	  // return 1;
//   //else 
//	   //return 0;
//}
//int main()
//{
//	int year = 0;
//	int count=0;
//		for(year =1000; year<=2000;year++)
//		{
//		   if(1 == is_leap_year(year))
//		   {
//			   count++;
//			   printf("%d ",year);
//		   }
//		}
//		printf("\ncount=%d\n",count);
//   return 0;
//}