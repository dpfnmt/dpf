#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
// {  
//     int i=0;
//	 for(i=1; i<=99999; i++)
//	 {
//	     int count = 1;
//		 int tmp = i;
//         int sum = 0;
//		 while(tmp/10)
//		 {
//		       count++;
//			   tmp = tmp/10; 
//	     } 
//	     tmp = i;
//		 while(tmp)
//		 {
//		      sum += pow(tmp%10,count);
//			   tmp = tmp/10;
//		 }
//           if( sum == i)
//		   {
//		     printf("%d\n",i);
//		   }
//        
//     }    
//     return 0;
//  }
//int main()
//{
//     int line =0;
//     int i=0;
//	 scanf("%d",&line);
//	 for(i=0; i<line; i++)
//	 {
//	    int j=0;
//		for(j=1; j<line-1-i;j++)
//		{
//		  printf(" ");
//		}
//        for(j=0; j<2*i+1; j++)
//		{
//		   printf("*");
//		}
//         printf("\n");
//	  }
//		for(i=0; i<line-1; i++)
//	    {
//	       int j=0;
//		  for(j=0; j<=i;j++)
//		  {
//		    printf(" ");
//		   }
//          for(j=0; j<2*(line-1-i)-1; j++)
//		  {
//		   printf("*");
//		  }
//		   printf("\n");
//	      
//		  }
//	 
//  return 0;
//}
//int   main()
//{
//
//	  int a= 0 ;
//	  int n = 0;
//	  int i = 0;
//	  int tmp = 0;
//      int sum = 0;
//	 scanf("%d%d",&a, &n);
//	 for(i=0; i<n; i++)
//	  {
//	        tmp = tmp*10+2;
//			sum += tmp; 
//	   }
//	 printf("sum = %d\n",sum);
//     return 0;
//}
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d%d", &a, &n);
//	for(i=0; i<n; i++)
//	{
//		//产生1项
//		tmp = tmp*10+a;
//		//相加
//		sum += tmp;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{ 
//	int n = 0;
//	int i = 0;
//	int  ret =1;
//	scanf("%d",&n);
//	for(i=1; i<=n; i++)
//	{
//	     ret = ret*i;
//	}
//	printf("ret=%d",ret);
//  return 0;
//}
//int main()
//{
//	int ret =1;
//	int i=0;
//	int sum = 0;
//	for(i=1; i<=5; i++)
//	{
//	   ret = ret*i;
//	   sum += ret;
//
//	}
//	printf("sum=%d",sum);
//  return 0;
//}
//i/*nt main()
//{
//    int i=0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d",&n);
//    for(i=1; i<=n; i++)
//	{
//	     ret= ret*i;
//	}
//	printf("ret=%d\n",ret);
//  return 0;
//}*/
//int main()
//{   
//    int i=0;
//	int ret= 1;
//	int sum=0;
//	for(i=1;i<=5; i++)
//	{
//	      ret= ret*i;
//		  sum += ret;
//	}
//	printf("sum=%d\n",sum);
//  return 0;
//}
//int main()
//{
//    int i=0;
//	for(i=1; i<=9999; i++)
//	{
//	    int count=1;
//		int tmp =i;
//        int sum = 0;
//		while(tmp/10)
//		{
//		     count++;
//			 tmp = tmp/10; 
//		}
//		tmp=i;
//		while(tmp)
//		{
//		    sum += pow(tmp%10,count);
//			tmp = tmp/10;
//		}
//		if(sum == i)
//		{
//			printf("%d\n",i);
//		}
//	}
//
//  return 0 ;
//}
//int  main()
//{
//	 int line=0;
//      int i =0;
//	  scanf("%d",&line);
//	  for(i=0; i<line; i++)
//	  {
//	      int j = 0;
//		  for(j=1; j<line-1-i; j++)
//		  {
//		       printf(" "); 
//		  }
//		  for(j=0; j<2*i+1; j++)
//		  {
//		     printf("*");
//		  }
//		  printf("\n");
//	   }
//	  for(i=0; i<line-1; i++)
//	  {
//	      int j = 0;
//		  for(j=0; j<=i; j++)
//		  {
//		       printf(" "); 
//		  }
//		  for(j=0; j<2*(line-1-i)-1; j++)
//		  {
//		     printf("*");
//		  }
//		  printf("\n");
//	   }
//	  
//
//     return 0;
//}
//int main()
//{
//	int i =0;
//	for(i=1; i<=9; i++)
//	{
//	     int j=0;
//		 for(j=1; j<=i; j++)
//		 {
//		     printf("%d*%d=%d\t",i,j,i*j);
//		 }
//		 printf("\n");
//	}
//   return 0;
//}