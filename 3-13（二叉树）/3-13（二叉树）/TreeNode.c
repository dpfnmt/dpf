#include"TreeNode.h"


BTNode* BinaryTreeCreate(BTDataType* a, int *pindex)
{
	assert(a);
	if (a[*pindex] == '#')
	{
		++(*pindex);
		return NULL;
	}
	else
	{
		BTNode* root = (BTNode*)malloc(sizeof(BTNode));
		root->_data = a[*pindex];
		++(*pindex);
		root->_left = BinaryTreeCreate(a, pindex);
		root->_right = BinaryTreeCreate(a, pindex);
		return root;
	}
}

void BinaryTreeDestory(BTNode* root)
{
	if (root == NULL)
		return;
	BinaryTreeDestory(root->_left);
	BinaryTreeDestory(root->_right);
	free(root);
	root = NULL;
}

int BinaryTreeSize(BTNode* root)
{
	if (root == NULL)
		return 0;
	else
	{
		return 1 + BinaryTreeSize(root->_left) + BinaryTreeSize(root->_right);
	}
}

int BinaryTreeLeafSize(BTNode* root)
{
   
}
int BinaryTreeLevelKSize(BTNode* root, int k);
BTNode* BinaryTreeFind(BTNode* root, BTDataType x);


void BinaryTreePrevOrderNonR(BTNode* root)
{
    if(root == NULL)
		return;
	else
	 printf("%c",root->_data );
     BinaryTreePrevOrderNonR(root->_left );
     BinaryTreePrevOrderNonR(root->_right );
}
void BinaryTreeInOrderNonR(BTNode* root)
{
       if(root == NULL)
		return;
	else
     BinaryTreeInOrderNonR(root->_left );
	   	 printf("%c",root->_data );
     BinaryTreeInOrderNonR(root->_right );
}

void BinaryTreePostOrderNonR(BTNode* root)
{
   if(root == NULL)
		return;
	else
     BinaryTreePostOrderNonR(root->_left );
     BinaryTreePostOrderNonR(root->_right );
	  printf("%c",root->_data );
}

int main()
{
     char a[] = "ABD##E#H##CF##G##";
	 int pindex = 0;
	 BTNode* tree = BinaryTreeCreate(a,&pindex);
	 BinaryTreePrevOrderNonR(tree);
	  printf("\n");

	 BinaryTreeInOrderNonR(tree);
	  printf("\n");

	  BinaryTreePostOrderNonR(tree);
	  printf("\n");

	 printf("%d\n", BinaryTreeSize(tree));
     BinaryTreeDestory(tree);
	 tree = NULL;

     return 0;
}
