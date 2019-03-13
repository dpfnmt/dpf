#include"TreeNode.h"

int main()
{
     char a[] = "ABD##E#H##CF##G##";
	 int pi = 0;
	 BTNode* tree = BinaryTreeCreate(a,&pi);
	 printf("%d\n", BinaryTreeSize(tree));
     return 0;
}