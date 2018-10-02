#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int main()
//{
//     int i =0;
//	 for(i=1; i<=9; i++)
//	 {
//	      int j=0;
//		  for(j=1; j<=i; j++)
//		  {
//		    
//			    printf("%d*%d= %2d\t",i, j, i*j);
//			 
//		  }
//		  printf("\n");
//	}
//
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	int count=0;
//	for(i= 100; i<= 200; i++)
//	{
//		if(i%2 == 1)
//			count++;
//        printf("%d\t",i);
//	}
//	printf("\ncount=%d\n",count);
//return 0;
//}
//int main()
//{  
//    int i=0;
//	int count=0;
//	for(i=100; i<=200; i++)
//	{
//	    int j=0;
//		for(j=2; j<i; j++)
//		{
//		    if(i%j == 0)
//				break;
//		}
//	     if(j>=i)
//		 {
//            count++;
//	        printf("%d\n",i);
//	    }
//	
//	}
//	        printf("\ncount=%d\n",count);
//        
//return 0;
//}
//int main()
//{  
//    int i=0;
//	int count=0;
//	for(i=100; i<=200; i++)
//	{
//	    int j=0;
//		for(j=2; j<i/2; j++)
//		{
//		    if(i%j == 0)
//				break;
//		}
//	     if(j>=i/2)
//		 {
//            count++;
//	        printf("%d\n",i);
//	    }
//	
//	}
//	        printf("\ncount=%d\n",count);
//        
//return 0;
//}
//int main()
//{  
//    int i=0;
//	
//
//	for(i=100; i<=200; i++)
//	{
//	    int j=0;
//		for(j=2; j<=sqrt(i); j++)
//		{ 
//		    if(i%j == 0)
//				break;
//		}
//	     if(j>=i)
//		 {
//          
//	        printf("%d\n",i);
//	    }
//	
//	}
//	       
//        
//return 0;
//}
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=1000; i<=2000; i++)
//	{
//		if(i%4 == 0)
//		{
//		   if(i%100 !=0)
//		   {
//			   count++;
//		   printf("%d\t",i);
//		    }
//		}
//	
//		if(i%400 == 0)
//		{
//			count++;
//			printf("%d\t",i);
//		}
//	}
//	printf("\ncount=%d\n",count);
//return 0;
//}
//int main()
//{
//	int i=0;
//	int count=0;
//	for(i=1000; i<=2000; i++)
//	{
//		if((i%4 == 0)&&(i%100 !=0)||(i%400 == 0))
//		{
//			   count++;
//		   printf("%d\t",i);
//		    
//		}
//	}
//	printf("\ncount=%d\n",count);
//return 0;
//}