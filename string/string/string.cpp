#include<iostream>
#include<string>
#include<assert.h>

using namespace std;


namespace bit
{
	class String
	{
	public:
		typedef char* iterator;

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}
	      String(char* str = "")
		{
			_size = strlen(str);
			_capacity = _size;
			_str = new char[_capacity + 1];

			strcpy(_str, str);
		}
		 
		  void Swap(String& s)
		{
			swap(_str, s._str);
			swap(_size, s._size);
			swap(_capacity, s._capacity);
		}

		  String(const String& s)
			:_str(NULL)
			, _size(0)
			, _capacity(0)
		{
			String tmp(s._str);
			this->Swap(tmp);
		}

		  String& operator=(String s)
		{
			this->Swap(s);
			return *this;
		}

		 ~String()
		{
			if (_str)
			{
				delete[] _str;
				_size = 0;
				_capacity = 0;
			}
		}

          size_t Size()
		  {
			  return _size;
		  }
		 void PushBack(char ch);
		 char& operator[](size_t pos)
		 {
			 assert(pos < _size);

		    return _str[pos];
		 }
	private:
		char* _str;
		size_t _size;
		size_t _capacity;

		static size_t npos;
	};

    void TestString2()
	{
	    String s1("hello");
		for(size_t i = 0 ; i< s1.Size() ; i++)
		{
		    cout << s1[i]<<" ";
		}
		cout<<endl;

		String::iterator it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

	}
}
