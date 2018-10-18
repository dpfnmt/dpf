#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int i=0;
//	int ret =1;
//	int n = 1;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//	    ret  = ret*i;
//	}
//	printf("ret = %d\n" ,ret);
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
//
//	int n = 0;
//	int ret =1;
//     scanf("%d",&n);
//     ret = fac(n);
//	printf("ret=%d\n",ret);
//  return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret =1;
//	int sum = 0 ;
//	for(i=1; i<=5; i++)
//	{
//	  ret = ret*i;
//	  sum += ret; 
//	}
//	printf("sum=%d\n",sum);
//  return 0;
//}
//int main()
//{
//	char arr1[5] = {0,2,4,6,8};
//	char arr2[5] = {1,3,5,7,9};
//	int i=0;
//	int tmp=0;
//	for(i=0;i<5; i++)
//	{
//	  tmp =arr1[i];
//	  arr1[i]=arr2[i];
//	  arr2[i]=tmp;
//	}
//	for(i=0;i<5; i++)
//	{
//	   printf("%d",arr1[i]);
//	}
//	printf("\n");
//	for(i=0;i<5; i++)
//	{
//	  printf("%d",arr2[i]);
//	}
//    printf("\n");
//   return 0;
//}


//void print_arr(int arr[5] ,int sz)
//{
//	int i=0;
//   for(i=0; i<=sz; i++)
//   {
//     printf("%d ",arr[i]);
//   }
//   printf("\n");
//}
//int main()
//{
//	char arr1[5] = {0,2,4,6,8};
//	char arr2[5] = {1,3,5,7,9};
//	int i=0;
//	int tmp=0;
//	//int sz =sizeof(arr1)/sizeof(arr[0]);
//	for(i=0;i<5;i++)
//	{
//	  tmp =arr1[i];
//      arr1[i]=arr2[i];
//	  arr2[i]=tmp;  
//	}
//	print_arr(arr1,5);
//	print_arr(arr2,5);
//
//
//  return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//   printf("***************************\n");
//   printf("********    1.play  *******\n");
//   printf("********    0.exit  *******\n");
//   printf("***************************\n");
//}
//void game()
//{
//  int num=0;
//  int ret = rand()%100+1;
//  while(1)
//  {
//	  printf("请输入数字\n");
//	  scanf("%d",&num);
//	  if(num == ret)
//	  {
//	     printf("恭喜你猜对了\n");
//	  }
//	  else if(num > ret)
//	  {
//	    printf("猜大了\n");
//	  }
//	  else
//	  {
//	     printf("猜小了\n");
//	  }
//  }
//}
//int main()
//{
//	int input =0;
//	
//	srand((unsigned int)time(NULL));
//	do
//	{
//	   menu();
//	   printf("请选择:>");
//	   scanf("%d",&input);
//	   switch(input)
//	   {
//	   case 1:
//		   game();
//		   break;
//	   case 0:
//		   break;
//	   default:
//		   printf("很遗憾，输入错误\n");
//		   break;
//	   }
//
//	}while(input);
//   return 0;
//}

//int  print(int n)
//{
//   if(n>9)
//	   print(n/10);
//   printf("%d ",n%10);
//
//
//}
//int main()
//{
//	int num=0;
//	scanf("%d",&num);
//	print(num);
//  return 0;
//}
