#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void meau()
{
	printf("***********************************\n");
	printf("******** ��ӭ����ɨ����Ϸ *********\n");
	printf("********   1: play ����Ϸ  ********\n");
	printf("***********************************\n");
	printf("*******   0: exit �˳���Ϸ ********\n");
}

int main()
{
	int num = 0;
	do
    {
	    meau();
		printf("\n");
	    printf("����ѡ��1����0:> ");
	    scanf("%d", &num);
	    printf("\n");
	    switch(num)
	    {
	         case 1:
		         game();
		         break;
	         case 0:
				  system("CLS");
				 printf("���Ѿ��˳���Ϸ����ӭ�´μ�����ս!\n\n");
		         break;
	         default:
				 printf("ѡ���������ѡ\n");
	  	         break;
	    }
	}while(num);
	system("pause");
	return 0;
}