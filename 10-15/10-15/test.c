#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{ 
	int i,j,x=0;
	for(i=0;i<2;i++)
	{
	  x++;
	  for(j=0;j<=3;j++)
	  {
	    if(j%2) 
	    continue;
		x++;
	  }
	  x++;
	}
	printf("x=%d\n",x);
}
	/*int a=0,b=0,c=0,d=0;
	if(a=1) b=1;c=2;
	else d=3;
	printf("%d,%d,%d,%d\n",a,b,c,d);*/
	/*int i,sum;
	for(i=1; i<=3;sum++)
	sum += i;
	printf("%d\n",sum);*/
	//i/*nt a =1;
	/*int b=0;
     switch(a)
	 {
	 case 1:
		 switch(b)
		 {
		 case 0:printf("**0**");break;
		 case 1:printf("**1**");break;
		 }
	 case 2:printf("**2**");break;
	 }*/
	//int x=3,y=0,z=0,
		//if(x=y+z)printf("* * * *");
		//else printf("# # # #");
	//char c= 'z';
     //printf("%c",c-25);
	//unsigned short a =65536;
	//int b=0;
	//printf("%d\n",b=a);
	//int m=0,n=0;
	//char c='a';
	//scanf("%d%c%d",&m,&c,&n);
	//printf("%d,%c,%d",m,c,n);
	//int x =2002,y=2003;
	//printf("%d\n",(x,y));
	//int m=0xab,c,n=0xabc;
	//printf("%X%x\n",m,n);
  //int a=5,b=4,c=6,d;
 // printf("%d\n",d=a>b?a>c?a:c:b);
