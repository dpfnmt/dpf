#define _CRT_SECURE_NO_WARNINGS 1
#ifndef __HEAP_H__
#define __HEAP_H__


#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<malloc.h>
#include<assert.h>



typedef char BTDataType;
typedef struct BinaryTreeNode
{
BTDataType _data;
struct BinaryTreeNode* _left;
struct BinaryTreeNode* _right;
}BTNode;

#endif //__HEAP_H__
