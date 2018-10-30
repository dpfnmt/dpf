#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//int count_one_bits(unsigned int value)
//{
//   int num =0;
//   while(value)
//   {
//     if(value%2 == 1)
//	 num++;
//	 value = value/2;
//   }
//   return num;
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d",&i);
//    num = count_one_bits(i);
//     printf("num = %d\n",num);
//   return 0;
//}


//int fic(int n)
//{
//   int a =0;
//   int b=0;
//   int c =0;
//   scanf("%d %d",&a,&b);
//   while( c =a%b)
//   {
//  
//	a = b;
//	b = c;
//   }
//   printf("n=%d\n",b);
//}
//int main()
//{
//	int n=0;
//	fic(n);
//	return 0;
//}

//#define N 6
//int main()
//{
//    int i,j;
//    int a[N][N] = {0};
//   for(i=0; i<N; i++)
//   {
//       a[i][0] = 1;
//	   a[i][i] = 1;
//   }
//   for(i =2;i<N;i++)
//   {
//     for(j=1;j<i;j++)
//	 {
//	    a[i][j]=a[i-1][j-1]+a[i-1][j];
//	 }
//   }
//   for(i=0;i<N;i++)
//   {
//        for(j=0;j<4*(N-i)/2;j++)
//		{
//		    printf(" ");
//		}
//		for(j=0;j<=i;j++)
//		{
//		    printf("%4d",a[i][j]);
//		}
//		printf("\n");
//   }
//   return 0;
//}

//int main()
//{
//	int line =0;
//	int i=0;
//	scanf("%d",&line);
//	for(i=0;i<line;i++)
//	{
//	    int j=0;
//		for(j=1;j<=line-1-i;j++)
//		{
//		    printf(" ");
//		}
//		for(j=0;j<2*i+1;j++)
//		{
//		    printf("*");
//		}
//		printf("\n");
//	}
//	for(i=0;i<line-1;i++)
//	{
//	    int j=0;
//		for(j=0;j<=i;j++)
//		{
//		     printf(" ");
//		}
//		for(j=0;j<2*(line-1-i)-1;j++)
//		{
//		   printf("*");
//		}
//		printf("\n");
//	}
//   return 0;
//}

//#include<math.h>
//int main()
//{
//  int i=0;
//  for(i=0;i<=9999;i++)
//  {
//       int count = 1;
//	   int tmp =i;
//	   int sum =0;
//	   while(tmp/10)
//	   {
//		   count++;
//	       tmp = tmp/10;
//	   }
//	   tmp = i;
//	   while(tmp)
//	   {
//		   sum += pow(tmp%10,count);
//	       tmp = tmp/10;
//		 
//	   }
//	   if(sum ==i)
//	   {
//	      printf("%d\n",i);
//	   }
//  
//  }
//}

#include<math.h>
int main()
 {  
     int i=0;
	 for(i=1; i<=99999; i++)
	 {
	         int count = 1;
		 int tmp = i;
               int sum = 0;
		 while(tmp/10)
		 {
		       count++;
			   tmp = tmp/10; 
	     } 
	     tmp = i;
		 while(tmp)
		 {
		      sum += pow(tmp%10,count);
			   tmp = tmp/10;
		 }
           if( sum == i)
		   {
		     printf("%d\n",i);
		   }
        
     }    
     return 0;
  }