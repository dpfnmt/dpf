#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//
//using namespace std;
//
//int& Add(int a,int b) //&�������ȡ��ַ�������������ǿ�����ķ����������ڣ�
//{
//    int c = a + b;
//	return c;
//}
//int main()
//{
//	int& ret = Add(1,2);  //û��ʱ����1,2     ��ʱ��3,4
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
//
//// �ֱ���������������н������ʱ��
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
//    cout << typeid(c).name() << endl;   // �������Ϳ��Կ�c�����ͣ�
//     
//    auto&d = c;      //d�������� int;
//    auto* e  =&c;    //e��������int*;
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
//	//��Χfor
//	for(auto e : a )   //��Ҫ�����2��  �����auto&e �Ϳ����ˣ�
//	{
//	   cout << e << endl; //������һ�����ɴ�ӡ������飺
//	}
//	return 0;
//}

//�����ǽ�����

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

//û�����͵�ʱ�� ��һ���ֽڵĴ�д  �����  ����Ϊ��Ҫ��ʾ���ڹ���
//vs������8���ֽڶ���    liunx������4���ֽڶ��룻
//��������Ŀ�Ĳ��ǽ�ʡ�ռ䣬���˷ѿռ䣬���Ч�ʣ�
