#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//#include<assert.h>
//using namespace std;
//class Date
//{
//public:
//
//	bool GetYear( int year)
//	{
//	     assert(year);
//		 if((year%4 == 0 &&  year%100 != 0)
//			 || year%400 == 0)
//		 {
//		       return true;
//		 }
//		 else
//		 {
//		      return   false;
//		 }
//	}
//	int GetMonthDay(int year, int month)
//	{
//		const int monthArray[13] = { 0, 31, 28, 31, 30, 31, 30 ,31, 31, 30, 31,30, 31 };
//		if (month == 2 && GetYear(year))
//			return 29;
//		else
//			return monthArray[month];
//	}
//
//	// �ĸ���Ա����
//	Date(int year = 2019, int month = 1, int day = 1)
//	{
//		if (year > 0 &&
//			month > 0 && month < 13 &&
//			day > 0 && day <= GetMonthDay(year, month))
//		{
//			_year = year;
//			_month = month;
//			_day = day;
//		}
//		else
//		{
//			cout << "���ڷǷ�" << endl;
//		}
//	
//	}
//
//	bool operator==(const Date& d)
//	{
//	     return _year == d._year 
//			 && _month == d._month 
//			 && _day == d._day ;
//	}
//	bool operator!=(const Date& d)
//	{
//	     return !((*this) == d);
//	}
//	bool operator>(const Date& d)
//	{
//	    return !((*this) < d && (*this) == d);	
//	}
//	bool operator<(const Date& d)
//	{
//	    if(_year < d._year )
//		{
//		    return true;
//		}
//		if(_year > d._year )
//		{
//		    return false;
//		}
//		if(_month < d._month )
//		{
//		    return true;
//		}
//		if(_month > d._month )
//		{
//		    return false;
//		}
//		if(_day < d._day )
//		{
//		    return true;
//		}
//		if(_day >= d._day )
//		{
//		    return false;
//		}
//	}
//	bool operator>=(const Date& d) 
//	{
//	   return !((*this) < d);
//	}
//	bool operator<=(const Date& d)
//	{
//      return !((*this) > d);
//	}
//
//	////d1 + 10
//	Date operator+(int day)
//	{
//	      Date fur(*this);
//		  fur._day += day;
//		  while(fur._day > GetMonthDay(fur._year, fur._month))
//		  {
//		      if(fur._month !=12 )
//			  {
//			      fur._day = fur._day - GetMonthDay(fur._year, fur._month);
//				  fur._month++;
//			  }
//			  else
//			  {
//                  fur._day = fur._day - GetMonthDay(fur._year, fur._month);
//			      fur._year++;
//				  fur._month = 1;
//			  }
//		  }
//		  return fur;
//	}
//	Date operator+=(int day)
//	{
//        _day += day;
//		  while(_day > GetMonthDay(_year,_month))
//		  {
//		      if(_month !=12 )
//			  {
//			      _day = _day - GetMonthDay(_year,_month);
//				  _month++;
//			  }
//			  else
//                  _day = _day - GetMonthDay(_year, _month);
//			      _year++;
//				  _month = 1;
//		  }
//		  return (*this);   	    
//	}
//	Date operator-(int day)
//	{
//	      Date fur(*this);
//		  fur._day -= day;
//		  while(fur._day < 1)
//		  {
//		      if(fur._month != 1)
//			  {
//			      fur._day = fur._day + GetMonthDay(fur._year, fur._month);
//                  fur._month--;
//			  }
//			  else
//			  {
//                   fur._day = fur._day + GetMonthDay(fur._year, fur._month);
//				   fur._year -= 1;
//				   fur._month =12;
//			  }     
//		  }
//		  return fur;
//	}
//	Date operator-=(int day)
//	{
//        _day -= day;
//		  while(_day < 1)
//		  {
//		      if(_month != 1)
//			  {
//				  _month--;
//			      _day = _day + GetMonthDay(_year, _month);
//			  }
//			  else
//			  {
//				   _year -= 1;
//				   _month =12;
//                   _day = _day + GetMonthDay(_year, _month);
//			  }     
//		  }
//		  return (*this);	
// 	}
//	//// ǰ��
//	Date operator++()
//	{
//	     (*this)++;
//		 return (*this);
//	}
//	Date operator--()
//	{
//	     (*this)--;
//		 return (*this);
//	}
//
//	//// ����
//	Date operator++(int)
//	{
//	     Date copy(*this);
//		 (*this)++;
//		 return copy;
//	}
//	Date operator--(int)
//	{
//	    Date copy(*this);
//		 (*this)--;
//		 return copy;
//	}
//
//	//// d1-d2
//	int operator-(const Date& d)
//	{
//	     int count =0;
//		 Date copy(*this);
//		 if(copy > d)
//		 {
//		      copy--;
//			  count++;
//		 }
//		 if(copy == d)
//		 {
//		    return 0;
//		 }
//		 if(copy < d)
//		 {
//		     copy++;
//			 count--;
//         }
//	}
//
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//void Test1()
//{
//       //Date d;
//	//d.Print();
//	//Date d1(2019, 1, 3);
// //   d1.Print();
//	//cout<<(d <= d1)<<endl;
//	/*Date d;
//	d.Print();*/
//	Date d1(2018,12,31);
//	d1.Print();
//	(d1+1).Print();
//}
//int main()
//{
//	
//	Test1();
//	return 0;
//}

//#include<iostream>
//using namespace std;

//class Date
//{
//public:
//        //1.���캯��
//	    //2.��������
//        //3.�������캯��
//	    //4.��ֵ��������أ�
//	/* Date()
//	  {
//	       _year = 2019;
//		   _month = 1;
//		   _day = 15;
//		   cout <<_year<< "-" <<_month << "-"<< _day <<endl;
//	  }*/
//     // Date(int year = 2019, int month = 1 ,int day = 14)  //ʹ�������û��ʲô����
//      /*Date(int year , int month , int day) //������ʾ������û�к���ֵ���Ե��ã������û��Լ����壻
//       {
//            _year = year;
//            _month = month;
//            _day = day;
//			cout <<_year<< "-" <<_month << "-"<< _day <<endl;
//      }*/
//	  /*Date(const Date& d)
//	  {
//	         _year = d._year;
//             _month = d._month;
//             _day = d._day;
//			 cout <<_year<< "-" <<_month << "-"<< _day <<endl;
//	  }*/
//	/*~Date()
//	 { 
//		 
//	 }*/
//	 /*Date()
//	  {
//	       _year = 2019;
//		   _month = 1;
//		   _day = 15;
//		   cout <<_year<< "-" <<_month << "-"<< _day <<endl;
//	  }*/
//	 Date(int year = 1998 ,int month = 1 ,int day = 1)
//	  {
//	        _year = year;
//            _month = month;
//            _day = day;
//			cout <<_year<< "-" <<_month << "-"<< _day <<endl;
//	  }
//	  //bool operator==(const Date&d2)//��operator����ֻ����һ�����壻
//	  //{
//	  //     return _year == d2._year
//			//   &&  _month == d2._month
//			//   &&  _day == d2._day;
//	  //}
//	  Date& operator=(const Date& d)
//	  {
//	      if(this != &d)
//		  {
//		       _year == d._year
//			   &&  _month == d._month
//			   &&  _day == d._day;
//		  }
//		  else
//			  return *this;
//	  }
//     
//
//
//private:
//
//    int _year;
//    int _month;
//    int _day;
//};	
// int main()
//{
//     Date d1;
//	Date d(2019,1,15);
//	Date d2;
//    return 0;
//}

//class Date
//{
//public:
//Date(int year = 1900, int month = 1, int day = 1)
//{
//     _year = year;
//     _month = month;
//     _day = day;
//	 cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
//}
////Date(const Date& d)
////{
////       _year = d._year;
////       _month = d._month;
////       _day = d._day;
////	   cout<<_year<<"-"<<_month<<"-"<<_day<<endl;
////
////}
//bool operator==(const Date&d )
//{
//      return _year == d._year 
//		  && _month == d._month 
//		  && _day == d._day;
//}
//private:
//     int _year;
//     int _month;
//     int _day;
//};
//int main()
//{
//     /*const Date d1;
//     const Date d2(d1);*/
//	 Date d1;
//	 Date d2(2019,1,1);
//	 cout<<(d1 == d2)<<endl;
//      return 0;
//}

#include<iostream>
using namespace std;

class Date
{
public:
       void PrintA()
       {
          cout<<_a<<endl;
       }
         void Show()
        {
            cout<<"Show()"<<endl;
          }
private:
           int _a;
};
int main()
{
    Date* p = NULL;
     //p->PrintA();
     p->Show();
}
//class A1 {
//public:
//void f1()
//{}
//private:
//int _a;
//};
//class A2 {
//public:
//void f2() // ���н��г�Ա����
//{}
//};
//class A3  // ����ʲô��û��---����
//{};
//int main()
//{
//	A1 d1;
//	cout<<sizeof(d1)<<endl;
//	A2 d2;
//	cout<<sizeof(d2)<<endl;
//	A3 d3;
//	cout<<sizeof(d3)<<endl;
//    //d1.Print();
//   return 0;
//}