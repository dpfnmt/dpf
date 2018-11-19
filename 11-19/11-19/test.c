#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<assert.h>

//void* my_memmove(char* dest,const char* str, int n)
//{
//   char* pdest =(char*)dest;
//   const char* pstr =(const char*)str;
//   assert(dest);
//   assert(str);
//   if(pdest <= pstr && pdest >= pstr+n)
//   {
//         while(n--)
//		 {
//		   *pdest = *pstr;
//		 }
//   }
//   else
//   {
//        while(n--)
//		{
//		  *(pdest+n) = *(pstr+n);
//		}
//   }
//   return dest;
//}
//int main()
//{
//	char arr[10]={0};
//	char arr2[10]="abcdef";
//	char arr1[10]="abcdef";
//	my_memmove(arr,arr1,4);
//	my_memmove(arr+2,arr2,4);
//	printf("正常情况%s\n",arr);
//	printf("内存覆盖%s\n",arr+2);
//	system("pause");
//   return 0;
//}

#include<string.h>
void* my_momcpy(void* dest,void* str,unsigned count)
{
    char* pdest =(char*)dest;
    char* pstr =(char*)str;
	if(dest == NULL || str == NULL)
	{
	    return NULL;
	}
	while(count--)
	{
	  *pdest++ = *pstr++;
	}
	return dest;

}
int main()
{
	char dest[]="hello";
	char str[]="word";
	my_momcpy(dest,str,strlen(dest));
	printf("%s\n",dest);
    return 0;
}