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


//缺省参数；
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
//	Teasfunc(40,40,40);
//    return 0;
//}

//函数的重载:必须是在两个函数中时，必其参数不一样，否则无法识别；
//#include<iostream>
////#include<stdio.h>
//using namespace std;
//
////int Add(int left , int right)
////{
////   return left+right;
////}
//double Add(int left , int right)
//{
//   return left+right;
//}
//double Add(double left , double right)
//{
//   return left+right;
//}
//long Add(long left , long right)
//{
//   return left+right;
//}
//int main()
//{
//	//cin>>Add(10,20);
//	cout<<Add(20,30)<<endl;
//	cout<<Add(10.5,20.5)<<endl;
//	cout<<Add(10,20)<<endl;
//    
//    return 0;
//}