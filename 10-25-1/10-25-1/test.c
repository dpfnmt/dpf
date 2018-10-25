#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	//int i =0, a=0, b=2,c=3,d=4;
//	int i =0, a=1, b=2,c=3,d=4; 
//	//i=a++&&++b&&d++;
//	i=a++||++b||d++;
//    printf(" a=%d\n b=%d\n c=%d\n d=%d\n ",a,b,c,d);
//	return 0;
//}

//i/*nt main()
//{
//   int a =0;
//   int b=0;
//    b=a>5? 3:-3;
//   printf("%d\n",b);
//   return 0;
//}*/

//
//int strlen(char arr[])
//{
//   if(*arr == 0 )
//	   return 0;
//   else
//	   return 1+strlen(arr+1);
//}
//int main ()
//{
//   char arr[]="abcdf";
//
//   printf("%d\n",strlen(arr));
//  return 0;
//}

//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n",a);
//   return 0;
//}

//int main()
//{
//	int a =-1;
//	int b = 3;
//	int c =0;
//	//c = a^b;
//	//1111.....11111111
//	//0000.....00000011
//	//1111.....11111100
//	//1111.....11111011
//	//1000..........100
//
//	//c = a&b;
//	//1111.....11111111
//	//0000.....00000011
//	//0000.....00000011
//
//	//c = a|b;
//	//1111.....11111111
//	//0000.....00000011
//	//1111.....11111111
//	printf("%d\n",c);
//   return 0;
//}



//struct Student
//{
//	char name[20];
//	int age;
//	char sex[5];
//};
//
//int main()
//{
//    char* p = "abcdef";//
//    struct Student s = {"lisi", 23, "ÄÐ"};
//	struct Student* ps = &s;
//	printf("%s %d %s\n", ps->name,ps->age,ps->sex);


#include<string.h>
struct Student
{
	char name[20];
	int age;
	char sex[5];
};
int main()
{
   struct Student s;
   strcpy(s.name,"zhangsan");
   s.age = 20;
   strcpy(s.sex, "ÄÐ" );
   printf("%s %d %s\n",s.age ,s.name ,s.sex );
   return 0;
}