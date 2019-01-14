//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<assert.h>
//
//typedef int STDataType;   //这里不能定义int*，成为职工指针变量，与后面不同；
//typedef struct Stack
//{
//	STDataType* _a;
//	int _top; // 栈顶
//	int _capacity; // 容量
//}Stack;
//
//void StackInit(Stack* ps)
//{
//	assert(ps);
//	ps->_a = NULL;
//	ps->_capacity = 0;
//	ps->_top = 0;
//}
//
//void StackDestory(Stack* ps)
//{
//	assert(ps);
//	free(ps->_a);
//	ps->_a = NULL;
//	ps->_capacity = 0;
//	ps->_top = 0;
//}
//
//void StackPush(Stack* ps, STDataType x)
//{
//	assert(ps);
//	if (ps->_top == ps->_capacity)
//	{
//		size_t newcapacity = ps->_capacity == 0 ? 4 : ps->_capacity * 2;
//		ps->_a = (STDataType*)realloc(ps->_a, sizeof(STDataType)*newcapacity);
//		assert(ps->_a != NULL);
//		ps->_capacity = newcapacity;
//	}
//
//	ps->_a[ps->_top] = x;
//	ps->_top++;
//}
//
//void StackPop(Stack* ps)
//{
//	assert(ps && ps->_top > 0);
//	--ps->_top;
//
//}
//
//STDataType StackTop(Stack* ps)
//{
//	assert(ps && ps->_top > 0);  //这里没有写且后面的代码，所以编译不通过；
//	return ps->_a[ps->_top - 1];
//}
//
//int StackEmpty(Stack* ps)
//{
//	assert(ps);
//	return ps->_top == 0 ? 0 : 1;
//}
//
//int StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->_top;
//}
//int main()
//{
//    Stack st;
//	StackInit(&st);
//
//	StackPush(&st,1);
//	StackPush(&st,2);
//	StackPush(&st,3);
//	StackPush(&st,4);
//	StackPush(&st,5);
//
//	while(StackEmpty(&st) != 0)
//	{
//	   printf("%d ",StackTop(&st));
//	   StackPop(&st);
//	   printf("\n");
//	}
//   return 0;
//}
