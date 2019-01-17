#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	auto b = a;
	auto c = 'c';
	cout << typei(b).name() << endl;
	cout << typei(c).name() << endl;  //auto可以看出一个数据的原有类型。
    return 0;
}

也可以用可课件下面一段代码；

int x = 10;
auto a = &x;
auto* b = &x;
auto& c = x;
cout << typeid(a).name() << endl;   int*    计算机会倒退；把auto的换成int*
cout << typeid(b).name() << endl;    int*
cout << typeid(c).name() << endl;      int

auto不能做参数：因为编译器无法对a的实际类型进行推导，比如现在是int类型，
但是auto现在无法知道这个类型是多大，不知道开辟多大空间，就有可能栈溢出了；



范围for(c++11)

范围for的优势

void TestFor()
{
	一般情况下，写数据
     int array[] = { 1, 2, 3, 4, 5 };
   //1.for (int i = 0; i < sizeof(array) / sizeof(array[0]); ++i)
       使用指针来写，但是一般不用指针来写，
	  /*2.array[i] *= 2;
      for (int* p = array; p < array + sizeof(array)/ sizeof(array[0]); ++p)
      cout << *p << endl;*/
     优势，
        for(auto e : array)//必须和auto配合着用；
        cout << e << endl;
}


指针空值nullptr（c++11）

NULL
0
‘\0’
"\0" 这是2个字节，实际里面是"\0\0";所以里面是两个字节；

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
这个1,2匹配的是前面一个，第3个匹配的是第二个；
《nummptr》访问的是第二个，这个是一个真正的空指针，不像NULL，指明不清楚，0/NULL；

//这些代码必须在c++11以后的vs编译器，我这个是2008，不支持，所以没有测试；