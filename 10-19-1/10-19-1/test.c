#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20]={0};
//	for(i=0; i<3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s",&password);
//		if(0 == strcmp(password,"123456"))
//		{
//		   break;
//		}
//		else
//		{
//		  printf("密码输入错误，请重新输入!\n");
//		}
//	}
//	if(i<3)
//		printf("登录成功\n");
//	else
//		printf("退出程序\n");
// return 0;
//}

//int main()
//{
//	//char arr1[]={"xian zheng  mei"};
//	char arr[]={"huang ying chang an"};
//	//strcpy(arr2,arr1);
//	//printf("%s\n",arr2);
//	memset(arr,'*', 5);
//	printf("%s\n",arr);
//  return 0;
//}
//
//int print( int n)
//{
//  if(n/9)
//	  print(n/10);
//  printf("%d ",n%10);
//}
//int main()
//{
//	int num =0;
//	scanf("%d",&num);
//	print(num);
//  return 0;
//}


//*int fib(int n)
//{
//    if(n<=2)
//		return 1;
//	else
//	   return fib(n-1)+fib(n-2);
//
//}
//int main()
//{
//	int n =0;
//	int ret =0;
//	scanf("%d",&n);
//	ret = fib(n);
//	prin*/tf("%d\n",ret);
//  return 0;
//}


//int fib(int n)
//{
//   int a=1;
//   int b=1;
//   int c=0;
//   ///if(n<=2)
//	 ////  return 1;
//   //else
//   //}
//      int  i = 0;
//	  for(i=2; i<n; i++)
//	  {
//	     c = a+b;
//		 a = b;
//		 b = c;
//	  }
//	  return c;
//   
//}
//int main()
//{
//	int n =0;
//	scanf("%d",&n);
//	printf("fib(n)=%\n",fib(n));
//  return 0;
//}


//int main()
//{
//	int i=0;
//     int n = 0;
//	 int ret =1;
//	 scanf("%d",&n);
//     for(i=1; i<=n;i++)
//	 {
//	    ret  = ret*i;
//	 }
//	 printf("ret=%d\n",ret);
//    return 0;
//}

//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for(i=1;i<=2;i++)
//	{
//	   ret = ret*i;
//	   sum += ret;
//	}
//	printf("sum=%d\n",sum);
//	return 0;
//}

//#include<windows.h>
//#include<time.h>
//int main()
//{
//	char arr1[] = "welcome  to  xian";
//	char arr2[] = "*****************";
//	int left =0;
//	int right = strlen(arr1)-1;
//	while(left<=right)
//	{
//	   arr2[left] = arr1[left];
//	   arr2[right] = arr1[right];
//       printf("%s\n",arr2);
//	   Sleep(1000);
//	   system("cls");
//	   left++;
//	   right--;
// 	}
//
//   return 0;
//}



//#include<math.h>
//int main()
//{
//   int i=0;
//   for(i=1;i<=9999; i++)
//   {
//      int count =1;
//	  int tmp =i;
//	  int sum = 0;
//	  while(tmp/10)
//	  {
//		  count++;
//	       tmp=tmp/10;
//      }
//	  tmp = i;
//      while(tmp)
//	  {
//	    sum += pow(tmp%10,count);
//		tmp = tmp/10;
//	  }
//	  if(sum == i)
//	  {
//	     printf("%d\n",i);
//	  }
//   }
//   return 0;
//}


//int main()
//{
//   int i = 0;
//   int tmp = 0;
//   int n = 0;
//   int sum =  0;
//   scanf("%d",&n);
//	for(i=0; i<n; i++)
//	{
//	   tmp = tmp*10+2;
//       sum += tmp;
//	}
//	printf("sum=%d\n",sum);
//   return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	int i = 0;
//	scanf("%d",&line);
//	for(i=0;i<line;i++)
//	{
//	   int j=0;
//	   for(j=0;j<line-1-i;j++)
//	   {
//	     printf(" ");
//	   }
//	   for(j=0;j<2*i+1;i++)
//	   {
//	      printf("*");
//	   }
//	   printf("\n");
//	}
//	for(i=0;i<line-1;i++)
//	{
//	   int j=0;
//	   for(j=0;j<=i;i++)
//	   {
//		   printf(" ");
//	   }
//	   for(j=0; j<2*(line-1-i)-1;j++)
//	   {
//	      printf("*");
//	   }
//	   printf("\n");
//	}
//  return 0;
//
//}

//#include<stdio.h>
//int DigitSum(int n)
//{
//   if(n<10)
//	   return n;
//   else
//	   return n%10+DigitSum(n/10);
//}
//int main()
//{
//  int n = 0;
//  int ret = 0;
//  scanf("%d",&n);
//   ret =DigitSum(n);
//   printf("%d\n",ret);
//   return 0;
//


int strlen(char str[])
{
   if( *str == 0)
   {
      return 0;
   }
   else
   {
      return 1 + strlen(str+1);
   }
}
int main()
{
   int *p="abcdef";
   int ret =0;
   scanf("%s",&*p);
   ret = strlen(*p);
   printf("ret=%d\n",ret);
	   return 0;
}