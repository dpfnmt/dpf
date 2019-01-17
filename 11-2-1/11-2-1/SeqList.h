#ifndef    __SEQLIST_H__
#define    __SEQLIST_H__

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>


typedef int SLDataType;

typedef struct SeqList
{
    SLDataType * _array;
	size_t   _size;
	szie_t  _capacity;
 
}SeqList;


void  SListInit(SList* ps,size_t capacity);
void  SListDestory(SList* ps);
void  SeqLisrPushBank(SList*  ps);



void SListPrint(SList* ps);


void SListTest();
#endif      //__SEQLIST_H__