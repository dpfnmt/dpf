#include "String.h"

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

		// copy(s1)
		String(const String& s)
			:_str(NULL)
			, _size(0)
			, _capacity(0)
		{
			String tmp(s._str);
			this->Swap(tmp);
		}
		// copy = s2;
		String& operator=(String s)
		{
			this->Swap(s);
			return *this;
		}

		void Swap(String& s)
		{
			swap(_str, s._str);
			swap(_size, s._size);
			swap(_capacity, s._capacity);
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

		bool operator<(const String& s)
		{
		    int tmp =0;
			while(tmp < _size && tmp < s._size )
			{
				//cout<<*_str<<" 1"<<s._str<<endl;
			    if((*_str + tmp) != (*s._str + tmp ))
				{
						//cout<<"正式"<<endl;

				    if((*_str + tmp) >= (*s._str + tmp))
					{
						//cout<<"正式"<<endl;
					     return false;
					}
					else
						 return true;
				}
				tmp++;
			}
			if( _size < s._size )
			{
			    return true;
			}
			else
			{
				cout<<"tem:"<<tmp<<endl;
				return false;
			}
		}
		bool operator>(const String& s)
		{
		  return !(*this < s || *this == s ); //因为this是一个指针；

		}
		bool operator<=(const String& s)
		{
		     return !(*this > s);
		}
		bool operator>=(const String& s)
		{
		    return !(*this < s);
		}
		bool operator==(const String& s)
		{
		   int tmp = 0;
		   if(_size != s._size )
		   {
		      return false;
		   }
		   while(tmp != _size)
		   {
			   if((*_str + tmp) != (*s._str +tmp))
			   {
			       return false;
			   }
		       tmp++;
		   }
		   return true;
		}
		bool operator!=(const String& s)
		{
		    return !(*this == s);
		}

		void Reserve(size_t n)
		{
		     if( n == _capacity)
			 {
			    char* tmp = new char[n+1];
				strcpy(tmp,_str);
				delete[]_str;
				_str = tmp;
				_capacity = n;
			 }
		}

		void PushBack( char ch)
		{
			if(_size >= _capacity)
			{
				Reserve(_capacity*2);
			}
			 _str[_size] = ch;
			 ++_size;
			 _str[_size + 1] = '\0';

			 cout<<_str << endl;
			//cout<<"shl"<<endl;
		}
        
		// "hello"  "xxxxxxxxxxxxxxxxxxxxxxxxxx"
		void Append(const char* str)
		{
			size_t n = strlen(str);
			if(_size + n > _capacity)
			{
			   Reserve(_size + n);
			}
			strcpy(_str + _size, str);
			_size += strlen(str);
			cout<<_str<<endl;
		}

		String& operator+=(char ch);
		String& operator+=(const char* str);
		void Insert(size_t pos, char ch)
		{
		    if(_size == _capacity)
			{
			    Reserve(_capacity * 2 );
			}
            String s(*this);
			char* tmp =s._str + pos;
            _str[pos] = ch;
			strcpy(_str+pos+1,tmp);
            
			cout<<_str<<endl;
		}
		void Insert2(size_t pos, const char* str)
		{
			 _size +=strlen(str);
		    while(_size == _capacity)
			{
			   Reserve(_capacity * 2 );
			}
            int tmp =_size;
			while(tmp != pos - 1)
			{
			    _str[tmp + strlen(str)] = _str[tmp];
				--tmp;
			}
			int tmp2 = 0;
			while(tmp2 < strlen(str))
			{
			   _str[pos + tmp2] = str[tmp2];
			   tmp2++;
			}
			/*int i=strlen(ch);
			String s(*this);
			char* tmp = s._str + pos;
		   	strcpy(_str+pos, ch);
			strcpy(_str+pos+i,tmp);*/
                 

 			cout<<_str<<endl;

		}

		void Erase(size_t pos, size_t len);
		size_t Find(char ch, size_t pos = 0)
		{
		    int i =0;
			for(i =0 ;i< _size ; ++i)
			{
			    while(pos < _size)
				{
				    if(_str[pos] == ch)
					{
					   return pos;
					}
					else
						pos++;
				}
				return -1;
			}
            //cout<<<<endl;
		}
		size_t Find2(const char* str, size_t pos = 0)
		{
		    if(strlen(str) > _size)
			{
			    return -1;
			}
			int tmp =0;
			while(pos < _size)
			{
				tmp =0;
			   if(_str[pos] == str[0])
			   while(tmp <= strlen(str))
			   {
			      if(_str[pos + tmp]  != str[tmp])
				  {
				     break;
				  }
				  tmp++;
				  if(tmp == strlen(str))
				  {
				     return pos;
				  }
			   }
			   pos++;
			}

		}


		char* c_str()
		{
			return _str;
		}

		char& operator[](size_t pos)
		{
			//assert(pos < _size);

			return _str[pos];
		}

		size_t Size()
		{
			return _size;
		}

		size_t Capacity()
		{
			return _capacity;
		}

	private:
		char* _str;
		size_t _size;
		size_t _capacity;

		static size_t npos;
	};

size_t String::npos = -1;

	void TestString1()
	{
		String s1("hello");
		String s2("word");
		//s1.PushBack('h');
		//s1.Append("hidasfa");
		//s1.Insert2(3,"fdsa");
		cout<<s1.Find2("ll",0);
		//cout<<(s1 < s2)<<endl;
		//cout<<(s1 == s2)<<endl;
		//cout<<(s1 <= s2)<<endl;
		/*String copy(s1);
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;
		cout << copy.c_str() << endl;

		copy = s1 = s2;

		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;
		cout << copy.c_str() << endl;

		String::iterator it = s1.begin();
		while (it != s1.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;*/

		
	}
}
int main()
{
	bit::TestString1();
	return 0;
}
