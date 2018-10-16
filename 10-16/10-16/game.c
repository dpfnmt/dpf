#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void InitBoard(char arr[ROWS][COLS],int rows,int cols,char set)
{
    int i=0;
    int j=0;
	for(i=0;i<rows;i++)
	{
	   for(j=0; j<cols;j++)
	   {
	      arr[i][j] = set;
	   }
	}
	//memset(&arr[0][0],set,rows*cols*sizeof(arr[0][0]));
}

void DisplayBoard(char arr[ROWS][COLS],int row,int col)
{
  int i=0;
  int j=0;
  for(i=0;i<=col;i++)
  {
    printf("%d ",i);
  }
  printf("\n");
  for(i=1;i<=row;i++)
  {
	  printf("%d ",i);
    for(j=1;j<=col;j++)
	{
	   printf("%c ",arr[i][j]);
	}
	printf("\n");
  }
}

void SetMine(char arr[ROWS][COLS],int row,int col)
{
  int count = EASY_COUNT;
  while(count)
  {
     int x =rand()%row+1;
     int y =rand()%col+1;
     if(arr[x][y] == '0')
	 {
	   arr[x][y] ='1';
	   count--;
	 }
  }
}

//void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
//{
//   int  x =0;
//   int  y =0;
//   int win =0;
//   printf("%d%d",&x,&y);
//   while(win<row*col-EASY_COUNT)
//   {
//     if(x>=1 && x<=row && y>=1 && y<=col)
//     {
//          if(mine[x][y] == '1')
//	       {
//	          printf("���ź����㱻ը����\n");
//		      DisplayBoard(mine,row,col);
//	          break;
//	       }
//	      else
//	       {
//	          int count = Getminecount(mine,x,y);
//		      show[x][y] = count+'0';
//		      DisplayBoard(show,row,col);
//	        }
//      }
//	  else
//	   {
//	      printf("����������������������\n");
//	    }
//	 if(win == row*col-EASY_COUNT)
//	 {
//	   printf("��ϲ�㣬���׳ɹ�\n");
//	 }
//   }
//}
//
//int Getminecount(char mine[ROWS][COLS], int x ,int y)
//{
//  return mine[x-1][y]+
//	  mine[x-1][y-1]+
//	  mine[x][y-1]+
//	  mine[x+1][y-1]+
//	  mine[x+1][y]+
//	  mine[x+1][y+1]+
//	  mine[x][y+1]+
//	  mine[x-1][y+1]-8*'0';
//}