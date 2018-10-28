#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void InitBoard(char board[ROW][COL],int row, int col)
{
   int i=0;
   int j=0;
   for(i=0;i<row;i++)
   {
     for(j=0;j<col;j++)
	 {
	   board[i][j] = ' ';
	 }
   }

}

void DispiayBoard(char board[ROW][COL],int row, int col)
{
  int i=0;
  for(i=0; i<row; i++)
  {
    int j = 0;
	for(j=0; j<col; j++)
	{
	  printf(" %c ",board[i][j]);
	  if(j<col-1)
	  printf("|");
	}
	printf("\n");
	if(i<row-1)
	{
	   for(j=0;j<col;j++)
	   {
	      printf("---");
		  if(j<col-1)
			printf("|");
	   }
	   printf("\n");
	}
  }

}


void ComputerMove(char board[ROW][COL],int row, int col)
{
  int x=0;
  int y=0;
  printf("������:>\n");
  while(1)
  {
    x=rand()%row;
	y=rand()%col;
	if(board[x][y] ==' ')
	{
	  board[x][y] ='x';
       break;	
	}
  }
}

void PlayerMove(char board[ROW][COL],int row, int col)
{
       int x=0;
       int y=0;
        printf("�����:>\n");
       scanf("%d %d",&x,&y);
	while(1)
	{
       if(x>=1 && x<=row && y>=1 && y<=col)
        {
	       if(board[x-1][y-1] == ' ')
	        {
	            board[x-1][y-1] = '0';
		        break;
	        }
	       else
	        {
	            printf("���걻ռ�ã�����������\n");
	         }
         }
        else
          {
               printf("����Ƿ�������������\n");
          }
     }
}

char Iswin(char board[ROW][COL],int row, int col)
{
  int i = 0;
	for(i=0; i<row; i++)
	{
		if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for(i=0; i<col; i++)
	{
		if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[0][i]!= ' ')
			return board[0][i];
	}
	if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if(board[0][2]==board[1][1] && board[1][1]==board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if(IsFull(board, row, col))
	{
		return 'Q';
	}
	return ' ';
}


int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			if(board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}