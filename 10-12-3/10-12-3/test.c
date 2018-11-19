#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

unsigned int reverse_bits(unsigned int n)
{
     /*unsigned int sum = 0;
	 int  i = 0;
	 for(i=0;i<32;i++)
	 {
	    sum +=((n>>i) & 1)*pow(2, 31, -i);
	 }
	 return sum;*/
	unsigned int ret =0;
	int i=0;
	for(i=0;i<32;i++)
	{
	    ret <<=1;
		ret = (n)
	}
}
int main()
{
	int n=0;
	scanf("%d",&n);
	printf("%d",reverse_bits(n));
   return 0;
}