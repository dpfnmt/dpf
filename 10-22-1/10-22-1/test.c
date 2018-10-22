#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int i =0;
//	
//	for(i=1; i<=99999; i++)
//	{  
//		int count =1;
//	   int tmp =i;
//	   int sum =0;
//	   while(tmp/10)
//	   {
//		   count++;
//	      tmp = tmp/10;
//	   }
//       tmp = i;
//	   while(tmp)
//	   {
//	      sum += pow(tmp%10,count);
//			  tmp =tmp/10;
//	   }
//	   if(sum == i)
//	   {
//	     printf("%d\n",i);
//	   }
//	}
//  return 0;
//}

//int main()
//{
//	int line =0;
//	int i = 0;
//    scanf("%d", &line);
//    for(i=0;i<line;i++)
//	{
//	    int j = 0;
//		for(j=0;j<line-1-i;j++)
//		{
//		   printf(" ");
//		}
//		
//		for(j = 0;j<2*i+1; j++)
//		{
//		   printf("*");
//		}
//		printf("\n");
//	}
//	for(i=0; i<line-1; i++)
//	{
//	    int j=0;
//		for(j=0; j<=i; j++)
//		{
//		   printf(" ");
//		}
//		for(j=0;j<2*(line-1-i)-1; j++)
//		{
//		   printf("*");
//		}
//		printf("\n");
//
//	}
//
//
//  return 0;
//}

//int main()
//{
//   int n =0;
//   int tmp = 0;
//   int i=0;
//   int sum =0;
//    scanf("%d", &n);
//   for(i=1; i<=n; i++)
//   {
//      tmp = tmp*10+2;
//	  sum += tmp;
//   }
//   printf("sum= %d\n",sum);
//}



//int chen(int n)
//{
//    int i =0;
//	for(i=1;i<=n;i++)
//	{
//	   int j=0;
//	   for(j=1; j<=i; j++)
//	   {
//	     printf("%2d*%2d=%2d ",i,j,i*j);
//	   }
//	   printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	int ret =0;
//    scanf("%d",&n);
//	ret = chen(n);
//	
//  return 0;
//}


#include<windows.h>
//int main()
//{
//	char arr1[]="welcome  to   xian";
//	char arr2[]="******************";
//     int left =0;
//	 int right=strlen(arr1)-1;
//	while(left<=right)
//	 {
//	    arr2[left]=arr1[left];
//	    arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	 }
//  return 0;
//}



//int fac(int n)
//{
//   if(n<=1)
//	   return 1;
//   else
//	   return n*fac(n-1);
//}
//int main()
//{
//	int ret =0;
//	int n=0;
//	scanf("%d",&n);
//	ret =fac(n);
//	printf("ret =%d\n",ret);
//   return 0;
//}
//int	print(int n)
//{
//   if(n/9)
//	   print(n/10);
//   printf("%d ",n%10);
//}
//int main()
//{
//	int num=0;
//	scanf("%d",&num);
//	print(num);
//   return 0;
//}



//int fic(int n)
//{
//     if(n<=2)
//		 return 1;
//	 else
//		 return fic(n-1)+fic(n-2);
//}
//int main()
//{
//   int n=0;
//   int ret =0;
//   scanf("%d",&n);
//   ret=fic(n);
//   printf("ret=%d\n",ret);
//}

//int fic(int n)
//{
//     int a = 1;
//	 int b = 1;
//	 int c = 0;
//	 if(n<=2)
//	 {
//	    return 1;
//	 }
//	 else
//	 {
//          int i =0;
//	      for(i=2;i<n;i++)
//		  {
//		      c =a+b;
//			  a=b;
//			  b=c;
//		  }
//		  printf("%d\n",c);
//	 }
//}
//int main()
//{
//   int n=0;
//   
//   scanf("%d",&n);
//   
//   printf("%d\n",fic(n));
//}


//int fic(int n)
//{
//     int a = 1;
//	 int b = 1;
//	 int c = 1;
//	 int i = 0;
//	  for(i=2;i<n;i++)
//		  {
//		      c =a+b;
//			  a=b;
//			  b=c;
//		  }
//	return c;
//}
//
//int main()
//{
//   int n=0;
//   
//   scanf("%d",&n);
//   
//   printf("%d\n",fic(n));
//}

int main()
{
  
}