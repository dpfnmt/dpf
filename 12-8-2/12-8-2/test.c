#define _CRT_SECURE_NO_WARNINGS 1
//循环不仅与n有关，还与执行循环所满足的判断条件有关。

#include<stdio.h>
{

     int i=0;
     while (i < n && array[i]! = 1)
      {
        i++;
      }

	   return 0;
}
//在此循环，如果arr[i]不等于1的话，时间复杂度是O（n）。
//如果arr[i]等于1的话，则循环不能执行，时间复杂度是0。



