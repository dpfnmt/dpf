#ifndef __GAME_H__
#define __GAME_H__

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#define ROW 12
#define COL 12
#define COUNT 10

extern char show_mine[ROW][COL];
extern char real_mine[ROW][COL];
void game();
void open_mine(int x, int y);


#endif