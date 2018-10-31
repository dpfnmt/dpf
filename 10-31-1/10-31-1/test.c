#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define N 6
//int main()
//{
//	int a[N][N]={0};
//	int i=0;
//	for(i=0;i<N;i++)
//	{
//	    a[i][0]=1;
//		a[i][i]=1;
//	}
//	for(i=2;i<N;i++)
//	{
//	    int j = 0;
//		for(j=1;j<=i;j++)
//		{
//		    a[i][j]=a[i-1][j-1]+a[i-1][j];
//		}
//	}
//	for(i=0;i<N;i++)
//	{
//	   int j=0;
//	   for(j=0;j<5*(N-i)/2;j++)
//	   {
//	      printf(" ");
//	   }
//	   for(j=0;j<=i;j++)
//	   {
//	      printf("%5d",a[i][j]);
//	   }
//	   printf("\n");
//	}
//   return 0;
//}

//void print(int n)
//{
//	int count =0;
//    if(n<=9)
//		printf("%d ",n);
//	else
//	{
//	    print(n/10);
//		printf("%d ",n%10);
//	}
//   
//}
//int main()
//{
//	int num=0;
//	scanf("%d",&num);
//	print(num);
//	printf("\n");
//   return 0;
//}
//#include<windows.h>
//#include<string.h>
//
//int main()
//{
//	char arr1[]="hello xian";
//	char arr2[]="**********";
//    int left =0;
//	int right=strlen(arr1)-1;
//  while(left<=right)
//	{
//	arr2[left]=arr1[left];
//    arr2[right]=arr1[right];
//	printf("%s\n",arr2);
//	Sleep(1000);
//	system("cls");
//	left++;
//	right--;
//  }
//   return 0;
//}


//int count_one_bits(unsigned int value)
//{
//    int count =0;
//	while(value)
//	{
//	   if(value%2 == 1)
//		   count++;
//	   value = value/2;
//	}
//	return count;
//}
//int main()
//{
//	int i=0;
//	int len;
//	scanf("%d",&i);
//	len = count_one_bits(i);
//	printf("len=%d\n",len);
//   return 0;
//}


//void fib(int n,int m)
//{
//   int q=0;
//   int count=0;
//   q=n^m;
//   while(q)
//   {
//      q = q&(q-1);
//	  count++;
//   }
//   printf("count=%d\n",count);
//}
//int  main()
//{
//	int n=0;
//	int m=0;
//	printf("请输入两个整数:>");
//	scanf("%d %d",&n,&m);
//	fib(n,m);
//	printf("\n");
//   return 0;
//}
//#define N  3
//int main()
//{
//  int i=0;
//  int n=0;
//  int tmp =0;
//  int sum =0;
//  scanf("%d",&n);
//  for(i=0;i<n;i++)
//  {
//     tmp  = tmp*10+N;
//	 sum += tmp;
//  }
//  printf("sum =%d\n",sum);
//
//}

//int main()
//{
//	int line =0;
//	int i=0;
//	scanf("%d",&line);
//	for(i=0;i<line;i++)
//	{
//	   int j=0;
//	   for(j=0;j<line-1-i;j++)
//	   {
//	      printf(" ");
//	   }
//	   for(j=0;j<2*i+1;j++)
//	   {
//	      printf("*");
//	   }
//		 printf("\n");
//
//	   
//	}
//	for(i=0;i<line-1;i++)
//	{
//	     int j=0;
//		 for(j=0;j<=i;j++)
//		 {
//		    printf(" ");
//		 }
//		 for(j=0;j<2*(line-1-i)-1;j++)
//		 {
//		    printf("*");
//		 }
//		 printf("\n");
//	}
//  return 0;
//}


//#include<math.h>
//int main()
//{
//	int i=0;
//	for(i=1;i<=9999;i++)
//	{
//	   int count=1;
//	   int tmp=i;
//	   int sum=0;
//	   while(tmp/10)
//	   {
//		    count++;
//	      tmp =tmp/10;
//		  
//	   }
//	   tmp =i;
//	   while(tmp)
//	   {
//	      sum +=pow(tmp%10,count);
//           tmp =tmp/10;
//	   }
//	   if(sum == i)
//	   {
//	      printf(" %d\n",i);
//	   }
//	}
//    
//  return 0;
//}


int fic(char* arr)
{
   if(*arr == 0)
	   return 0;
   else
   return 1+fic(arr+1);
}
int main()
{
	char arr[]="abcdef";
    printf("%d\n",fic(arr));
   return 0;
}