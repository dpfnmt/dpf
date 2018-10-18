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


//��һ�βȵ��׻�ת���׵�λ�ã���ֹ��һ���߾Ͳȵ���
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

//��������������Χû�У�����Ѹ�������Χ��һȦ�����
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
	   printf("����������:");
	    scanf("%d%d",&x,&y);
     if(x>=1 && x<=row && y>=1 && y<=col)
     {
          if(mine[x][y] == '1')
	       {
	          printf("���ź����㱻ը����\n");
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
	      printf("����������������������\n");
	    }
	 if(win == row*col-EASY_COUNT)
	 {
	   printf("��ϲ�㣬���׳ɹ�\n");
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
////��ӡ
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
////������
//void set_mine(char board[ROWS][COLS],int row,int col)
//{
//
//    int i = EASY;
//    int x = 0;
//    int y = 0;
//    srand((unsigned int )time(NULL));
//    while (i)
//    {
//        x = rand()%ROW+1;    //����������׵�����
//        y = rand()%ROW+1;
//       if (board[x][y] == '0')
//        {
//           board[x][y] = '1';
//           i--;
//        }
//    }
//}
////ͳ���׵ĸ���
//int get_mine_count(char board[ROWS][COLS],int x,int y)
//{
//  //��x��y��Χ���׵ĸ���ͳ��һ�� 
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
// //��һ�βȵ��׻�ת���׵�λ�ã���ֹ��һ���߾Ͳȵ���
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
////��������������Χû�У�����Ѹ�������Χ��һȦ�����
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
////ͨ���ж����ʣ�µġ�*�������õ������Ƿ������ȷ����û��Ӯ
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
//        return -1;  //ʣ�µĶ�����
//    }
//    return 0;
//}
////����
//void clear_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
//{
//    int x = 0;
//    int y = 0;
//    int count = 0;
//    int a = 0;
//        while (a != -1)
//    {
//    printf ("������������꣺");
//    scanf ("%d%d",&x,&y);
//    //while (a != -1)
//    //{
//        if (mine[x][y] == '1' && count == 0)
//        {
//            move_mine( mine, x, y); //�����һ�ξͲȵ��ף��򽫴�λ�ñ�Ϊ0���������һ����  
//
//            goto flag;
//
//        }
//        else if  (mine[x][y] == '1' && count != 0)
//        {
//            printf ("��ը���ˣ�\n");
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
//            if(a == -1)  //ʣ�µġ�*�������õ�������ͬʱ����Ӯ��
//            {
//                printf ("��ϲ��Ӯ�ˣ�\n");
//                print_board(mine,ROW,COL);
//                break;
//            }
//        }
//        count++;
//}
//}
