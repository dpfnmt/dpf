#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<windows.h>
#include<time.h>
//int main()
//{
//	int i=0;
//	int count =0;
//	for(i=1; i<=100; i++)
//	{
//	   if(i%10 == 9)
//	   {
//		   count++;
//	      printf("%d\n",i);
//	   }
//	   if(i/10 == 9)
//	   {    
//		   count++;
//		   printf("%d\n",i);
//	   }
//	}
//	printf("\ncount=%d\n",count);
// return 0;
//}
//int main()
//{
//	int a = 0;
//	int i=0;
//	int n =0;
//	int tmp =0;
//	int sum=0;
//	scanf("%d%d",&n,&a);
//	for(i=0;i<n;i++)
//	{
//	    tmp=tmp*10+a;
//	    sum += tmp;
//	}
//	printf("sum=%d\n",sum);
//  return 0;
//}
//int main()
//{
//	int i=0;
//	int flag =1;
//	double sum = 0;
//	for(i=1; i<=100;i++)
//	{
//	   sum += flag*1.0/i;
//       flag = -flag; 
//    }
//	printf("sum=%lf\n",sum);
//  return 0;
//}
//int main()
//{
//    int line =0;
//	int i=0;
//	scanf("%d",&line);
//	for(i=0; i<line; i++)
//	{
//	   int j=0;
//	   for(j=0;j<line-1-i;j++)
//	   {
//	       printf(" ");
//	   }
//	   for(j=0; j<2*i+1;j++)
//	   {
//	     printf("*");
//	   }
//	   printf("\n");
//	}
//	   for(i=0; i<line-1; i++)
//	{
//	   int j=0;
//	   for(j=0; j<=i;  j++)
//	   {
//	       printf(" ");
//	   }
//	   for(j=0; j<2*(line-1-i)-1;j++)
//	   {
//	     printf("*");
//	   }
//       printf("\n");  
//	}
//	
//   return 0;
//}
//int main()
//{ 
//	char arr1[5] = {1,3,5,7,9};
//	char arr2[5] = {0,2,4,6,8};
//	int tmp = 0;
//	int i=0;
//	int ret =0;
//	for(i=0; i<=5; i++)
//	{
//	   tmp = arr1[i];
//	   arr1[i] = arr2[i];
//	   arr2[i] = tmp;
//	}
//	for(i=0;i<5;i++)
//	{
//	   printf("%d",arr1[i]);
//	}
//	printf("\n");
//	for(i=0;i<5;i++)
//	{
//	   printf("%d",arr2[i]);
//	}
//	printf("\n");
//  //printf("arr1[i]=%d arr2[i]=%d\n",arr1[i].arr2[i]);
//  return 0;
//}
//int main()
//{
//	 
//	 int i=0;
//     for(i=1; i<=99999;i++)
//	{
//		int count =1;
//	   int tmp  = i;
//	   int sum =0;
//	   while(tmp/10)
//	   {
//	         count++;
//			 tmp =tmp/10;
//	   }
//	   tmp = i;
//	   while(tmp)
//	   {
//	       sum += pow(tmp%10,count);
//		   tmp = tmp/10;
//	   }
//	   if(sum == i)
//	   {
//	      printf("%d\n",i);
//	   }
//
//	}
//  return 0;	
//}
//int main()
//{    
//	int i = 0;
//	 int n = 0;
//	 int ret =1;
//     scanf("%d",&n);
//	 for(i=1; i<=n; i++)
//	 {
//	    ret = ret*i;
//	 }
//	 printf("%d\n",ret);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int sum =0;
//	int ret =1;
//	for(i=1; i<=3; i++)
//	{
//	   ret = ret *i;
//	   sum += ret;
//	}printf("sum = %d\n",sum);
//  return 0;
//}
//int main()
//{
//	char arr1[]="welcome  to  xian";
//	char arr2[]="*****************";
//    int left =0;
//	int right= strlen(arr1)-1;
//	while(left<=right)
//	{
//	   arr2[left]=arr1[left];
//	   arr2[right]=arr1[right];
//	   printf("%s\n",arr2);
//	   Sleep(1000);
//	   system("cls");
//	   left++;
//	   right--;
//
//	}
//   return 0;
//}