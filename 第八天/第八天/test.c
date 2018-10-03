#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr[5]={0};
//	int i= 0;
//	int max= 0;
//	for(i= 0; i<=5; i++)
//	{
//	  scanf("%d",&arr[i]);
//	}
//	
//	for(i=0; i<=5; i++)
//	{
//	    if(arr[i]>max)
//
//			max=arr[i];
//	}
//	printf("max=%d\n",max);
//   return 0;
//}
//int main()
//{
//    int a = 24;
//	int b = 36;
//	int c = 0;
//	while( 0 != a%b)
//	{
//		 c = a%b;
//         a = b;
//		 b = c;
//	
//
//     }  
//
//	printf("%d\n",b);
//
//  return 0;
//}
//int main()
//{
//	   int a= 2;
//	   int b =4;
//	   int c =6;
//	   if(a<b)
//	   {
//	     int tmp =a;
//		 a = b;
//		 b = tmp;
//       }
//	   if(a<c)
//	   {
//	     int tmp =a;
//		 a = c;
//		 c = tmp;
//       }
//	   if(b<c)
//	   {
//	     int tmp =b;
//		 b = c;
//		 c = tmp;
//       }
//
//	   printf("%d%d%d\n",a ,b,c);
// return 0;
//}
//int main()
//{
//    int a= 10;
//	int b= 20;
//	if(a<b)
//	{
//	   int tmp =a;
//	   a = b;
//	   b= tmp;
//       printf("a=%d\n",a);
//	}
//       if(b>a)
//	{
//	   int tmp =a;
//	   a = b;
//	   b= tmp;
//	}
//printf("b=%d\n",b);
//return 0;
//}
//int main()
//{
//     int a= 0;
//	 int b= 0;
//     scanf("%d%d",&a, &b);
//	 printf("a=%d  b=%d\n",a,b);
//      a=a^b;
//	  b=a^b;
//	  a=a^b;
//	/* a=a+b;
//	 b= a-b;
//	 a=a-b;*/
//	 printf("a=%d  b=%d\n",a,b);
//	
//   return 0;
//}
//int main()
//{  
//	int i =0;
//
//	for(i=1; i<=100; i++)
//	{ 
//		if(9 == i%10)
//	    printf("%d\n",i);
//     }
//	if(9 == i/10)
//	{
//      printf("%d\n",i);
//	}
//  	
//  return 0;
//}
//int main()
//{
//
//	int arr1[5]={0,2,4,6,8};
//	int arr2[5]={1,3,5,7,9};
//	int tmp=0;
//	int i=0;
//	for(i=0; i<5; i++)
//	{
//	    tmp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=tmp;
//	}
//	for(i=0; i<5; i++)
//	{
//		printf(" %d",arr1[i]);
//	}
//	printf("\n");
//	for(i=0; i<5; i++)
//	{
//		printf(" %d",arr2[i]);
//	}
//	printf("\n");
//
//   
//
//return 0;
//}
//void print_arr(int arr[5]  ,int sz)
//{
//     int i=0;
//	 for(i=0; i<=sz; i++)
//	 {
//	    printf("%d",arr[i]);
//	 }
//   printf("\n");
//}
//int main()
//{
//
//	int arr1[5]={0,2,4,6,8};
//	int arr2[5]={1,3,5,7,9};
//	int tmp=0;
//	int i=0;
//	for(i=0; i<5; i++)
//	{
//	    tmp=arr1[i];
//		arr1[i]=arr2[i];
//		arr2[i]=tmp;
//	}
//    print_arr(arr1,5);
//    print_arr(arr2,5);
//
//	/*for(i=0; i<5; i++)
//	{
//		printf(" %d",arr1[i]);
//	}
//	printf("\n");
//	for(i=0; i<5; i++)
//	{
//		printf(" %d",arr2[i]);
//	}
//	printf("\n");
//
//   */
//	
//return 0;
//}
int main()
{
     int i=0;
	 double sum=0;
	 int flag=1;
	 for(i=1; i<=100 ;i++)
	 {
	      sum+=flag*1.0/i;
		  flag=-flag;
	 }
   printf("%lf\n",sum);
 return 0;
}