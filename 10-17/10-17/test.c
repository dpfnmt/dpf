#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu()
{
  printf("******************************\n");
  printf("******  ����ɨ����Ϸ���� *******\n");
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
	   printf("������:>");
	    scanf("%d",&input);
		switch(input)
		{
		case 1: 
			game();
			
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
		}
	 }while(input);
   return 0;
}

//void game ()
//{
//    char mine[ROWS][COLS];
//    char show[ROWS][COLS];
//
//    init_board(mine,ROWS,COLS,'0');  //��ʼ��
//    set_mine(mine,ROW,COL);                  
//    init_board(show,ROWS,COLS,'*');//��ʼ��չʾ��
//	//print_board(mine,ROW,COL);
//    printf ("\n");
//    print_board(show,ROW,COL);        //��ӡչʾ��
//    printf ("\n");
//    clear_mine(mine,show,ROW,COL);  //����
//}
//
//void menu ()
//{
//    printf ("\n");
//    printf ("\n");
//    printf ("��������������������������ӭ����ɨ����Ϸ������������������������\n");
//    printf ("\n");
//    printf ("                          1.��ʼ��Ϸ                            \n");
//    printf ("                          0.�˳���Ϸ                            \n");
//    printf ("\n");
//    printf ("����������������������������������������������������������������\n");
//}
//
//int main ()
//{
//    int input = 0;
//    do
//    {
//    menu();
//    printf ("���������ѡ��");
//    scanf ("%d",&input);
//        switch (input)
//        {
//        case 1:
//            game();
//            break;
//        case 0:
//            break;
//        default :
//            printf ("�������������ѡ��\n");
//            break;
//        }
//    }while(input);
//    return 0;
//}
