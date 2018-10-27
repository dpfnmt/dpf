#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int count_one_bits(unsigned int value)
//{
//     int num =0;
//	 while(value)
//	 {
//	    if(value%2 == 1)
//		 num++;
//		value = value/2;
//	 }
//	 return num;
//}
//int main()
//{
//     int i =0;
//	int num =0;
//	printf("请输入一个正数:>");
//	scanf("%d\n",&i);
//	num = count_one_bits(i);
//	printf("num =%d\n",num);
//	 system("pause");
//    return 0;
//}



//int main()
//{
//	int i =0;
//	  int j =0;
//	  int num =0;
//	  char arr1[32] = {0};
//	  char arr2[32] = {0};
//      scanf("%d", &num);
//      for(i = 0; i < 32; i += 2)
//	   {
//		    arr1[j] = ((num >> i) & 1); 
//		          j++;
//	    }  
//	  for(i = 1,j=0; i < 32; i += 2)
//		{
//			 arr2[j] = ((num >> i) & 1);  
//			       j++;
//		 }
//		 printf("奇数位为："); 
//		 for (i = 15; i >= 0; i--)
//		 {
//			 printf("%d",arr1[i]);
//		 }
//		   printf("\n");
//		   printf("偶数位为：");  
//		  for (i = 15; i >= 0; i--)
//		  {
//			printf("%d",arr2[i]);
//		  }
//          printf("\n");
//   return 0;
//}



//int  print(int n)
//{
//   if(n<=9)
//	   printf("%d ",n);
//   else
//   {
//       print(n/10);
//       printf("%d ",n%10);
//   }
//
//}
//int main()
//{
//   int num=0;
//   printf("请输入一个数:>");
//   scanf("%d",&num);
//   print(num);
//   printf("\n");
//}



//void fib(int n,int m)
//{
//   int q =0;
//   int count =0;
//   q = n^m;
//   while(q)
//   {
//      q = q&(q-1);
//	  count++;
//   }
//   printf("count=%d\n",count);
//}
//int main()
//{
//   int n = 0;
//   int m = 0;
//   int count = 0;
//   printf("请输入两个整数:>");
//   scanf("%d %d",&n,&m);
//   fib(n,m);
//   system("pause");
//
//}