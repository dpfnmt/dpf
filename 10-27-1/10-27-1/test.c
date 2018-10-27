#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define N 6
//int main()
//{
//	int a[N][N] = {0};
//	int i, j ;
//	for(i=0; i<N; i++)
//	{
//	   a[i][0] =1;
//	   a[i][i] =1;
//	}
//	for(i=2; i<N; i++)
//	{
//	   for(j=1; j<i; j++)
//	   {
//	      a[i][j]=a[i-1][j-1]+a[i-1][j];
//	   }
//	}
//	for(i=0; i<N; i++)
//	{
//		for(j=0; j< 3 * (N-i)/2;j++)
//		{
//		   printf(" ");
//		}
//	   for(j=0; j<=i; j++)
//	   { 
//	      printf("%3d",a[i][j]);
//	   }
//	   printf("\n ");
//	}
//   return 0;
//
//}

//
//void  killer()
//{
//  char killer ='0';
//  for(killer != 'A';killer <= 'D'; killer++)
//  {
//      if((killer !='A')+(killer =='C')+
//		  (killer =='D')+(killer !='D') == 3)
//	  {
//		  printf("Ð×ÊÖÊÇ: %c\n",killer);
//	  }
//      
//  }
//}
//int main()
//{
//	killer();
//   return 0;
//}

void fib()
{
    int a,b,c,d,e;
	for(a=0; a<=5;a++)
	{
	  for(b=0;b<=5;b++)
	  {
	     for(c=0;c<=5;c++)
		 {
		    for(d=0;d<=5;d++)
			{
				for(e=0;e<=5;e++)
				{
				   /*if(((b == 2 && a!=3)||(b !=2 && a==3))
					   &&((b ==2 && e!=4)||(b!=2 && e == 4))
					   &&((c ==1 &&d !=2)||( c!=1 &&d ==2))
					   &&((c ==5 &&d !=3)||( c!=5 &&d ==3))
					   &&((e ==4 &&a !=1)||( e!=4 &&a  ==1))
					   )*/
					if(((b == 2)+(a ==3) ==1)
					   &&((b == 2)+(e ==4) ==1)
					  &&((c == 1)+(d ==2) ==1)
					  &&((c == 5)+(d ==3) ==1)
					  &&((e == 4)+(a ==1) ==1)
					  )
				
				
				       /*if((a != b)&&(a != c)&&(a != d)&&(a != e)
						   &&(b != c)&&(b != d)&&(b != e)
						   &&(c != d)&&(c != e)
                           &&(d != e))*/
					   if(a*b*c*d*e == 120)
						   printf("A= %d,B= %d,C= %d,D= %d,E= %d\n",
						   a,b,c,d,e);
						  
				   
				}
			}
		 }
	  }
	}
}

int main()
{
   fib();
   return 0;
}