#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>

//using namespace std;
//
//int main()
//{
//    cout<<"hello word"<<endl;
//	return 0;
//}

//using namespace std;
//
//int main()
//{
//	cout<<"hello word !!!" << endl;
//	return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//   int a;
//   char c;
//   double b;
//
//   cin>>a;
//   cin>>b>>c;
//
//   cout<<a<<endl;
//   cout<<b<<c<<endl;
//
//   return 0;
//}


//ȱʡ������
//#include<iostream>
//
//using namespace std;
//void Teasfunc(int a = 10,int b = 20,int c = 30)
//{
//    cout<<"a = "<<a<<endl;
//	cout<<"b = "<<b<<endl;
//	cout<<"c = "<<c<<endl;
//}
//int main()
//{
//	Teasfunc();
//	Teasfunc(40);
//	Teasfunc(40,40);
//	//Teasfunc(40,40,40);
//    return 0;
//}

//����������:������������������ʱ�����������һ���������޷�ʶ��
//#include<iostream>
////#include<stdio.h>
//using namespace std;
//
////int Add(int left , int right)
////{
////   return left+right;
////}
//int Add(double left , double right)
//{
//   return left+right;
//}
//double Add(double left , double right)
//{
//   return left+right;
//}
////long Add(long left , long right)
////{
////   return left+right;
////}
//int main()
//{
//	cout<<Add(20,30)<<endl;
//	cout<<Add(10.5,20.5)<<endl;
//	//cout<<Add(10L,20L)<<endl;
//    
//    return 0;
//}
//#include<iostream>
//using namespace std;
//
//
//#include <time.h>
//
//int TestAuto()
//{
//     return 10;
//}
//int main()
//{
//    int a = 10;
//    auto b = &a;
//    auto c = 'a';
//    auto d = TestAuto();
//   cout << typeid(a).name() << endl;
//   cout << typeid(b).name() << endl;
//cout << typeid(d).name() << endl;
//auto e; �޷�ͨ�����룬ʹ��auto�������ʱ���������г�ʼ��
//return 0;
//}
//inline int Add(int left, int right)
//{
//    return left+right;
//}
//
//int main()
//{
//	int ret =0;
//	ret = Add(1,2);
//	cout<<ret<<endl;
//    return 0;
//}
//struct A
//{
//int a[10000];
//};
//A a;
//A TestFunc1()
//{
//return a;
//}
//A& TestFunc2()
//{
//return a;
//}
//void TestReturnByRefOrValue()
//{
//// ��ָ����Ϊ�����ķ���ֵ����
//size_t begin1 = clock();
//for (size_t i = 0; i < 100000; ++i)
//TestFunc1();
//size_t end1 = clock();
//// ��������Ϊ�����ķ���ֵ����
//size_t begin2 = clock();
//for (size_t i = 0; i < 100000; ++i)
//TestFunc2();
//size_t end2 = clock();
//// �������������������֮���ʱ��
//cout << "TestFunc1 time:" << end1 - begin1 << endl;
//cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}
//// ��������10�Σ�ָ���������Ϊ����ֵЧ�ʷ��������
//int main()
//{
//for (int i = 0; i < 10; ++i)
//TestReturnByRefOrValue();
//return 0;
//}
//struct A
//{
//   int a[100000];
//};
//void TestFunc1(A a)
//{
//}
//void TestFunc2(A& a)
//{
//}
//void TestRefAndValue()
//{
//A a;
//// ��ָ����Ϊ��������
//size_t begin1 = clock();
//for (size_t i = 0; i < 10000; ++i)
//TestFunc1(a);
//size_t end1 = clock();
//// ��������Ϊ��������
//size_t begin2 = clock();
//for (size_t i = 0; i < 10000; ++i)
//TestFunc2(a);
//size_t end2 = clock();
//
//// �ֱ���������������н������ʱ��
//cout << "TestFunc1(int*)-time:" << end1 - begin1 << endl;
//cout << "TestFunc2(int&)-time:" << end2 - begin2 << endl;
//}
//// ���ж�Σ����ָ��������ڴ��η����Ч������
//int main()
//{
//   for (int i = 0; i < 10; ++i)
//    {
//        TestRefAndValue();
//    }
//   return 0;
//}
//void TestRef()
//{
//   const int a = 10;
//   const int& ra = a;
//   printf("%p\n", &a);
//    printf("%p\n", &ra);
//}
//int main()
//{
//   TestRef();
//   return 0;
//}
//int Add(int left, int right);
//double Add(double left, double right);
//int main()
//{
//	Add(1,2);
//	Add(1.0,2.0);
//    return 0;
//}