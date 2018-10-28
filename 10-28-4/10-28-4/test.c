#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void  menu()
{
   printf("********************************************\n");
   printf("*********            1.play         ********\n");
   printf("*********            0.exit         ********\n");
   printf("********************************************\n");
}

void  game()
{
	char board[ROW][COL]={0};
	char ret =0;

	InitBoard(board,ROW,COL);
	DispiayBoard(board,ROW,COL);

	while(1)
	{
	   //PlayerMove(board,ROW,COL);
	  ComputerMove(board,ROW,COL);
	  ret=Iswin(board,ROW,COL);
	     if(ret != ' ')
		 break;
	  DispiayBoard(board,ROW,COL);
	 // ComputerMove(board,ROW,COL);
	  PlayerMove(board,ROW,COL);
	  ret=Iswin(board,ROW,COL);
	  if(ret != ' ')
		  break;
	  DispiayBoard(board,ROW,COL);
	}
	if(ret == 'x')
	{
		printf("电脑赢\n");
	}
	else if(ret == '0')
	{
		printf("玩家赢\n");
	}
	else if(ret == 'Q')
	{
		printf("平局\n");
	}
	
DispiayBoard(board,ROW,COL);
}
int main()
{
   int input=0;
   srand((unsigned)time(NULL));
	do
	{
	 menu();
	 printf("请选择:>");
	 scanf("%d",&input);
	 switch(input)
	 {
	 case 1:
		 game();
		 break;
	 case 0:
		 printf("退出游戏\n");
		 break;
	 default:
		 printf("输入错误，请重新输入\n");
		 break;
	 }
	}while(input);
  return 0;
}
