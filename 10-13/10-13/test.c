#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdilb.h>
#include<time.h>
#include"game.h"
void menu()
{
    printf("***************************************\n");
    printf("**********      1. play      **********\n");
    printf("**********      0. exit      **********\n");
    printf("***************************************\n");
}
void game()
{
	char mine[ROWS][CLOS]={0};
	char show[ROWS][CLOS]={0};
	Initboard(mine,row,clo,'0');
	Initboard(show,row,clo,'0');
	DisPiayboard(mine,row,clo);
	DisPiayboard(show,row,clo);
	Setmine(mine,row,clo);
	Setmine(show,row,clo);
	Findmine(mine,show,row,clo)


}

int main()
{
    int input();
    srand((unsigned)time(NULL))
	do
	{
	   menu();
	   printf("请选择:>");
	   scanf("%d",&input);
	   case 1:;
		   game();
		   break;
	   case 0:;
		   break;
       defauld:
		   {
			   printf("输入错误，请重新输入:>")
		   }

	}while(input)
	

  return 0;
}
