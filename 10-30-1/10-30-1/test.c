#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//i/*nt count_one_bits(unsigned int value)
//{
//   int num =0;
//   while(value)
//   {
//       if(value%2 == 1)
//	      num++;
//	   value = value/2;
//   }
//   return num;
//}
//int main()
//{
//   int i=0;
//   int num =0;
//   printf("请输入一个整数:>");
//   scanf("%d",&i);
//   num = count_one_bits(i);
//   printf("num=%d\n",num);
//   return 0;
//}*/


//int fib(int n,int m)
//{
//	int q =0;
//	int count =0;
//    q = n^m;
//	while(q)
//	{
//	   q = q&(q-1);
//	   count++;
//	}
//	printf("count=%d\n",count);
//}
//int main()
//{
//	int n=0;
//	int m=0;
//	int count =0;
//	scanf("%d %d",&n,&m);
//	fib(n,m);
//   return 0;
//}

#define N 10
int main()
{
	int a[N][N]={0};
	int i =0;
	for(i=0;i<N;i++)
	{
	   a[i][0] =1;
	   a[i][i] =1; 
	}
   for(i=2;i<N;i++)
   {
	   int j= 0;
	   for(j=0;j<=i;j++)
	   {
         a[i][j] = a[i-1][j-1]+a[i-1][j];
	   }
   }
   for(i=0;i<N;i++)
   {
	   int j=0;
	   for(j=0;j<5*(N-i)/2;j++)
	   {
	      printf(" ");
	   }
		   for(j=0;j<=i;j++)
	   {
	       printf("%5d",a[i][j]);
	   }
	   printf("\n");
   }
  return 0; 
}
