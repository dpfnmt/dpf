#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
using namespace std;

//class Solution {
//public:
//    int lengthOfLastWord(string line) {
//	
//           int count = 0;
//		   int begin =0;
//		   //getline(cin,line);
//           int end = line.size()-1;
//          while(end>=0&&line[end] == ' ')
//			  end--;
//           while(end >= 0)
//           {
//               if(line[end] != ' ')
//               {
//                   count++;
//                   end--;
//               }
//			   if(end < 0||line[end] == ' ')
//				   break;
//           }
//        return count;
//    }
//	
//	
//
//};
//
//int main()
//{
//     Solution s;
//	 cout<<s.lengthOfLastWord("a ");
//
//	return 0;
//}


//class Solution {
//public:
//    int firstUniqChar(string s) {
//        int count[256] = {0};
//        int size = s.size();
//        while(size > 0)
//        {
//                for(int i = 0; i< size ; i++)
//                 {
//                    count[s[i]]++;
//                 }
//                for(int i =0; i<size;i++ )
//                 {
//                   if(count[s[i]] == 1)
//                   {
//                          return i;
//                   }
//                }
//        }
//        return -1;
//    }
//};
//int main()
//{
//
//   Solution s;
//   cout<<s.firstUniqChar("zza");
//
//   return 0;
// }


int main()
{
	string s1 = "hello";
	string s2 = "word";
	//s1.assign(s2); //这个是覆值，直接拿d2的值把d1的值，覆盖了;
	//cout<<s1<<endl;


	/*s2.insert(0,"hello");
	cout<<s2<<endl;*/

	/*s2.replace (1,0,"xxxxx");
	cout<<s2<<endl;*/

     
	//交换，下面两种都可以；
	//swap(s1,s2);
	//cout<<s1<<s2<<endl;

	 //s1.swap(s2);
     //cout<<s1<<s2<<endl;

	//string s("123");
	//int num = atoi(s.c_str); //为什么运行不出来；
	//cout<< num <<endl;
 //  
	//找一个点之后的文件名
	//string file1("test.cpp");
	//string file2("test,c");
	//size_t pos = file1.find('.'); //你需要找的:

	//if(pos != string ::npos) 
	//{
	//    string suffix(file1,pos);
	//	cout<<suffix << endl;
	//}
	//if(pos != string ::npos) 
	//{
	//    string suffix(file2,pos);
	//	cout<<suffix << endl;
	//}

	//访问网址的域名，还没有出来；访问下面的第二还没有出来;
	//string url("http://www.yoka.com/dna/112/764/");
	//size_t pos = url.find("://");
	//string head = url.substr(0,pos);
	//cout << head << endl;

	//size_t begin = pos + 3;
	//size_t end = url.find('/',pos+3);
	//string tail = url.substr(begin,end);

	//
	////string tail = url.substr(begin,end);
	//cout << tail << endl;

	string s("hello");
	/*for(int i =0 ; i < s.size(); i++)
	{
	    cout << s[i] <<" ";
	}
	cout<<endl;*/

	string::iterator it = s.begin(); //还没有实现出来;
	while(it != s.end)
	{
	   cout <<*it<<" ";
	}
	cout<<endl;

	return 0;
}
