#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	auto b = a;
	auto c = 'c';
	cout << typei(b).name() << endl;
	cout << typei(c).name() << endl;  //auto���Կ���һ�����ݵ�ԭ�����͡�
    return 0;
}

Ҳ�����ÿɿμ�����һ�δ��룻

int x = 10;
auto a = &x;
auto* b = &x;
auto& c = x;
cout << typeid(a).name() << endl;   int*    ������ᵹ�ˣ���auto�Ļ���int*
cout << typeid(b).name() << endl;    int*
cout << typeid(c).name() << endl;      int

auto��������������Ϊ�������޷���a��ʵ�����ͽ����Ƶ�������������int���ͣ�
����auto�����޷�֪����������Ƕ�󣬲�֪�����ٶ��ռ䣬���п���ջ����ˣ�



��Χfor(c++11)

��Χfor������

void TestFor()
{
	һ������£�д����
     int array[] = { 1, 2, 3, 4, 5 };
   //1.for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
       ʹ��ָ����д������һ�㲻��ָ����д��
	  /*2.array[i] *= 2;
      for (int* p = array; p < array + sizeof(array)/ sizeof(array[0]); ++p)
      cout << *p << endl;*/
     ���ƣ�
        for(auto e : array)//�����auto������ã�
        cout << e << endl;
}


ָ���ֵnullptr��c++11��

NULL
0
��\0��
"\0" ����2���ֽڣ�ʵ��������"\0\0";���������������ֽڣ�

void f(int)
{
cout<<"f(int)"<<endl;
}
void f(int*)
{
cout<<"f(int*)"<<endl;
}
int main()
{
f(0);
f(NULL);
f((int*)NULL);
f(nullptr);
return 0;
}
���1,2ƥ�����ǰ��һ������3��ƥ����ǵڶ�����
��nummptr�����ʵ��ǵڶ����������һ�������Ŀ�ָ�룬����NULL��ָ���������0/NULL��

//��Щ���������c++11�Ժ��vs���������������2008����֧�֣�����û�в��ԣ�