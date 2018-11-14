#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//   const char* str1 ="abcdef";
//   const char* str2 ="bbbbbb";
//  if(strlen(* str2)-strlen(* str1)>0)
//  {
//      printf("str2 > str1\n");
//  }
//  else
//  {
//     printf("str1>str2\n");
//  }
//  return 0;
//}

//int my_strlen(const char* str)
//{
//   if(*str == '\0')
//	   return 0;
//   else
//	   return 1+strlen(str+1);
//}
//int my_strlen(const char* str)
//{
//   int count =0;
//   while(*str)
//   {
//      count++;
//	    str++;
//   }
//   return count;
//}
//int my_strlen(const char* str)
//{
//   const char* p = str;
//   while(*p != '\0')
//	   p++;
//   return p-str;
//}
//int main()
//{
//	char a[]="abcdef";
//	int ret = my_strlen(a);
//	printf("ret= %d\n",ret);
//   return 0;
//}


//char* my_strcpy(char * dest, const char* str)
//{
//     char* ret=dest;
//	while(*dest++ = *str++)   //不是等于  是复制
//	{
//	     ;
//	}
//	*dest = *str;
//	return ret;
//}

//char* my_strcpy(char * dest, const char* str)
//{
//   char *ret =dest;
//   assert(str != NULL);
//   while(*str != '\0')
//   {
//	   *dest = *str;   
//      dest++;
//	  str++;
//   }
//   *dest = *str;
//   return ret;
//}
//int main()
//{
//	char arr[20]={0};
//	char *p="abcdef";
//     my_strcpy(arr,p);
//	printf("%s\n",arr);
//   return 0;
//}

//char* my_strcat(char* dest, const char* str)
//{
//  char* ret=dest;
//  while(*dest)
//  {
//   dest++;
//  }
//  while(*dest++ = *str++)
//  {
//    ;
//  }
//  return ret;
//}
//int main()
//{
//   char arr1[100]="abcde";
//   char arr2[100]="bcdef";
//   my_strcat(arr1,arr2);
//   printf("%s",arr1);
//  return 0;
//}

//char* my_strstr(const char* str1,const char* str2)
//{
//   assert(str1);
//   assert(str2);
//    const char* cp = (char*)str1;
//   const char* su = (char*)str2;
//    const char s1 = NULL;
//   if(*str2 != '\0')
//	   return NULL;
//   while(*cp)
//   {
//      s1 = cp;
//	  su =str2;
//	  while(*s1 && su && (*s1 ==*su))
//	  {
//	    s1++;
//		su++;
//	  }
//	  if(*su == '\0')
//		  return cp;
//	  cp++;
//   }
//}
//
//int main()
//{
//   char arr1[100]="abcdef";
//   char arr2[100]="dfggjj";
//   my_strstr(arr1,arr2);
//   printf("%s\n",arr1);
//   return 0;
//}


//int my_strcmp(const char* dest,const char* str)
//{
//   int ret =0;
//   while(!(ret =*(unsigned char*)dest-*(unsigned char*)str)&&*dest)
//      ++dest;
//      ++str;
//	  if(ret <0)
//		  ret = -1;
//	  else if(ret > 0)
//		  ret =1;
//	  else
//		  return (ret);
//
//}
//int main()
//{
//   char arr1[]="abcdef";
//   char arr2[]="abcdfg";
//
//   //my_strcmp(arr1,arr2);
//   printf("%s\n", my_strcmp(arr1,arr2));
//  return 0;
//}

 ///* char* my_strstr(const char*str1, const char*str2)
 //{
 //	const char *s1 = str1;
 //	const char *s2 = str2;
 //	const char *cp = str1;
 //	assert(str1 != NULL);
 //	assert(str2 != NULL);
 //	
 //	if(*str2 == '\0')
 //		return (char*)str1;
 //
 //	while(*cp)
 //	{
 //		s1 = cp;
 //		s2 = str2;
 //
 //		while(*s1 && *s2 && *s1 == *s2)
 //		{
 //			s1++;
 //			s2++;
 //		}
 //		if(*s2 == '\0')
 //			return (char *)cp;
 //
 //		cp++;
 //	}
 //	return NULL;
 //}
 //
 //int main()
 //{
 //	char *p1 = "abcdef";
 //	char *p2 = "abedabcdefasdf";
 //	char *ret = my_strstr(p2, p1);
 //	printf("%s\n", ret);
 //	return 0;
 //}*/


 //int my_strcmp(const char*str1, const char*str2)
 //{
 //	assert(str1 != NULL);
 //	assert(str2 != NULL);
 //
 //	while(*str1 == *str2)
 //	{
 //		if(*str1 == '\0')
 //		{
 //			return 0;
 //		}
 //		str1++;
 //		str2++;
 //	}
 //	return *str1-*str2;
 //}
 //int main()
 //{
 //	char*str = "zpengwei@yeah.net";
 //	char arr[20] = {0};
 //	char *ret = NULL;
 //	char *p = "@.";
 //
 //	strcpy(arr, str);
 //
 //	for(ret=strtok(arr, p); ret != NULL; ret=strtok(NULL, p))
 //	{
 //		printf("%s\n", ret);
 //	}
 //	char *p = "zpengwei@yeah.net";
 //	printf("%s\n", strtok(arr, "@."));
 //	printf("%s\n", strtok(NULL, "@."));
 //	printf("%s\n", strtok(NULL, "@."));
 //
 //	
 //	return 0;	
 //}


//void* my_memcpy(void* dest, const void* src, int count)
//{
//	void *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while(count--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}

 void* my_memmove(void*dest, const void*src, int count)
 {
 	void *ret = dest;
 	assert(dest != NULL);
 	assert(src != NULL);
 	
 	if(dest<src)
 	{
 		//前-->后
 		while(count--)
 		{
 			*(char*)dest = *(char*)src;
 			((char*)dest)++;
 			((char*)src)++;
 		}
 	}
 	else
 	{
 		//后->前
 		while(count--)
 		{
 			*((char *)dest+count) = *((char*)src+count);
 		}
 	}
 	return ret;
 }
 int  main()
 {
 	//char arr[20] = {0};
 	//strcpy(arr, "hello bit");
 	int arr1[] = {1,2,3,4,5,6,7,8,9,10};
 
 	//my_memcpy(arr1+2, arr1, 16);
 	my_memmove(arr1, arr1+2, 16);
 	//int arr2[20] = {0};
 
 	//my_memcpy(arr2, arr1, 12);
 	
 	//strcpy(arr2, arr1);
 	return 0;
 }

 
 /*int main()
 {
 	int arr1[] = {1,2,3,4,5,6};
 	int arr2[] = {1,2,3,4};
 	int ret = memcmp(arr1, arr2, 20);
 	printf("%d\n", ret);
 	return 0;
 }*/