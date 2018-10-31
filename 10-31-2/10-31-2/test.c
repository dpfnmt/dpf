#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<math.h>
//int main()
//{
//   int i=0;
//   for(i=1; i<=9999; i++)
//   {
//       int count =1;
//	   int tmp =i;
//	   int sum=0;
//	   while(tmp/10)
//	   {
//	      count++;
//		  tmp= tmp/10;
//	   }
//	   tmp =i;
//	   while(tmp)
//	   {
//	     sum +=(int)pow(tmp%10,count);
//		 tmp = tmp/10;
//	   }
//	   if(sum == i)
//	   {
//	      printf("%d ",i);
//	   }
//	   printf("\n");
//   }
//  return 0;
//}

//int main()
//{
//   int i=0;
//   for(i=1;i<=10;i++)
//   {
//     printf("%d\n",i);
//   }
//   
//   return 0;
//}


//void menu()
//{
//   printf("*************************************\n");
//   printf("*******      猜数字游戏         *****\n");
//   printf("*******        1.paly           *****\n");
//   printf("*************************************\n");
//   printf("*******        0.exit           *****\n");
//   printf("*************************************\n");
//}
//void game()
//{
//    int num =0;
//	int ret=rand()%100+1;
// while(1)
//  {
//	  printf("请输入猜的数字:>");  // 没有写这句话
//	  scanf("%d",&num);            
//	if(num == ret)
//	{
//		printf("恭喜你猜对了\n");
//		break;
//	}
//	else if(num > ret)
//	{
//	   printf("猜大了\n");
//	}
//	else
//	{
//	   printf("猜小了\n");
//	}
// }
//}
//int main()
//{
//   int input =0;
//   srand((unsigned int)time(NULL));
//   do
//   {
//     menu();
//	 printf("请选择:>");
//	 scanf("%d",&input);
//	 switch(input)
//	 {
//	 case 1:
//		    game();
//			break;
//	 case 0:
//		    break;
//	 default:
//		 printf("输入错误!\n");
//	     break;
//	 }
//   }while(input);
//   return 0;
//}
//#include<string.h>
//int main()
//{
//	int i=0;
//	int password[20] = {0};
//	for(i=1;i<=3;i++)
//	{
//	     printf("请输入密码:");
//		 scanf("%s",&password);
//		 if(0 ==strcmp(password,"123456"))
//		    {
//			   break;
//		     }
//		 else
//		    {
//		       printf("输入错误，请重新输入\n");
//		     }
//	}
//	if(i<=3)
//	{
//	   printf("登录成功\n");
//	}
//	else
//	{
//	   printf("退出程序\n");
//	}
//   return 0;
//}

//#include<string.h>
//int strlen(char *str)
//{
//   if(*str == 0)
//       return 0;
//   else
//	   return 1+strlen(str+1);
//}
//int main()
//{
//	char arr[]="abcdef";
//	
//	printf("%d\n",strlen(arr));
//   return 0;
//}