#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i=0;
	//int n;
	int ret=0;
	int sum=0;
	//scanf("%d",&n);
	for(i=0;i<5;i++)
	{
	    ret = i;
		sum += ret;
	}
	printf("sun=%d\n",sum);
   return 0;
}