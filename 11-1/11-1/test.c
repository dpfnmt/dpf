#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//int strlen(const char *str)
//{
//	assert(str != NULL);
//	if(*str == 0)
//	    return 0;
//	else
//		return 1 + strlen(str+1);
//   /*int count =0;
//   while(*str != '\0')
//   {
//       count++;
//	   str++;
//   }
//   return count;*/
//}
//int main()
//{
//   char arr[]="abcdef";
//   int len = strlen(arr);
//   printf("len =%d",len);
//   printf("\n");
//}

//#include<string.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* str)
//{
//	
//     char * ret =dest;
//	assert(*str != NULL);   //  断言;
//     while(* dest++ = * str++)
//	// 4 while(* str++ = * dest++) //用了const写反会报错;
//	{
//	  ;
//	}
//	return ret;
//	// 2 assert(*str != NULL);
//   // while(* dest++ = * str++)
//	//{
//	//  ;
//	//}
//	
//	
//	// 1 int* ret=dest;
//	//while(*str != '\0')
//	//{
//	 //  *dest = *str;
//	 //  dest++;
//	//   str++;
//	//}
//	//*dest = *str;
//	//return dest;
//}
//
// int main()
//{
//	char arr[20]={0};
//	char* p="xian";
//	my_strcpy(arr,p);
//	printf("%s\n",arr);
//   return 0;
//}
////1 2 int main()
////{
////	char arr[20]={0};
////	char* p="xian";
////	my_strcpy(arr,p);
////	printf("%s\n",arr);
////   return 0;
////}