#include<stdio.h>
struct node {
	int data;
	struct node *left,*right;
};
struct node *new(int a)
{
	struct node *tmp =(struct node *)malloc(sizeof(struct node *));
	tmp->data=a;
	tmp->left = tmp->right = NULL;
	return tmp;
}
struct node *insert(struct node *node , int b)
{
	if(node==NULL)
	return new(b);
	if(b<node->data)
	node->left=insert(node->left,b);
	else
	node->right=insert(node->right,b);
	return node;
}
void inorder(struct node *root)
{
	if(root!=NULL){
		inorder(root->left);
		printf("\n%d",root->data);
		inorder(root->right);
	}
}
int main()
{
	struct node *root=NULL,*tmp;
	root=insert(root,40);
	root=insert(root,50);
	root=insert(root,30);
	root=insert(root,35);
	root=insert(root,37);
	inorder(root);
}
