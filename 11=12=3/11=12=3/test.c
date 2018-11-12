#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>
//
//unsigned int reverse_bits(unsigned int n)
//{
//     unsigned int sum = 0;
//	 int  i = 0;
//	 for(i=0;i<32;i++)
//	 {
//	    sum +=((n>>i) & 1)*pow(2, 31 - i);
//	 }
//	 return sum;
//	
//}
//   unsigned int reverse_bits2(unsigned int n)
//{
//    
//	unsigned int ret =0;
//	int i=0;
//	for(i=0;i<32;i++)
//	{
//	    ret <<=1;
//		ret |= ( n>>i ) & 1;
//	}
//	 return ret;
//}
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	printf("%u\n",reverse_bits(n));
//	printf("%u\n",reverse_bits2(n));
//   return 0;
//}


////#include<stdio.h>
////int ave(int a,int b)
////{
////	return a+((b-a) >> 1);
////}
////int ave2(int a,int b)
////{
////	return (a & b)+((a^b)>>1);
////}
////int main()
////{
////   int a,b;
////   scanf("%d %d",&a,&b);
////   printf("%d\n",ave(a,b));
////   printf("%d\n",ave2(a,b));
////   return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int a[]={1,2,3,5,6,5,3,2,1};
//	int ret =0;
//	int i=0;
//
//
//	for(i=0;i<9;i++)
//	{
//	   ret^=a[i];
//	}
//	printf("%d\n",ret);
//   return 0;
//}

