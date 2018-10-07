#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i=0;
//	int n=0;
//	int ret =1;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//	     ret = ret*i;
//		 
//	}
//	printf("ret=%d\n", ret);
//   return 0;
//}
//int main()
//{
//	int i=0;
//	int ret = 1;
//	int sum = 0;
//	for(i=1; i<=5; i++)
//	{
//          ret= ret*i;
//		  sum += ret;
//
//  	}
//	printf("sum=%d\n",sum);
//  return 0;
//}
//int main()
//{
//	int i=0;
//	int tmp =i;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for(i=1; i<=n; i++)
//	{
//	     tmp = tmp*10+2;
//		 sum += tmp;
//	}
//    printf("sum=%d\n",sum);
//  return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//void menu()
//{
//     printf("*******************************************\n");
//     printf("***********      1.play      **************\n");
//     printf("***********      0.exit      **************\n");
//     printf("*******************************************\n");
//}
//void game()
//{
//     int num = 0;
//	 int ret = rand()%100+1;
//	 while(1)
//	 {
//		 printf("请输入数字:>");
//		 scanf("%d",&num);
//		 if(num == ret)
//		 {
//		    printf("恭喜猜对了\n");
//			break;
//		 }
//		 else if(num > ret)
//		 {
//		    printf("猜大了\n");
//          }
//		 else
//		 {
//			 printf("猜小了\n");
//		 }
//	 }
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入:>");
//	    scanf("%d",&input);
//	    switch(input)
//	    {
//		case 1 :;
//		            game();
//					break;
//		case 0 :;
//	                break;
//		default:;
//			printf("选择错误\n");
//			break;
//	}
//} while(input);
//  return 0;
//}
//#include<string.h>
//int main()
//{
//	  int i =0;
//	  char password[20]={0};
//	  for(i=1; i<=3;i++)
//	  {
//		  printf("请输入密码:>");
//		  scanf("%s",password);
//		  if(0 == strcmp(password, "123456"))
//		  {
//		      break;
//		  }
//		  else
//		  {
//		      printf("密码输入错误，请重新输入！\n");
//		  }
//	  }
//	  if(i<3)
//	  {
//	      printf("登录成功\n");
//	  }
//	  else
//	  {
//	     printf("退出程序\n");
//	  }
//   return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=1; i<=9999; i++)
//	{
//	   int count = 1;
//	   int sum = 0;
//	   int tmp = i;
//	   while(tmp/10)
//	   {
//	         count++;
//			 tmp = tmp/10;
//	   }
//	   tmp = i;
//	   while(tmp)
//	   {
//	       sum += pow(tmp%10,count);
//		   tmp = tmp/10;
//	   }
//	   if(sum == i)
//	   {
//	       printf("%d\n",i);
//	   }
//	}
//   return 0;
//}
//int main()
//{
//	int i = 0;
//	int line = 0;
//	scanf("%d",&line);
//	for(i=0; i<=line; i++)
//	{
//	   int  j = 0;
//	   for(j = 0; j<line-1-i; j++)
//	   {
//	      printf(" ");
//	   }
//	   for(j = 0; j<2*i+1; j++)
//	   {
//	      printf("*");
//	   }
//	   printf("\n");
//	}
//	for(i=0; i<=line-1;i++)
//	{
//	  int j=0;
//	  for(j=0; j<=i; j++)
//	  {
//	     printf(" ");
//	  }
//	  for(j =0; j<2*(line-1-i)-1; j++)
//	  {
//	     printf("*");
//	  }
//	  printf("\n");
//	}
//   return 0;
//}
//int main()
//{
//	int a = 24;
//	int b = 36;
//	int c = 0;
//	while(c= a%b)
//	{
//	   a=b;
//	   b=c;
//	}
//	printf("%d",b);
//
//   return 0 ;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//	
//	scanf("%d%d",&num1,&num2);
//	printf("num1=%d,num2=%d\n",num1,num2);
//	/*tmp = num1;
//	num1 = num2;
//	num2 = tmp;*/
//	/*num1=num1^num2;
//	num2=num1^num2;
//	num1=num1^num2;*/
//	num1 = num1+num2;
//	num2 = num1-num2;
//	num1 = num1-num2;
//
//	printf("num1=%d,num2=%d\n",num1,num2);
//	
//
//  return 0;
//}
//int main()
//{
//   int a = 2;
//   int b = 8;
//   int c = 6;
//   if(a<b)
//   {
//     int tmp = a;
//	 a = b ;
//	 b = tmp;
//   }
//   if(a<c)
//   {
//     int tmp = a;
//	 a = c ;
//	 c = tmp;
//   }if(b<c)
//   {
//     int tmp = b;
//	 b = c ;
//	 c = tmp;
//   }
//   printf("%d%d%d\n",a,b,c);
//}
