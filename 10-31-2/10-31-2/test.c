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
//   printf("*******      ��������Ϸ         *****\n");
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
//	  printf("������µ�����:>");  // û��д��仰
//	  scanf("%d",&num);            
//	if(num == ret)
//	{
//		printf("��ϲ��¶���\n");
//		break;
//	}
//	else if(num > ret)
//	{
//	   printf("�´���\n");
//	}
//	else
//	{
//	   printf("��С��\n");
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
//	 printf("��ѡ��:>");
//	 scanf("%d",&input);
//	 switch(input)
//	 {
//	 case 1:
//		    game();
//			break;
//	 case 0:
//		    break;
//	 default:
//		 printf("�������!\n");
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
//	     printf("����������:");
//		 scanf("%s",&password);
//		 if(0 ==strcmp(password,"123456"))
//		    {
//			   break;
//		     }
//		 else
//		    {
//		       printf("�����������������\n");
//		     }
//	}
//	if(i<=3)
//	{
//	   printf("��¼�ɹ�\n");
//	}
//	else
//	{
//	   printf("�˳�����\n");
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