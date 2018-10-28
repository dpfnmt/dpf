#ifndef  __GAME_H__
#define  __GAME_H__
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define ROW  3
#define COL  3



void InitBoard(char board[ROW][COL],int row, int col);
void DispiayBoard(char board[ROW][COL],int row, int col);
void ComputerMove(char board[ROW][COL],int row, int col);
void PlayerMove(char board[ROW][COL],int row, int col);
char Iswin(char board[ROW][COL],int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
#endif // __GAME_H__
