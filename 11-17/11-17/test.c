#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//#include<stdlib.h>
//void * my_memcpy(void *dest,void *src,unsigned count )
//{
//	  char* pdest =(char*) dest;
//	  char* psrc = (char*)src;
//	if (dest == NULL || src == NULL)
//	{
//		return NULL;
//	}
//	while (count--)
//	{
//		*pdest++ = *psrc++;
//	}
//	return dest;
//}
//int main()
//{
//	char src[] = "hello";
//	char dest[] = "world";
//	my_memcpy(dest, src, strlen(src));
//	printf("%s", dest);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//#include<assert.h>
// 
//void *my_memmove(void *dest,const void *src,int n)
//{
///*��Ϊchar����Ϊ1�ֽڣ����Խ�����ת��Ϊchar*
//���в�������������Ϊ�����Ķ������ַ���*/
//char* pdest=(char *)dest; 
//const char* psrc=(const char *)src;
//assert(dest);
//assert(src);
//if(pdest <= psrc&&pdest >=psrc+n)//��������´�ǰ��󿽱�
//{
//	while(n--)
//	{
//		*pdest = *psrc;
//	}
//}
//else //�������ڴ渲��ʱ�Ӻ���ǰ����
//{
//	while(n--)
//	{
//		*(pdest+n)=*(psrc+n);
//	}
//} 
//  return dest;
//}
// 
//int main()
//{
//	char arr[10]="abcdefg";
//	char arr0[10]="abcdefg";
//	char arr1[10]={0};
//	my_memmove(arr+2,arr,4);
//	my_memmove(arr1,arr0,5);
//	printf("�ڴ渲�������%s\n",arr+2);
//	printf("���������%s\n",arr1);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//#include<stdlib.h>
//char *my_strncpy(char *dest, char* src, int n)
//{
//assert(src);
//assert(dest);
//assert(n > 0);
//while(n&&*src)
//{
//*dest++=*src++;
//n--;
//}
//return dest;
//}
//int main()
//{
//char str1[]= "ljjloveljj";//ָ������
//char str2[]= "dwh";
//int n=strlen(str2)+1;
//my_strncpy(str1, str2, n);//nΪstr2���ַ�������(dwhloveljj),��n<10�����Ĳ�������Ҳ��һ�������
//printf("%s", str1);
//system("pause");
//return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//#include<assert.h>
//#include<stdlib.h>
//#include<string.h>
////#pragma warning(disable:4996)
//char *my_strncat(char *dest, char* src, int n)
//{
//	assert(src);
//	assert(dest);
//	assert(n > 0);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (n&&*src)
//	{
//		*dest++ = *src++;
//		n--;
//	}
//	return dest;
//}
//int main()
//{
//	char str1[32] = "ljjlove";
//	char str2[] = "dwh";
//	int n = strlen(str2);
//	my_strncat(str1, str2, n);
//	printf("%s", str1);
//	system("pause");
//	return 0;
//}


//#include<stdio.h>
//#include<windows.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//#pragma warning(disable:4996)
//int my_strncmp(const char* dest, const char* src, int n)
//{
//	int ret = 0; 
//	int res = 0;
//	assert(dest);
//	assert(src);
//	
//	while (n && !(ret = *(unsigned char*)dest - *(unsigned char*)src) && *dest)
//	{
//	
//		src++;
//		dest++;
//		n--;
//	}
//		if (ret > 0)
//		{
//			res = 1;
//		}
//		else if (ret < 0)
//		{
//			res = -1;
//		}
//		else{
//			res = 0;
//		}
//	return res;
//}
//int main()
//{
//	char *str1 = "123456789";
//	char *str2 = "12abcde";
//	int ret=my_strncmp(str1, str2, 2);
//	printf("%d\n",strncmp(str1, str2, 4));
//	printf("%d", ret);
//	system("pause");
//	return 0;
//}
//
//char arr[] = "abcdef";//7
// 	printf("%d\n", sizeof(arr));//7
// 	printf("%d\n", sizeof(arr+0));//4
// 	printf("%d\n", sizeof(*arr));//1//sizeof(arr[0]);
// 	printf("%d\n", sizeof(arr[1]));//1
// 	printf("%d\n", sizeof(&arr));//4
// 	printf("%d\n", sizeof(&arr+1));//4
// 	printf("%d\n", sizeof(&arr[0]+1));//4
// 
// 	printf("%d\n", strlen(arr));//6
// 	printf("%d\n", strlen(arr+0));//6
// 	//printf("%d\n", strlen(*arr));//err
// 	//printf("%d\n", strlen(arr[1]));//err
// 	printf("%d\n", strlen(&arr));//6
// 	printf("%d\n", strlen(&arr+1));//x
// 	printf("%d\n", strlen(&arr[0]+1));//


////int main()
////{
////	int a[5] = { 1, 2, 3, 4, 5 };
////	int *ptr = (int *)(&a + 1);
////	printf( "%d,%d", *(a + 1), *(ptr - 1));
////	return 0;
////}


 
 /*struct Test
 {
 	int Num;
 	char *pcName;
 	short sDate;
 	char cha[2];
 	short sBa[4];
 }*p = (struct Test*)0x100000;
 */


int main()
{
	int a[4] = { 1, 2, 3, 4 };
	int *ptr1 = (int *)(&a + 1);
	int *ptr2 = (int *)((int)a + 1);
	printf("%x,%x", ptr1[-1], *ptr2);
	return 0;
}