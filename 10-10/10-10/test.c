#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//void print_table(line)
//{
//   int i =0;
//   for(i = 1; i<=line; i++)
//   {
//        int j = 0;
//		for(j = 1;j<=i; j++)
//		{
//		  printf("%d*%d=%d ",i,j,i*j);
//		}
//		printf("\n");
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
//void Init(int arr[], int sz,int seat)
//{
//  int i=0;
//  for(i=1; i<=sz; i++)
//  {
//    arr[i] =seat; 
//  }
//}
//int main()
//{
//	int arr[]={11,2,3,4};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Init(arr,sz, 1);
//  return 0;
//}
//int is_leap_year(int year)
//{
//   if((0 == year%4)&&(0 != year%100))
//	   return 1;
//   if(0 == year%400)
//	   return 1;
//  
//	   return 0;
//}
//int main()
//{
//	int count= 0;
//	int year = 0;
//	for(year =1000; year<=2000; year++)
//	{
//	    if(1 == is_leap_year(year))
//		{
//		      count++;
//		  printf("%d ",year);
//		}
//	}
//	printf("\ncount=%d\n",count);
//  return 0;
//}
//int is_prime(int n)
//   {
//     int j = 0;
//	 for(j=2; j<sqrt(n); j++)
//	 {
//	     if(0 == n%j)
//		 return 0;
//	  }
//	 return 1;
//   }
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for(i=100; i<=200; i++)
//	{
//		if(1 == is_prime(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d ", count);
//
//	return 0;
//}
//int binare_search(int arr[],int k, int left, int right)
//{   
//	while(left<=right)
//	{
//      int mid = left+(right-left)/2;
//         if(arr[mid]>k)
//          {
//             right = mid-1;
//           }
//          else if(arr[mid]<k)
//           {
//             left = mid+1;
//           }
//           else
//           {
//             return mid;
//           }
//        }
//	return -1;
//}
//int main()
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret =binare_search(arr,k,0,sz-1);
//	if(ret == -1)
//	{
//	  printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d\n",ret);
//	}
// return 0;
//}
//int binare_search(int arr[], int k, int left,int right)
//{
//     while(left<=right)
//	 {
//	    int mid = left+(right-left)/2;
//		if(arr[mid] > k)
//		{
//		   right = mid - 1;
//		}
//		else if(arr[mid] < k)
//		{
//		   left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	 }
//  return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//    int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//    int ret=binare_search(arr, k ,0,sz-1);
//    if(ret == -1)
//	{
//	  printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了:%d\n",ret);
//	}
//  return 0;
//}