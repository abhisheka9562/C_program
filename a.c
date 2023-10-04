#include<stdio.h>

struct node
{
	int data;
	struct node *left;
	struct node *right;
};
void insert(struct node *root, int item)
{
if(root=NULL)
{
root (struct bnode*)malloc (sizeof(struct nnode));
 root->left=NULL;
 root->right=NULL; 
 root->info=item;
}
else
{
if(item<root->info)
root->left=insert(root->left, item);
else
root->right=insert(root->right, item);
}
}
	 


int main()
{
	int ch;
	while(1)
	{
		printf("\nEnter choice\n1)Insert\n2)Delete\n3)Preorder\n4)POostordr\n5)Inorder\n6)Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:int n;
			       printf("Enter element");
			       scanf("%d",&n);
			       insert(root,n);
			break;
			case 2:delete(root);
			break;
			case 3:preorder(root);
			break;
			case 4:postorder(root);
			break;
			case 5:root=inorder();
			break;
			case 6:exit(0);
			default:printf("Error");
		}
	}
}
		
