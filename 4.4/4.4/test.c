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
////����������
//BTNode* BinaryTreeCreate(char* a,int *pi)
//{
//	if (a[*pi] == "#")
//	{
//		(*pi)++;
//		return NULL;
//	}
//	else
//	{
//		//�������#������ĸ��Ϊ��ĸ�����ڵ�
//		BTNode* root = (BTNode*)malloc(sizeof(BTNode));
//		root->data = a[*pi++];
//		//������ڵ���ҪΪ�������Ӵ����ڵ�
//		root->left = BinaryTreeCreate(a, pi);
//		//���Ӵ������ٴ����Һ��ӽڵ�
//		root->right = BinaryTreeCreate(a, pi);
//		return root;
//	}
//}
////������K��ڵ�ĸ���+������K��ڵ�ĸ���
////���ڵ�����K��---K
////�����������ڵ�K��������K-1��
////�������������������ڵ�K��������K-2��
////ֱ������K=1ʱ����ʱ����������λ�þ�����ν�ĵ�K��
//int BinaryBtreeLevelKSize(BTNode*root,int k)//��������K��ڵ�ĸ���
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
//	//ͨ��ǰ���������a ������������
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
	//��дһ��ð������
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
//��������
void Insert(int* a, int n)
{
	for (int i = 1; i < n; i++)
	{
		//��дһ��
		int rear=i-1;//���һ��Ԫ�ص��±�
		int insert=a[i];//Ҫ�����Ԫ��
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
//ϣ������
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