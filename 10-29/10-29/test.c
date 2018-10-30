#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int my_strlen(char *str)
//{
//   if(*str == 0)
//   {
//       return 0;
//   }
//   else
//	   return 1 + my_strlen(str+1);
//}
//int main()
//{
//	char arr[]= "abcdef";
//	int len =my_strlen(arr);
//	printf("len = %d\n",len);
//   return 0;
//}

//int fic(int n)
//{
//   if(n<=2)
//	   return 1;
//   else
//	   return fic(n-1)+fic(n-2);
//}
//int main()
//{
//   int n= 0;
//   int ret =0;
//   scanf("%d",&n);
//   ret = fic(n);
//   printf("ret = %d\n",ret);
//  return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int fic(int n)
//{
//   int i=0;
//   int j=0;
//   for(i=1; i<=n; i++)
//   {
//       for(j=1; j<=i; j++)
//	   {
//	      printf("%d*%d=%-2d ",i,j,i*j);
//	   }
//	   printf("\n");
//   }
//}
//int main()
//{
//	int n =0;
//	int ret =0;
//	scanf("%d",&n);
//   printf("%d",fic(n));
//  return 0;
//}

//#include<windows.h>
//int main()
//{
//
//	char arr1[] = "hello   xian ";
//    char arr2[] = "*************";
//	int left =0;
//	int right = strlen(arr1)-1;
//	while(left<=right)
//	{
//     arr2[left]=arr1[left];
//     arr2[right]=arr1[right];
//	 printf("%s\n",arr2);
//	 Sleep(1000);
//	 system("cls");
//	 left++;
//	 right--;
//	}
//   return 0;
//}

int print(int n)
{
   if(n<=9)
	   return n;
   else
   {
      print(n/10);
	  printf("%d ",n%10);
   }
}
int main()
{
 int num=0;
 printf("请输入一个整数:>");
 scanf("%d",&num);
 print(num);
 printf("\n");
 
return 0;
}