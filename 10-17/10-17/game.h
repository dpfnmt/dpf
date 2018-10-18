#ifndef      __GAME_H__
#define      __GAME_H__

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

#define EASY_COUNT 10

#define ROW 9
#define COL 9

#define ROWS  ROW+2
#define COLS  COL+2

void InitBoard(char arr[ROWS][COLS],int rows,int cols,char set);
void DisplayBoard(char arr[ROWS][COLS],int row,int col);
void SetMine(char arr[ROWS][COLS],int row,int col);
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);
void circle_print(char show[ROWS][COLS],char mine[ROWS][COLS], int x, int y);
void move_mine(char mine[ROWS][COLS], int x, int y) ;

int Getminecount(char mine[ROWS][COLS], int x ,int y);


#endif

//#define _CRT_SECURE_NO_WARNINGS 1
//
//#ifndef __GAME_H__
//#define __GAME_H__
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
////����λ�õ��к���
//#define ROW 9   
//#define COL 9
////��������Ĵ�С
//#define ROWS ROW+2
//#define COLS COL+2
//
//#define EASY 10  //�׵ĸ���
//
//void init_board(char board[ROWS][COLS],int rows,int cols,char set);  //��ʼ��
//void print_board(char board[ROWS][COLS],int row,int col);   //��ӡ����
//void set_mine(char board[ROWS][COLS],int row,int col);   //������
//void clear_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col);  //����
int get_mine_count(char board[ROWS][COLS],int x,int y);  //ͳ���׵ĸ���
//
//#endif //__GAME_H__
