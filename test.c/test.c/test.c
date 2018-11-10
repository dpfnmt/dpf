#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int search_r(int a[3][3],int row,int col,int k,
			 int x,int y,int *px,int*py)
{
   if( x<0 || y>=col)
   {
     *px = -1;
	 *py = -1;
     return 0;  
   }
    if(a[x][y] == k)
	{
	  *px = x;
	  *py = y;
      return 1; 
	}
	else if(a[x][y] < k)
	{
	  search_r(a,3,3,k,x,y+1,px,py);
	}
	else
	{
	   search_r(a,3,3,k,x-1,y,px,py);
	}
	
}
int main()
{
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	/*int px;
	int py;*/
	int px_r;
	int py_r;
	search_r(a,3,3,7,2,0,&px_r,&py_r);
	printf("%d %d\n",px_r,py_r);
   return 0;
}