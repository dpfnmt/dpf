#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
  printf("******************************\n");
  printf("******  ——扫雷游戏—— *******\n");
  printf("******      1. play    *******\n");
  printf("******      0. exit    *******\n");
  printf("******************************\n");
}	
void game()
{
	char mine[ROWS][COLS]={0};
	char show[ROWS][COLS]={0};
    InitBoard(mine,ROWS,COLS,'0');
    InitBoard(show,ROWS,COLS,'*');
    DisplayBoard(show,ROW,COL);
    SetMine(mine,ROW,COL);
	circle_print(show, mine,ROW,COL);
    move_mine(mine, ROW,COL);
    DisplayBoard(mine,ROW,COL);
	FindMine(mine,show,ROW,COL);

}
int main()
{  
	int input=0;
	srand((unsigned int )time(NULL));
   do
	{
	   menu();
	   printf("请输入:>");
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
			printf("选择错误\n");
		}
	 }while(input);
   return 0;
}

//void game ()
//{
//    char mine[ROWS][COLS];
//    char show[ROWS][COLS];
//
//    init_board(mine,ROWS,COLS,'0');  //初始化
//    set_mine(mine,ROW,COL);                  
//    init_board(show,ROWS,COLS,'*');//初始化展示盘
//	//print_board(mine,ROW,COL);
//    printf ("\n");
//    print_board(show,ROW,COL);        //打印展示盘
//    printf ("\n");
//    clear_mine(mine,show,ROW,COL);  //排雷
//}
//
//void menu ()
//{
//    printf ("\n");
//    printf ("\n");
//    printf ("————————————欢迎来到扫雷游戏————————————\n");
//    printf ("\n");
//    printf ("                          1.开始游戏                            \n");
//    printf ("                          0.退出游戏                            \n");
//    printf ("\n");
//    printf ("————————————————————————————————\n");
//}
//
//int main ()
//{
//    int input = 0;
//    do
//    {
//    menu();
//    printf ("请输入你的选择：");
//    scanf ("%d",&input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            break;
//        default :
//            printf ("输入错误，请重新选择！\n");
//            break;
//        }
//    }while(input);
//    return 0;
//}
