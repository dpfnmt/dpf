#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{   
//	  int n = 0;
//	 int ret = 1;
//	 int i=0;
//	 scanf("%d",&n);
//	 for(i=1; i<=n; i++)
//	 {
//	     ret=ret*i;
//	 }
//	 printf("%d",ret);
//   return 0;
//}
//int main()
//{
//	  int i=0;
//	  int ret = 1;
//	  int sum = 0;
//	  for(i=1; i<=5; i++)
//	  {
//	       ret = ret*i;
//		   sum +=ret;
//	  }
//	  printf("sum=%d\n",sum);
//   return 0;
//}
//int main()
//{    
//     int i = 0;
//	 for(i=1; i<=9999;i++)
//	 {
//	    int count=1;
//		int tmp = i;
//		int sum = 0;
//		while(tmp/10)
//		{
//		    count++;
//			tmp=tmp/10;
//		}
//		tmp=i;
//		while(tmp)
//		{
//		    sum +=pow(tmp%10,count);
//			tmp = tmp/10;
//		}
//		if(sum == i)
//		{
//		   printf("%d\n", i);
//		}
//
//	 }
//
//
//   return 0;
//}
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d",&line);
//	for(i=0; i<=line; i++)
//	{
//	    int j = 0;
//		for(j=0; j<=line-1-i;j++)
//		{
//		   printf(" ");
//		}
//        for(j=0; j<2*i+1; j++)
//		{
//		   printf("*");
//		}
//		printf("\n");
//	 }
//	for(i=0; i<line-1;i++)
//	{
//	    int j=0;
//		for(j=0;j<=i; j++)
//		{
//		   printf(" ");
//		}
//		for(j=0;j<2*(line-1-i)-1; j++)
//		{
//			printf("*");
//	    }
//		printf("\n");
//	}
//   return 0;
//}
//int main()
//{
//	int i=0;
//	int sum=0;
//	int tmp=0;
//	int n=0;
//	scanf("%d",&n);
//	for(i=0;i<n; i++)
//	{
//	   tmp=tmp*10+2;
//	   sum += tmp;
//	}
//	printf("sum=%d\n",sum);
//  return 0;
//}


//#include <stdlib.h>
//#include <time.h>
//void menu()
//{
//    printf("**************************************\n");
//    printf("**********      1. play     **********\n");
//    printf("**********      0. exit     **********\n");
//    printf("**************************************\n");
//}
//void game()
//{
//	int num=0;
//    int ret=rand()%100+1;
//	while(1)
//	{
//		printf("������µ�����:>");
//		scanf("%d",&num);
//		if(num == ret)
//		{
//		   printf("��ϲ�㣬�¶���\n");
//			   break;
//		}
//		 else if(num > ret)
//		 {
//			printf("�´���\n");
//		 }
//		 else
//		 {
//			printf("��С��\n");
//		 }
//		
//	}
//}
//int main()
//{
//     int input = 0;
//	 srand((unsigned int)time(NULL));
//	 do
//	 {
//		      menu();
//			 printf("��ѡ��:>");
//             scanf("%d",&input);
//		switch(input)
//		{
//		case 1:;
//			   game();
//			   break;
//		case 0:;
//               break;
//
//		default:;
//			   printf("ѡ�����\n");
//			   break;
//		}
//
//	 }
//	 while(input);
//  return 0;
//}
//int main()
//{
//	  int i =0;
//	  char password[20]={0};
//	  for(i=1; i<=3;i++)
//	  {
//		  printf("����������:>");
//		  scanf("%s",password);
//		  if(0 == strcmp(password, "123456"))
//		  {
//		      break;
//		  }
//		  else
//		  {
//		      printf("��������������������룡\n");
//		  }
//	  }
//	  if(i<3)
//	  {
//	      printf("��¼�ɹ�\n");
//	  }
//	  else
//	  {
//	     printf("�˳�����\n");
//	  }
//   return 0;
//}
//int main()
//{
//    int ret =1;
//	int i = 0;
//	int n =0;
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//	     ret = ret*i;
//	}
//     printf("%d\n",ret);
//  return 0;
//}
//
//int main()
//{
//	int i=0;
//	int ret =1;
//	
//	int sum = 0;
//	for(i=1; i<=5; i++)
//	{
//	    ret = ret*i;
//		sum += ret;
//
//	}
//	printf("sum=%d\n",sum);
//   return 0;
//}