#ifndef     __HEAP_H__
#define     __HEAP_H__


#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<malloc.h>
#include<time.h>
#include<memory.h>

typedef int HPDataType;

typedef struct Heap
{
	HPDataType* _array;
	size_t _size;
	size_t _capacity;
}Heap;

void HeapInit(Heap* hp, HPDataType* a, size_t n);
void HeapDestory(Heap* hp);
void HeapPush(Heap* hp, HPDataType x);
void HeapPop(Heap* hp);
HPDataType HeapTop(Heap* hp);
int HeapSize(Heap* hp);
int HeapEmpty(Heap* hp);
//// ∂—≈≈–Ú
//void HeapSort(int* a, int n);
void TestHeap();


#endif 