#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int swap_num(int *arr, int len)
//{
//	int i = 0;
//	for (i=0; i < len; i++)
//	{
//		if (0 != arr[i] % 2)
//		{
//			printf("%d ",arr[i]);
//		}
//	}
//	for (i = 0; i < len; i++)
//	{
//		if (0 == arr[i] % 2)
//		{
//			printf("%d ",arr[i]);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	swap_num(arr, len);
//	
//	system("pause");
//	return 0;
//}


#include<stdio.h>
#include<windows.h>
 
void find_num(int arr[], int len)
{
	int i = 0;//循环变量
	int ret = 0;//记录所有值异或的结果
	int pos = 0;//记录ret二进制为第一个为1的位置
	int x = 0;//将一组值异或在x，得到1个没有相同数字的值
	int y = 0;//将另一组值异或在x，得到另1个没有相同数字的值
	for (i = 0; i < len; i++)
	{
		ret ^= arr[i];
	}//将数组的所有值异或
	for (i = 0; i < 32; i++)
	{
		if (1 == ((ret >> i) & 1))
		{
			pos = i;
			break;
		}
	}//找到ret二进制为第一个为1的位置
	for (i = 0; i < len; i++)
	{
		if (1 == ((arr[i] >> pos) & 1))
		{
			x ^= arr[i];
		}
		else
			y ^= arr[i];
	}//分组异或
	printf("x=%d,y=%d\n", x, y);
 
}
int main()
{
	int arr[] = { 1, 2, 3, 1, 2, 3, 4, 5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	find_num(arr, sz);
	system("pause");
	return 0;
}