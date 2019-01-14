#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//
//using namespace std;
//
//int& Add(int a,int b) //&这个不是取地址，就是以这个增强函数的返回生命周期；
//{
//    int c = a + b;
//	return c;
//}
//int main()
//{
//	int& ret = Add(1,2);  //没有时，用1,2     有时用3,4
//	Add(3,4);
//	cout<<"Add(1,2) is"<<ret<<endl;
//    return 0;
//}


//#include<iostream>
//
//using namespace std;
//
//#include <time.h>
//struct A
//{
//int a[10000];
//};
//void TestFunc1(A a)
//{}
//void TestFunc2(A& a)
//{}
//void TestRefAndValue()
//{
//A a;
//// 以指针作为函数参数
//size_t begin1 = clock();
//for (size_t i = 0; i < 10000; ++i)
//TestFunc1(a);
//size_t end1 = clock();
//// 以引用作为函数参数
//size_t begin2 = clock();
//for (size_t i = 0; i < 10000; ++i)
//TestFunc2(a);
//size_t end2 = clock();
//
//
//// 分别计算两个函数运行结束后的时间
//cout << "TestFunc1(int*)-time:" << end1 - begin1 << endl;
//cout << "TestFunc2(int&)-time:" << end2 - begin2 << endl;
//
//}
//
//int main()
//{
//    TestRefAndValue();
//    return 0;
//}

//#include<stdio.h>
//#include<iostream>
//
//using namespace std;

//int main()
//{
//
//    int a = 0 ;
//    int b = a;
//    auto c = b;
//    cout << typeid(c).name() << endl;   // 这个程序就可以看c的类型；
//     
//    auto&d = c;      //d的类型是 int;
//    auto* e  =&c;    //e的类型是int*;
//
//    cout << typeid(d).name() << endl;
//    cout << typeid(e).name() << endl;
//
//    return 0;
//}
//inline& int Add(int a , int b)
//{
//   return a + b;
//}
//int main()
//{
//	int c = Add(1,3);
//
//	cout<<"c="<<c<<endl;
//   return 0;
//}


//int main()
//{
//	int a[] = {1,2,3,4,5,6,7};
//	for(size_t i = 0; i <sizeof(a)/sizeof(int); ++i)
//	{
//	   cout << a[i] <<endl;
//	}
//	//范围for
//	for(auto e : a )   //想要这个成2倍  给这个auto&e 就可以了；
//	{
//	   cout << e << endl; //和上面一样都可打印这个数组：
//	}
//	return 0;
//}

//下来是讲的类

//#include<stdio.h>
//#include<iostream>
//
//using namespace std;
//
//
//class Person
//{
//public:
//   void ShowInfo()
//   {
//    cout<< _name<< endl;
//    cout<< _age<< endl;
//   }
//private:
//    char _name[20];
//   int _age;
//};
//
//int main()
//{
//	Student s;
//	s._name = "peter";
//	s.ShowInfo();
//    return 0;
//}

//没有类型的时候 是一个字节的大写  不会控  是因为它要表示存在过；
//vs下面是8个字节对齐    liunx下面是4个字节对齐；
//这样做的目的不是节省空间，是浪费空间，提高效率；
