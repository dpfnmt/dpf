#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//char my_strcpy(char*dest ,char*str)
//{
//    char*ret=dest;
//	assert(*str != NULL);
//    assert(*dest != NULL);
//	//while(*str++ =  *dest++)
//	//{
//	 // ;  
//	//}
//   //while(*dest++ = *str++)
//   //{
//   //    ;
//   //}
//   return ret;
//}
//int main()
//{
//	char arr[]={0};
//	char *p = "xian";
//	my_strcpy(arr,p);
//	printf("%s\n",arr);
//  return 0;
//}
//}


//#include<string.h>
//#include<assert.h>
//int my_strlen(const char *str)
//{
//	int count =0;
//	assert(str != NULL);
//    while(*str != '\0')
//	{
//	    count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//   char arr[]="abcdef";
//   int len = my_strlen(arr);
//   printf("len=%d",len); // 把%d 写成了 %s了，所以出不来。
//   printf("\n");
//   return 0;
//}

//#include<windows.h>
//int main()
//{
//    char arr1[]="hello xian";
//	char arr2[]="**********";
//	int left = 0;
//	int right =strlen(arr1)-1;
//	while(left<=right)
//	{
//	  arr2[left]=arr1[left];
//	  arr2[right]=arr1[right];
//	  system("cls");
//	  printf("%s\n",arr2);
//	  Sleep(1000);
//	  left++;
//	  right--;
//	}
//   return 0;
//}

//#define N 3
//int main()
//{
//   int i=0;
//   int n =0;
//   int tmp = 0;
//   int sum=0;
//   scanf("%d",&n);
//   for(i=1;i<=n;i++)
//   {
//        tmp = tmp*10+N;
//		sum += tmp;
//   }
//   printf("sum=%d\n",sum);
//}

//#include<math.h>
//int main()
//{
//	int i =0;
//	for(i=1;i<9999;i++)
//	{
//	   int count=1;
//	   int tmp =i;
//	   int sum =0;
//	   while(tmp/10)
//	   {
//		   count++;
//	      tmp = tmp/10;
//	   }
//	   tmp=i;
//	   while(tmp)
//	   {
//	      sum  += pow(tmp%10,count);
//		  tmp = tmp/10;
//	   }
//	   if(sum == i)   // 把if写到外面了；
//	  {
//	     printf("%d\n",i);
//	  }
//  }
//	
//   return 0;
//}
//
//int main()
//{
//	int line =0;
//	int i=0; //i写在scanf的前面，不能写在它的下面;
//	scanf("%d",&line);
//	for(i=0;i<line;i++)
//	{
//	    int j=0;
//		for(j=0;j<line-1-i;j++)
//		{
//		   printf(" ");
//		}
//		for(j=0;j<2*i+1;j++)  // 这里的j等于 0，不是1;
//		{
//		   printf("*");
//		}
//		printf("\n");
//	 }
//	for(i=0;i<line-1;i++)
//	{
//	   int j=0;
//	   for(j=0;j<=i;j++)
//	   {
//	     printf(" ");
//	   }
//	   for(j=0;j<2*(line-1-i)-1;j++)
//	   {
//	      printf("*");
//	   }
//	   printf("\n");
//	}
//   return 0;
//}