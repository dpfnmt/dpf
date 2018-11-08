#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
//void LevoStrThree(char *str,int len,int k)
//{
//	int i = 0;
//    k %= len;
////    int i = 0;
//    for (i=0; i < k; i++)//循环k次
//    {
//        int j = 0;
//        char temp = str[j];
//        for (j=0; j < len - 1; j++)//从第二个字符开始，字符依次向左覆盖一位
//        {
//            str[j] = str[j + 1];
//        }
//        str[j] = temp;//将第一个字符放在字符串最后位置
//    }
//
//}
//
//void test()
//{
//    char str[] = "ABCD2345";
//    char *ret = NULL;
//    int len = strlen(str);
//    printf("原字符串:%s\n",str);                                                                     
//    LevoStrThree(str, len, 4);
//    printf("左旋后的字符串:%s\n", str);
//
//}
//
//int main()
//{
//    test();
//    system("pause");
//    return 0;
//}

//void Left(char c[], int len , int k)
//{
//	k = k%len;
//	char *p = (char *)malloc((2*len+1)*sizeof(char));
//	strcpy(p, c);
//	strcat(p, c);
//	strncpy(c, p+k, len);
//	free(p);
//}
// 
//int main()
//{
//	char c[] = "ABCDE";
//	int k = 2;
//	int len = strlen(c);
//	printf("左旋前：%s\n", c);
//    Left(c,len,k);
//	printf("左旋后：%s\n", c);
//	return 0;
//}


//#include<stdio.h>
//#include<assert.h>
//#include<windows.h>
//void levo(char *pstr, int sz,int key)
//{
//	int i = 0;
//	int j = 0;
//	assert(pstr != NULL);
//	//int i = 0;
//	//int j = 0;
//	for (i = 0; i < key; i++)
//	{
//		char tmp = pstr[0];
//		for (j = 0; j <sz - 1; j++)
//		{
//			pstr[j] = pstr[j + 1];
//		}
//		pstr[sz - 1] = tmp;
//	}
//}
//int main()
//{          
//	char str[] = "ABCDEFGH";
//	int key = 0;
//	int sz = sizeof(str) / sizeof(str[0])-1;
//	printf("请输入你要旋转字符的个数:>");
//	scanf("%d", &key);
//	levo(str,sz,key);
//	printf("%s", str);
//	system("pause");
//	return 0;
//}
//#include<string.h>
//int findLeftMove(char *str, char *substr)
//{
//    int strLen = strlen(str);
//    int subStrLen = strlen(substr);
//    if (strLen != subStrLen)
//    {
//        return -1;
//    }
//	int newSize = 0;
//    newSize = 2 * strLen + 1;
//    char *mem = (char*)malloc(sizeof(char)*newSize);
//    strcopy(mem, str);//拷贝字符串
//    strcat(mem, str);//拼接字符串
//
//    if (strstr(mem, substr))
//    {
//        return 1;
//    }
//    free(mem);
//    return -1;
//}
//
//int main()
//{
//
//    char str[20];
//    char substr[20];
//    int ret = 0;
//    printf("请输入初始字符串:\n");
//    scanf("%s", str);
//    printf("请输入要查找的左旋后的字符串:\n");
//    scanf("%s", substr);
//    ret = findLeftMove(str, substr);
//    if (ret == 1)
//    {
//        printf("找到了\n");
//    }
//    else if (ret == -1)
//    {
//        printf("没有找到\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//int find_substring(char *msg, char *substring)
//{
//	int len=strlen(msg);
//	char *tmp=(char*)malloc(2*len+1);  //申请2倍数组空间
//	if(len==strlen(substring))  //保证要比较的两个字符串长度相同
//	{
//		strcpy(tmp, msg);  //原来的字符串拷贝到新空间里
//		strcat(tmp,msg);  //字符串的拼接，实现复制
//		if(strstr(tmp, substring)!=NULL)
//		{
//			return 1;
//		}
//	}
//	free(tmp);  //释放申请的新空间
//	return 0;
//}
//int main()
//{
//	char arr1[]="abc123";
//	char arr2[]="abc123";
//	printf("%d\n",find_substring(arr1, arr2));
//	return 0;
//}


//#include <stdio.h>
//#include <windows.h>
//#include <string.h>
//#include<assert.h>
//void levo(char *pstr, int sz,int key)
//
//{
//	
//       int i = 0;
//	
//        int j = 0;
//
//	assert(pstr != NULL);
//
//       for (i = 0; i < key; i++)
//	
//       {
//	
//	   char tmp = pstr[0];
//	
//	   for (j = 0; j <sz - 1; j++)
//	
//	   {
//		
//	     pstr[j] = pstr[j + 1];
//	
//	   }
//		
//           pstr[sz - 1] = tmp;
//	
//        }
//}
//
//int judge(char arr1[],char arr2[])
//{
//    int i = 0;
//    int j = 0;
//    int lenght = strlen(arr1);
//    for (j = 1; j <= lenght; j++)
//    {
//        {
//            int tem = arr1[0];
//            for (i = 0; i < lenght - 1; i++)
//            {
//               arr1[i] = arr1[i + 1];
//            }
//            arr1[lenght - 1] = tem;
//        }
//        if (0 == strcmp(arr1, arr2))
//        {
//            return 1;
//        }
//    }
//    return 0;
//}
//int main()
//{
//    char arr1[] = "AABCD";
//    char arr2[] = "BCDAA";
//	int key = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0])-1;
//	printf("请输入你要旋转字符的个数:>");
//	scanf("%d", &key);
//	levo(arr1,sz,key);
//	//printf("%s", arr1);
//    printf("arr1 = %s\n", arr1);
//    printf("arr2 = %s\n", arr2);
//    printf("%d\n", judge(arr1, arr2));
//    system("pause");
//    return 0;
//}
//#include<stdio.h>
//#include<windows.h>
//
//int main()
//{
//    char arr1[]="hello xian";   
//    char arr2[]="**********";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while(left<=right)
//	{
//	    arr2[left]=arr1[left];
//	    arr2[right]=arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//
//	}
//   return 0;
//}
//#include<windows.h>
//int main()
//{
//  char arr1[]="guojianqiang";
//  char arr2[]="guojianqiang";
//  char arr3[]="guojianqiang";
//  char arr4[]="guojianqiang";
//  
//  printf("%s\n",arr1);
//  Sleep(800);
//  printf("%s\n",arr2);
//  Sleep(800);
//  printf("%s\n",arr3);
//  Sleep(800);
//  printf("%s\n",arr4);
//  Sleep(1000);
//  return 0;
//}
