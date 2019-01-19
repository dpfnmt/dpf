#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//class Date
//{
//public:
//	int GetMonthDay(int year, int month)
//	{
//		int monthArray[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//		if (month == 2 && year%4 == 0 && year%100 != 0 || year%400 == 0)
//			return 29;
//		else
//			return monthArray[month];
//	}
//
//	// 四个成员函数
//	Date(int year = 2019, int month = 1, int day = 31)
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
//			cout << "日期非法" << endl;
//		}
//	
//	}
//
//	bool operator==(const Date& d)
//	{
//	     return  _year == d._year
//			  &&  _month == d._month
//			  && _day == d._day;
//	}
//	 bool operator!=(const Date& d)
//	 {
//	      return  _year != d._year
//			  ||  _month != d._month
//			  || _day != d._day;
//	 }
//	bool operator>(const Date& d)
//	{
//	if(_year > d._year)
//		{
//			return  true; 
//		}
//	if(_year < d._year)
//	{
//		return false;
//	}
//	if(_month > d._month )
//		{
//			return  true; 
//		}
//	if(_month  < d._month )
//	{
//		return false;
//	}
//	if(_day > d._day)
//		{
//			return  true; 
//		}
//	if(_day <= d._day)
//	{
//		return false;
//	}
//  }
//	bool operator<(const Date& d)
//	{
//		if(_year < d._year)
//		{
//			return  true; 
//		}
//	if(_year > d._year)
//	{
//		return false;
//	}
//	if(_month < d._month )
//		{
//			return  true; 
//		}
//	if(_month  > d._month )
//	{
//		return false;
//	}
//	if(_day < d._day)
//		{
//			return  true; 
//		}
//	if(_day >= d._day)
//	{
//		return false;
//	}
//	}
//	bool operator>=(const Date& d)
//	{
//		if(_year > d._year)
//		{
//			return  true; 
//		}
//	if(_year < d._year)
//	{
//		return false;
//	}
//	if(_month > d._month )
//		{
//			return  true; 
//		}
//	if(_month  < d._month )
//	{
//		return false;
//	}
//	if(_day > d._day)
//		{
//			return  true; 
//		}
//	if(_day < d._day)
//	{
//		return false;
//	}
//	else
//		return  true;
//}
//
//	bool operator<=(const Date& d)
//	{
//		if(_year < d._year)
//		{
//			return  true; 
//		}
//	if(_year > d._year)
//	{
//		return false;
//	}
//	if(_month < d._month )
//		{
//			return  true; 
//		}
//	if(_month  > d._month )
//	{
//		return false;
//	}
//	if(_day < d._day)
//		{
//			return  true; 
//		}
//	if(_day > d._day)
//	{
//		return false;
//	}
//	else
//		return true;
//	}
//     
//
//	//d1 + 10
//	Date operator+(int day)
//	{
//		Date fur((*this));
//		fur._day+=day;
//	while(fur._day > GetMonthDay(fur._year,fur._month))
//	{
//		if(fur._month!=12)
//		{
//		fur._day = fur._day - GetMonthDay(fur._year,fur._month);
//		fur._month++;
//		}
//		else
//		{
//		fur._day = fur._day-GetMonthDay(fur._year,12);
//		fur._year++;
//		fur._month = 1;
//		}
//	}
//	return fur;		
//}
//	Date operator+=(int day)
//	{
//		_day += day;
//	while(_day>GetMonthDay(_year,_month))
//	{
//		if(_month!=12)
//		{
//		_day = _day - GetMonthDay(_year,_month);
//		_month++;
//		}
//		else
//		{
//		_day = _day-GetMonthDay(_year,12);
//		_year++;
//		_month = 1;
//		}
//		return (*this);
//	}		
//}
//	Date operator-(int day)
//	{
//		Date fur((*this));
//		fur._day-=day;
//
//	while(fur._day <= 0)
//	{
//
//		if(fur._month == 1)
//		{
//		   fur._day = fur._day + GetMonthDay(fur._year,12);
//		   fur._month = 12;
//		   fur._year--;
//		}
//		else
//		{
//			fur._month -= 1;
//		   fur._day = fur._day + GetMonthDay(fur._year,fur._month);
//		}
//	}
//	return fur;		
//}
//	Date operator-=(int day)
//	{
//	    _day -= day;
//     while(_day <= 0)
//	  {
//
//		if(_month == 1)
//		{
//		   _day = _day + GetMonthDay(_year,12);
//		   _month = 12;
//		   _year--;
//		}
//		else
//		{
//			_month -= 1;
//		   _day = _day + GetMonthDay(_year,_month);
//		}
//	}
//	return (*this);		
//}
//	//// 前置
//	Date& operator++()
//	{
//	    (*this) += 1;
//		return (*this);
//	}
//	Date operator--()
//	{
//	     (*this) -= 1;
//		 return (*this);
//	}
//
//	////// 后置
//	Date operator++(int)
//	{
//		Date copy(*this);
//		   (*this) += 1;
//		return copy;
//     }
//	Date operator--(int)
//	{
//		Date copy(*this);
//	     (*this) -= 1;
//		 return copy;
//	}
//
//	//// d1-d2
//int operator-(const Date& d)
//{
//	    int count = 0;
//		Date copy(*this);
//	if(copy<d)
//	{
//		while(copy!=d)
//		{
//			
//		     copy++;
//		    count--;
//		}
//	    return count;
//
//	 }
//	if(copy==d)
//	{
//		return 0;
//	}
//	if(copy>d)
//	  {
//		while(copy!=d)
//		{
//		   copy--;
//		   count++;
//		 }
//		return count;
//
//	   }
//}
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
//
//int main()
//{
//	/*Date d1(2019, 1 ,30);
//	d1.Print();*/
//	Date d;
//	d.Print();
//	Date d1(2018,1,25);
//	d1.Print();
//	(d1+8).Print();
//	//d++;
//	//d = (d-31);
//    //d.Print();
//    //d.operator -= (1);
//	  //--d;
//   /* d.Print();*/
//
//	//cout<<(d1 <= d)<<endl;
//
//	return 0;
//}


#include<iostream>
using namespace std;

class Date
{
  public:
	                //1.构造函数
 //     void SetDate(int year = 2019, int month = 1 ,int day = 14)
 //     {
 //           _year = year;
 //           _month = month;
 //           _day = day;
 //     }                                   //当有函数调用的时候就直接调用
 //       void Display()
 //    {
 //        cout <<_year<< "-" <<_month << "-"<< _day <<endl;
 //     }
 //      //2 计算机自己给出；
	//  Date()
	//  {
	//	    cout <<_year<< "-" <<_month << "-"<< _day <<endl;
	//  }   //没有函数调用的时候就直接由计算机给出随机的地址值。
	// /* Date(int year, int month, int day)
	//  {
	//        _year = year;
 //           _month = month;
 //           _day = day;
	//	    cout <<_year<< "-" <<_month << "-"<< _day <<endl;
	//  }*/
	//  //3 用户自己定义；
	///*  Date()
	//  {
	//       _year = 2019;
	//	   _month = 1;
	//	   _day = 15;
	//	   cout <<_year<< "-" <<_month << "-"<< _day <<endl;
	//  }*/
	//  Date(int year = 1998,int month = 1,int day = 1)
	//  {
	//        _year = year;
 //           _month = month;
 //           _day = day;
	//		cout <<_year<< "-" <<_month << "-"<< _day <<endl;
	//  }
	                 //2.折构函数
	  //~Date()
	  //{
		 ///* _year = 2019;
		 // _month = 1;
		 // _day = 15;*/
		 // cout <<_year<< "-" <<_month << "-"<< _day <<endl;
	  //}
	                //3拷贝构造函数
	  // Date()
	  //{
	  //     _year = 2019;
		 //  _month = 1;
		 //  _day = 15;
		 //  cout <<_year<< "-" <<_month << "-"<< _day <<endl;
	  //}
   //   Date(int year = 2019, int month = 1 ,int day = 14)  //使用这个就没有什么问题
   //   /*Date(int year , int month , int day) //这里显示不可以没有函数值可以调用；可以用户自己定义；
   //    {
   //         _year = year;
   //         _month = month;
   //         _day = day;
			//cout <<_year<< "-" <<_month << "-"<< _day <<endl;
   //   }*/
	  //Date(const Date& d)
	  //{
	  //       _year = d._year;
   //          _month = d._month;
   //          _day = d._day;
			// cout <<_year<< "-" <<_month << "-"<< _day <<endl;
	  //}

	                  //4.赋值运算符重载 //运算符知识表示真或者假，0/1;
   //   Date(int year = 1998 ,int month = 1 ,int day = 1)
	  //{
	  //      _year = year;
   //         _month = month;
   //         _day = day;
			//cout <<_year<< "-" <<_month << "-"<< _day <<endl;
	  //}
	  //bool operator==(const Date&d2)//在operator里面只能有一个定义；
	  //{
	  //     return _year == d2._year
			//   &&  _month == d2._month
			//   &&  _day == d2._day;
	  //}
	  //Date& operator=(const Date& d)
	  //{
	  //    if(this != &d)
		 // {
		 //      _year == d._year
			//   &&  _month == d._month
			//   &&  _day == d._day;
		 // }
		 // else
			//  return *this;
	  //}

	
	 
	  /*Date()
	  {
	       _year = 2019;
		   _month = 1;
		   _day = 15;
		   cout <<_year<< "-" <<_month << "-"<< _day <<endl;
	  }*/
      //Date(int year = 2019, int month = 1 ,int day = 14)  //使用这个就没有什么问题
      /*Date(int year , int month , int day) //这里显示不可以没有函数值可以调用；可以用户自己定义；
       {
            _year = year;
            _month = month;
            _day = day;
			cout <<_year<< "-" <<_month << "-"<< _day <<endl;
      }*/
       Date(int year = 1998,int month = 1,int day = 1)
	    {
	        _year = year;
            _month = month;
            _day = day;
			 cout <<_year<< "-" <<_month << "-"<< _day <<endl;
			
	    }
	  Date(const Date& d)
	  {
	         _year = d._year;
             _month = d._month;
             _day = d._day;
			 cout <<_year<< "-" <<_month << "-"<< _day <<endl;

	  }
private:
      int _year;
      int _month;
      int _day;
};
int main()
{
	/*4.Date d1;
	//Date d(2019,1,15);
	//Date d2(2019,1,16);
	cout<<(d1 == d1)<<endl;*/
	Date d1;
	Date d2(d1);
   /*  Date d1;
	Date d2(2019,1,15);
	Date d3;*/
	/*Date d1;
	d1.SetDate();
	d1.Display();

	Date d2;
	d2.SetDate(2019,1,16);
	d2.Display();*/
    return 0;
}
