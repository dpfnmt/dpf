#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
//int main()
//{
//     int i=0;
//	 for(i=1; i<=9; i++)
//	 {
//	       int j=0;
//		   for(j=1; j<=i; j++)
//		   {
//			   printf("%d*%d=%d\t",i, j, i*j);
//		   }
//		    printf("\n");
//	 }
//  
//
//	
//  return 0;
//}
//int main()
//{     
//	char arr1[]= "wercome  to   taiyi";
//	char arr2[]= "###################";
//	 int left=0;
//     int right=strlen(arr1)-1;
//	 while( left<=right)
//	 {
//	    arr2[left]=arr1[left];
//	    arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	 }
//
//  return 0;
//}
//int main()
//{
//	 int i=0;
//	 double sum=0;
//	 int flag=1;
//	 for(i =1; i<=100; i++)
//	 {   
//		 sum+=flag*1.0/i;
//		   flag=-flag;
//	     }
//	 printf("sum=%lf\n",sum);
//   return 0;
//}
//int main()
//{
//   int i=0;
//   for(i=1; i<=100; i++)
//   {
//        if(9 == i%10)
//        printf("%d\n",i);
//     }
//     if(9 == i/10)
//	 {
//	    printf("%d\n",i);
//	 }
//
//  return 0 ;
//}
//int main()
//{ 
//	int arr1[5]={0,2,4,6,8};
//	int arr2[5]={1,3,5,7,9};
//	int tmp=0;
//	int i=0;
//	for(i=0; i<=5; i++)
//	{
//	      tmp=arr1[i];
//		  arr1[i]=arr2[i];
//		  arr2[i]=tmp;
//
//     }
//	for(i=0; i<=5; i++)
//	{
//		  printf(" %d",arr1[i]);
//	    
//	}
//	printf("\n");
//	for(i=0; i<=5; i++)
//	{
//	    
//		  printf(" %d",arr2[i]);
//	    
//	}
//		  
//
//
//  return 0;
//}

//void print_arr(int arr[5] , int sz)
//{
//       int i=0;
//	   for(i=0; i<sz; i++)
//        {
//	         printf("%d",arr[i]);    
//	    }
//	   printf("\n");
//}
//int main()
//{ 
//	int arr1[5]={0,2,4,6,8};
//	int arr2[5]={1,3,5,7,9};
//	int tmp=0;
//	int i=0;
//	int sz = sizeof(arr1)/sizeof(arr2[0]);
//	for(i=0; i<=5; i++)
//	{
//	      tmp=arr1[i];
//		  arr1[i]=arr2[i];
//		  arr2[i]=tmp;
//
//     }
//
//	   print_arr(arr1 , sz);
//	   print_arr(arr2 , sz);
//
//	/*for(i=0; i<=5; i++)
//	{
//		  printf(" %d",arr1[i]);
//	    
//	}
//	printf("\n");
//	for(i=0; i<=5; i++)
//	{
//	    
//		  printf(" %d",arr2[i]);
//	    
//	}
//		  */
//
//
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
//	int j=0;
//	int ret =1;
//	int sum=0;
//	for(j=1; j<=4; j++)
//	{
//	     ret= ret*j;
//		 sum+=ret;
//	}
//	printf("sum=%d\n",sum);
//  return  0;
//}
//void print_arr(int arr[5] ,int sz )
//{
//       int i=0;
//	   for(i=0; i<sz; i++)
//	   {
//	      printf("%d",arr[i]);
//	   }
//   printf("\n");  
//}
//int main()
//{
//	char arr1[5]={0,2,4,6,8};
//	char arr2[5]={1,3,5,7,9};
//	int tmp=0;
//	int i=0;
//	int sz=sizeof(arr1)/sizeof(arr2[0])-1;
//	for(i=0; i<5; i++)
//	{
//	   tmp= arr1[i];
//	   arr1[i] = arr2[i];
//	   arr2[i] = tmp;
//
//	}
//	print_arr(arr1,sz);
//	print_arr(arr2,sz);

	/*for(i=0; i<=5; i++)
	{
	   printf(" %d",arr1[i]);
	}
	printf("\n");
	for(i=0; i<=5; i++)
	{
	   printf(" %d",arr2[i]);
	}*/

 /* return 0; 
}*/
//int main()
//{
//
//	int n = 0;
//	int i= 0 ;
//	int ret=1;
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//	      ret=ret*i;
//    }
//	printf("ret=%d\n",ret);
//  return 0;
//}
//int main()
//{  
//	int i=0;
//    int ret=1;
//	int sum=0;
//	for(i=1; i<=4; i++)
//	{
//	   ret=ret*i;
//	   sum+=ret;
//	}
//	printf("sum=%d",sum);
//   return 0;
//}
//int main()
//{
//	char arr1="welcome   to   changan";
//	char arr2="######################";
//    int left=0;
//	int right = strlen(arr1)-1;
//    while(left<=right)
//	{
//	    arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		system("cls");
//		left++;
//		right--;
//	  }
//
//  return 0;
//}