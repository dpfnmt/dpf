#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int count_one_bits(unsigned int value)
//{
//   int num =0;
//   while(value)
//   {
//      if(value%2 == 1)
//	    num++;
//        value = value/2;
//   }
//   return num;
//}
//int main()
//{
//   int i =0; 
//   int num =0;
//   printf("请输入一个整数:>");
//   scanf("%d",&i);
//   num = count_one_bits(i);
//   printf("num = %d\n",num);
//   return 0;
//}


//void print(int n)
//{
//   if(n<=9)
//	  printf("%d ",n);
//   else
//   {
//       print(n/10);
//	   printf("%d ",n%10);
//   }
//  
//}
//int main()
//{
//     int num =0;
//	
//	scanf("%d",&num);
//	print(num);
//	//printf("%d\n");
//	printf("\n");
//   return 0;
//}

//void print(int n)
//{
//    if(n<=9)
//		printf("%d ",n);
//	else
//	{
//	   print(n/10);
//		   printf("%d ",n%10);
//	}
//
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	print(num);
//	printf("\n");
//   return 0;
//}


int count_one_bits(unsigned int value)
{
   int num =0;
   while(value)
   {
       if(value%2 == 1)
	      num++;
	   value = value/2;
   }
   return num;
}
int main()
{
   int i=0;
   int num =0;
   printf("请输入一个整数:>");
   scanf("%d",&i);
   num = count_one_bits(i);
   printf("num=%d\n",num);
   return 0;
}