#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int n =0;
//	int ret =1;
//	int i=0;
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//	     ret =ret*i;
//	}
//	printf("ret=%d",ret);
//  return 0;
//}
//int main()
//{
//	int i=0;
//	int ret =1;
//	int sum=0;
//	for(i=1; i<=5; i++)
//	{
//	    ret = ret*i;
//		sum += ret;
//	}
//	printf("sum=%d\n",sum);
//  return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//      printf("**************************************\n");
//      printf("***********      1.play    ***********\n");
//      printf("***********      0.exit    ***********\n");
//      printf("**************************************\n");
//}
//void game()
//{
//     int num = 0;
//	 int ret =rand()%10000+1;
//	 while(1)
//	 {
//		 printf("请输入数字:>");
//		 scanf("%d",&num);
//		 if(num == ret)
//		 {
//		     printf("恭喜答对了\n");
//			 break;
//		 }
//		 else if( num > ret)
//		 {
//		      printf("猜大了\n");
//		 }
//		 else
//		 {
//		     printf("猜小了\n");
//		 }
//	 }
//   
//}
//int main()
//{
//    int input =0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//	        menu();
//			 printf("请选择:>");
//		   scanf("%d",&input);
//		   switch(input)
//		   {
//		   case 1:;
//				      game();
//					  break;
//		   case 0 :;
//				     break;
//		   default :;
//				printf("选择错误\n");
//				break;
//		   }
//	}
//	while(input);
//  return 0;
//}
//int main()
//{
//      int i=0;
//	  char password[20]={0};
//	  for(i=1; i<=3; i++)
//	  {
//		  printf("请输入密码:>");
//		  scanf("%s",&password);
//		  if(0 == strcmp(password,"123456"))
//		  {
//		       break;  
//		  }
//		  else
//		  {
//		       printf("密码输入有误，请重新输入\n");
//		  }
//	  }
//	  if(i<=3)
//	  {
//	       printf("登陆成功\n");
//	  }
//	  else
//	  {
//	      printf("退出程序\n");
//	  }
//	return 0;
//}
//int BinarySearch(int arr[], int key, int sz)
//{
//	int left = 0;
//	int right = sz-1;
//
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//		if(arr[mid] < key)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid] > key)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 17;
//	int ret = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	/*ret = BinarySearch(arr, key, sz);
//	if(ret == -1)
//		printf("找不到\n");
//	else
//		printf("找到了：%d\n", ret);*/
//	int left = 0;
//	int right = sizeof(arr)/sizeof(arr[0])-1;
//
//	//int mid = (left+right)/2;
//	while(left<=right)
//	{
//		int mid = left+(right-left)/2;
//
//		if(arr[mid] < key)
//		{
//			left = mid+1;
//		}
//		else if(arr[mid]>key)
//		{
//			right = mid-1;
//		}
//		else
//		{
//
//			break;
//		}
//	}
//	//
//	if(left<=right)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	/*char arr1[20]={0};*/
//	char arr[] = "hello  xian";
//	memset(arr ,'*',5);
//  /*  strcpy(arr1,arr2);*/
//	printf("%s\n",arr);
//	return 0;
//
//}
//int main()
//{
//	int i = 0;
//	for(i=1; i<=100; i++)
//	{
//	    if(9 == i%10)
//			printf("%d\n",i);
//	}
//	if(9 == i/10)
//	{
//	   printf("%d\n",i);
//	}
//   return 0;
//}
//int main()
//{
//	int i = 0;
//	int flag = 1;
//  double sum=0;
//	for(i=1; i<=100; i++)
//	{
//	     sum += flag*1.0/i;
//		flag=-flag;
//	}
//	printf("sum=%lf\n",sum);
//  return 0;
//}
//int main()
//{
//	char arr1[5]={0,2,4,6,8};
//	char arr2[5]={1,3,5,7,9};
//	int i = 0;
//	int tmp = 0;
//	for(i=0; i<5; i++)
//	{
//	    tmp = arr1[i];
//		arr1[i]=arr2[i];
//	    arr2[i]= tmp;
//	}
//	for(i=0; i<5; i++)
//	{
//	   printf("%d",arr1[i]);
//	}
//	printf("\n");
//	for(i=0; i<5; i++)
//	{
//	   printf("%d",arr2[i]);
//	}
//	printf("\n");
//
//  return 0;
//}
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d",&line);
//	for(i=0; i<line; i++)
//	{
//	   int j =0;
//	   for(j=0; j<line-1-i; j++)
//	   {
//	       printf(" ");
//	   }
//	   for(j=0; j<2*i+1; j++)
//	   {
//	      printf("*");
//	   }
//	   printf("\n");
//	}
//	for(i=0; i<line-1; i++)
//	{
//	   int j =0;
//	   for(j=0; j<=i; j++)
//	   {
//	       printf(" ");
//	   }
//	   for(j=0; j<2*(line-1-i)-1; j++)
//	   {
//	      printf("*");
//	   }
//	   printf("\n");
//	}
//  return 0;
//}
//int main()
//{
//	int i=0;
//	int n = 0;
//    int tmp = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//	     tmp = tmp*10+2;
//		 sum += tmp;
//	}
//	printf("sum=%d\n",sum);
//  return 0;
//}
//int main()
//{
//	int i = 0;
//	
//	for(i=1; i<=9999; i++)
//	{
//	    int  count = 1;
//		int tmp = i;
//		int sum =0;
//		while(tmp/10)
//		{
//		     count++;
//			 tmp= tmp/10;
//		}
//		tmp = i;
//		while(tmp)
//		{
//		    sum += pow(tmp%10,count);
//			tmp =tmp/10;
//		}
//		if(sum == i)
//		{
//		   printf("%d\n",i);
//		}
//	}
//  return 0;
//}