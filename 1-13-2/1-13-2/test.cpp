#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//
//using namespace std;
//
//int Add(int a = 2, int b = 5)
//{
//    return a + b;
//}
//double Add(double a = 0, double b = 0)
//{
//    return a + b;
//}
//int main()
//{
//	//cout<<Add()<<endl; д����Ļ������ܲ�֪��������һ��������ϵͳ�����ˣ�
//	cout<<Add(10,20)<<endl;
//	cout<<Add(20,20)<<endl;
//    return 0;
// }

//#include<iostream>
//
//using namespace std;
//int Add(int a ,int b);
//double  Add(double a ,double b);
//int main()
//{
//	cout<<Add(10,20)<<endl;
//	cout<<Add(10.2,20.3)<<endl;
//    return 0;
//}


//#include<iostream>
//
//using namespace std;
//extern"C" int Add(int a,int b);
//int main()
//{
//	/*int ret =0;
//    ret = Add(10,20);
//   printf("ret= %d",ret);
//   printf("\n");*/
//	cout<<Add(1,2)<<endl;
//   return 0;
//}
//#include<stdio.h>
//void TestRef()
//{
//    const int a = 10;
//	int& ra  = a;  ����һ��ȷ����ֵ�����ܸı䡣
//	printf("%p\n", &a);
//	printf("%p\n", &ra);
 //   int& ra = a;   //<====������������
 //   int& rra = ra
	//printf("%p\n", &a);
 //   printf("%p\n", &ra);
//}
//
//int main()
//{
//    TestRef();
//    return 0;  
//}
//#include<stdio.h>
//int& TestRefReturn(int& a)
//{
//   a += 10;
//   return a;
//}
//int main()
//{
//	int a =10;
//	printf("a= %d\n",a);
//    TestRefReturn(a);
//}

#include<iostream>

using namespace std;

int& Add(int a, int b)
{
int c = a + b;
return c;
}                       //��������������֮�󣬾Ͱ����ÿռ仹����ϵͳ���Ҳ�����֮ǰ��ֵ
int main()              //���Ҫ�á�����ֵ���������ڱ��벻�ܺ����ľ�����
{
int& ret = Add(1, 2);
Add(3, 4);
cout << "Add(1, 2) is :"<< ret <<endl;
return 0;
}