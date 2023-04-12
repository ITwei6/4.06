#include <stdio.h>
#include <string.h>
//typedef char BTDataType;
//typedef struct BinaryTreeNode
//{
//	struct BinaryTreeNode* left;
//	struct BinaryTreeNode* right;
//	BTDataType data;
//}BTNode;
//
////创建二叉树
//BTNode* BinaryTreeCreate(char* a,int *pi)
//{
//	if (a[*pi] == "#")
//	{
//		(*pi)++;
//		return NULL;
//	}
//	else
//	{
//		//如果不是#则是字母，为字母创建节点
//		BTNode* root = (BTNode*)malloc(sizeof(BTNode));
//		root->data = a[*pi++];
//		//创建完节点后就要为它的左孩子创建节点
//		root->left = BinaryTreeCreate(a, pi);
//		//左孩子创建完再创建右孩子节点
//		root->right = BinaryTreeCreate(a, pi);
//		return root;
//	}
//}
////左子树K层节点的个数+右子树K层节点的个数
////根节点对与第K层---K
////根左子树对于第K层是它第K-1层
////根左子树的左子树对于第K层是它的K-2层
////直到，，K=1时，这时的子树所在位置就是所谓的第K层
//int BinaryBtreeLevelKSize(BTNode*root,int k)//二叉树第K层节点的个数
//{
//	
//	if (root == NULL)
//	{
//		return 0;
//	}
//	if (k == 1)
//	{
//		return 1;
//	}
//	return BinaryBtreeLevelKSize(root->left, k - 1) + BinaryBtreeLevelKSize(root->right, k - 1);
//
//}
//int main()
//{
//	char a[] = "ABD##E#H##CF##G##";
//	int i = 0;
//	//通过前序遍历数组a ，构建二叉树
//	BTNode*node=BinaryTreeCreate(a,&i);
//	int k = 3;
//	BinaryBtreeLevelKSize(node, k);
//	return 0;
//}
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void Bubblesort(int* a, int n)
{
	//先写一趟冒泡排序
	for (int j = 0; j < n; j++)
	{
		for (int i = 1; i < n-j; i++)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
			}
		}
	}
}
//插入排序
void Insert(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		//先写一趟
		int rear=i-1;//最后一个元素的下标
		int insert=a[i];//要插入的元素
		while (rear > 0)
		{
			if (insert < a[rear])
			{
				Swap(&insert, &a[rear]);
				--rear;
			}
		}
	}
}
//希尔排序
void Shellsort(int*a,int n)
{

}
int main()
{
	int a[10] = { 9,8,7,6,5,4,3,2,1,0 };
	/*Bubblesort(a,10);*/
	Insert(a, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}