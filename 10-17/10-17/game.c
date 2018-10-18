#define _CRT_SECURE_NO_WARNINGS 1
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


//第一次踩到雷会转移雷的位置，防止第一次走就踩到雷
void move_mine(char mine[ROWS][COLS], int x, int y)    
{  
    mine[x][y] = '0';  
    while (1)  
    {  
        int x = rand() % ROW + 1;  
        int y = rand() % COL + 1;  
        if (mine[x][y] == '0')  
        {  
            mine[x][y] = '1';  
            break;  
        }  
    }  
}  

//如果输入的坐标周围没有，将会把该坐标周围的一圈输出来
void circle_print(char show[ROWS][COLS],char mine[ROWS][COLS], int x, int y)  
{  
    int i = 0;  
    int j = 0;  
    char count = get_mine_count(mine, x, y)+'0';  
    if (count == '0')  
    {  
        for (i = (x - 1); i <= (x + 1); i++)  
        {  
            for (j = (y - 1); j <= (y + 1); j++)  
            {  
                show[i][j] = get_mine_count(mine,i,j) + '0';      
            }  
        }  
    }  
} 

void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
   int  x =0;
   int  y =0;
   int win =0;
 
  while(win<row*col-EASY_COUNT)
   {
	   printf("请输入坐标:");
	    scanf("%d%d",&x,&y);
     if(x>=1 && x<=row && y>=1 && y<=col)
     {
          if(mine[x][y] == '1')
	       {
	          printf("很遗憾，你被炸死了\n");
		      DisplayBoard(mine,row,col);
			  win++;
	          break;
	       }
	      else
	       {
	          int count = Getminecount(mine,x,y);
		      show[x][y] = count+'0';
		      DisplayBoard(show,row,col);
	        }
      }
	  else
	   {
	      printf("坐标输入有误，请重新输入\n");
	    }
	 if(win == row*col-EASY_COUNT)
	 {
	   printf("恭喜你，排雷成功\n");
	 }
   }
}

int Getminecount(char mine[ROWS][COLS], int x ,int y)
{
  return mine[x-1][y]+
	  mine[x-1][y-1]+
	  mine[x][y-1]+
	  mine[x+1][y-1]+
	  mine[x+1][y]+
	  mine[x+1][y+1]+
	  mine[x][y+1]+
	  mine[x-1][y+1]-8*'0';
}


//void init_board(char board[ROWS][COLS],int rows,int cols,char set)
//{
//    memset (board,set,rows * cols * sizeof(board[0][0]));
//}
//
////打印
//void print_board(char board[ROWS][COLS],int row,int col)
//{
//    int i = 0;
//    int j = 0;
//    printf ("   ");
//    for (i = 1;i <= col;i++)
//    {
//        printf ("%d ",i);
//    }
//    printf ("\n");
//    printf ("\n");
//    for (i = 1;i <= row;i++)
//    {
//        printf ("%d  ",i);
//        for (j = 1;j <= col;j++)
//        {
//            printf ("%c ",board[i][j]);
//        }
//        printf("\n");
//    }
//}
//
////设置雷
//void set_mine(char board[ROWS][COLS],int row,int col)
//{
//
//    int i = EASY;
//    int x = 0;
//    int y = 0;
//    srand((unsigned int )time(NULL));
//    while (i)
//    {
//        x = rand()%ROW+1;    //随机数生成雷的坐标
//        y = rand()%ROW+1;
//       if (board[x][y] == '0')
//        {
//           board[x][y] = '1';
//           i--;
//        }
//    }
//}
////统计雷的个数
//int get_mine_count(char board[ROWS][COLS],int x,int y)
//{
//  //把x、y周围的雷的个数统计一下 
//    return board[x][y-1]+
//           board[x-1][y-1]+
//           board[x-1][y]+
//           board[x-1][y+1]+
//           board[x][y+1]+
//           board[x+1][y+1]+
//           board[x+1][y]+
//           board[x+1][y-1]-8*'0';
//}
//
//
// //第一次踩到雷会转移雷的位置，防止第一次走就踩到雷
//void move_mine(char mine[ROWS][COLS], int x, int y)    
//{  
//    mine[x][y] = '0';  
//    while (1)  
//    {  
//        int x = rand() % ROW + 1;  
//        int y = rand() % COL + 1;  
//        if (mine[x][y] == '0')  
//        {  
//            mine[x][y] = '1';  
//            break;  
//        }  
//    }  
//}  
//
////如果输入的坐标周围没有，将会把该坐标周围的一圈输出来
//void circle_print(char show[ROWS][COLS],char mine[ROWS][COLS], int x, int y)  
//{  
//    int i = 0;  
//    int j = 0;  
//    char count = get_mine_count(mine, x, y)+'0';  
//    if (count == '0')  
//    {  
//        for (i = (x - 1); i <= (x + 1); i++)  
//        {  
//            for (j = (y - 1); j <= (y + 1); j++)  
//            {  
//                show[i][j] = get_mine_count(mine,i,j) + '0';      
//            }  
//        }  
//    }  
//}  
//
////通过判断最后剩下的‘*’和设置的雷数是否相等来确定有没有赢
//int is_win(char show[ROWS][COLS])
//{
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    for (i = 1;i <= ROW;i++)
//    {
//        for (j = 1;j <= COL;j++)
//        {
//            if(show[i][j] == '*')
//                count++;
//        }
//    }
//    if (count == EASY)
//    {
//        return -1;  //剩下的都是雷
//    }
//    return 0;
//}
////清雷
//void clear_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
//{
//    int x = 0;
//    int y = 0;
//    int count = 0;
//    int a = 0;
//        while (a != -1)
//    {
//    printf ("请输入你的坐标：");
//    scanf ("%d%d",&x,&y);
//    //while (a != -1)
//    //{
//        if (mine[x][y] == '1' && count == 0)
//        {
//            move_mine( mine, x, y); //如果第一次就踩到雷，则将此位置变为0再随机生成一个雷  
//
//            goto flag;
//
//        }
//        else if  (mine[x][y] == '1' && count != 0)
//        {
//            printf ("被炸死了！\n");
//            print_board(mine,ROW,COL);
//            return;
//        }
//        else if (mine[x][y] =='0')
//        {
//    flag:
//            show [x][y] = get_mine_count(mine,x,y)+'0';
//            circle_print(show,mine,x,y);
//            print_board(show,ROW,COL);
//            a = is_win(show);
//            if(a == -1)  //剩下的‘*‘和设置的雷数相同时，就赢了
//            {
//                printf ("恭喜你赢了！\n");
//                print_board(mine,ROW,COL);
//                break;
//            }
//        }
//        count++;
//}
//}
