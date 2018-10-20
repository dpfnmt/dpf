#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
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