#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
////#define row 3
////#define col 6 
//int main()
//{   int i,j,k; 
//    float a[3][6],ave,c;
//	float sum = 0;
//    for(i=0;i<3;i++)
//	for(j=0;i<4;j++)
//	    scanf("%.1f",&a[i][j]);
//	  printf("\n");//可能在上一个括号；
//	for(i=0;i<3;i++)
//	  for(j=0;j<4;j++)
//	   {
//	      a[i][4] = 0;
//          a[i][4] += a[i][j];
//	      a[i][5] = a[i][4]/4;
//	       sum += a[i][j];
//	   }
//       ave = sum/12;
//	   for(k=0;k<2;k++)
//	      for(i=0;i<2;i++)
//			  if(a[i][5] > a[i+1][5])
//			  {
//			      for(j=0;j<6;j++)
//				  {
//				     c = a[i][j];
//					 a[i][j] = a[i+1][j];
//					 a[i+1][j] = c;
//				  }
//			  }
//       for(i=0;i<3;i++)
//	   {
//	      for(j=0;j<6;j++)
//		  {
//		     if(j == 5)
//				 printf("%.1f",a[i][j]);
//			 else
//				 printf("%.1f",a[i][j]);
//		  }
//		  printf("\n");
//	   }
//	   printf("全班总成绩:%.1f    全班平均分:%.1f",sum,ave);
//   return 0;
//}


//#include<stdio.h>
//#include<math.h>
//#define row 3
//#define col 6 
/*int main()
{   int i,j,k; 
    float a[3][6],ave,c;
	float sum = 0;
// */ //  for(i=0;i<3;i++)
//	
//   	 for(j=0;i<4;j++)
//	  	    scanf("%.1f",&a[i][j]);
//	 
//	  printf("\n");//可能在上一个括号；
//	
//	for(i=0;i<3;i++)
//	{
//		for(j=0;j<4;j++)
//	   {
//	      a[i][4] = 0;
//          a[i][4] += a[i][j];
//	      a[i][5] = a[i][4]/4;
//	       sum += a[i][j];
//	   }
//	}
//       ave = sum/12;
//	   for(k=0;k<2;k++)
//	   {
//		   for(i=0;i<2;i++)
//		   {
//			   if(a[i][5] > a[i+1][5])
//			  {
//			      for(j=0;j<6;j++)
//				  {
//				     c = a[i][j];
//					 a[i][j] = a[i+1][j];
//					 a[i+1][j] = c;
//				  }
//			  }
//		   }
//	   }
//       for(i=0;i<3;i++)
//	   {
//	      for(j=0;j<6;j++)
//		  {
//		     if(j == 5)
//				 printf("%.1f",a[i][j]);
//			 else
//				 printf("%.1f",a[i][j]);
//		  }
//		  printf("\n");
//	   }
//	   printf("全班总成绩:%.1f    全班平均分:%.1f",sum,ave);
//   return 0;
//}