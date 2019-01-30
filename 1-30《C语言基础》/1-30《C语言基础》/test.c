#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//     printf("hehe");
//	 return 0;
//}

//int main()
//{
//    printf("%d\n",sizeof(int));
//    printf("%d\n",sizeof(char));
//    printf("%d\n",sizeof(double));
//    printf("%d\n",sizeof(long));
//    printf("%d\n",sizeof(long double));
//    printf("%d\n",sizeof(float));
//    printf("%d\n",sizeof(short));
//	return 0;
//}

//int a = 20;
//int main()
//{
//    int a = 10	;
//	int b = 20;
//	printf("a = %d\n",a);
//    return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum =0;
//	scanf("%d%d",&a,&b);
//     sum = a + b;
//    printf("sum= %d\n",sum);
//   return 0;
//}

//int main()
//{
//	printf("test:\code\test.c\n");
//
//   return 0;
//}

//typedef unsigned int uint_32;
//int main()
//{
////观察num1和num2,这两个变量的类型是一样的
//    unsigned int num1 = 12;
//    uint_32 num2 = 13;
//	printf("%d\n",num1);
//	printf("%d\n",num2);
//     return 0;
//}

//#include <stdio.h>
//int main()
//{
//int num = 10;
//int *p = &num;
//*p = 20;
//printf("%d",num);
//return 0;
//}

struct stu
{
     char name[20];//名字
     int age; //年龄
     char id[15]; //学号
};

int main()
{
	struct stu s = {"张三", 20 , "20180101"};
	printf("name = %s age = %d id = %s\n", s.name, s.age, s.id);
    return 0;
}