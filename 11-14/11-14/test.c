#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int strlen(char* str)
{
   int count =0;
   while(*str)
   {
      count++;
	  str++;
   }
   return count;
}

void  revers_str(char* start,char* end)
{
	while(start < end)
	{
	    char* tmp = *start;
         *start = *end;
         *end = tmp;
         start++;
          end--;
	}
}
void revers(char* str)
{
    char* left =0;
	char* right = str + strlen(str)-1;
	char* cur =str;
	revers_str(left,right);
	while(* str)
	{
	     char*start = cur;
         while(*cur !=' ' && *cur != '\0')
		 {
		     cur++;
		 }
        	revers_str(start,cur-1);
			if(*cur == ' ')
			{
			   cur++;
			}
	}

}

int main()
{
   char a[]="  xian  woaini";
   revers(a);
   printf("%s\n",a);
   return 0;
}
