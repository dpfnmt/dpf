#define _CRT_SECURE_NO_WARNINGS 1

void  Initboard(char arr[ROW][COL],int row, int col,char set)
{
  int i = 0;
  int j = 0;
  for(i=1; i<row; i++) // 是否是rows;
  {
   for(j=1;j<col; j++)
   {
      arr[i][j]=set;
   }
  }
}
void  DisPiayboard(int mine,int show,int row,int col,char arr[ROW][COL])
{
  int i=0;
  int j=0;
  for(i=1; i<row; i++)
  {
     for(j=1;j<col;j++)
	 {
	    printf("%c",arr[i][j])
	 }
	 printf("\n");
  }
}
#define EASY_COUNT 
void  Setmine(char arr[ROW][COL],int row, int col)
{
	int count = EASY_COUNT;//头文件没写；
	int x=0;
	int y =0; 
  while(count)
  {
    int x = rand()%row+1;
    int y = rand()%col+1;
   }
  if(arr[x][y] == '0')
  {
    arr[x][y] == '1';
	count--;
  }

}
void  Findmine(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col)
{
   int x = 0;
   int y = 0；
	   printf("请输入坐标:>");
   scanf("%d%d",&x,&y);
   while()//没有写
   {
      if(x>=1&&x<=row&&y>=1;&&y<=col)
	  {
	    
	  }
   }
}
