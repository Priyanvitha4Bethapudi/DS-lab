#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node*left;
	struct node*right;
};
struct node*root = NULL , *cur, *temp;
struct node*create(){
	cur =(struct node*)malloc(sizeof(struct node));
	scanf("%d",&cur->data);
	cur->left = NULL;
	cur->right = NULL;
	if(root ==NULL)
		root= cur;
	else
		{
		temp=root;
			while(temp!=NULL){
			if (cur->data < temp->data &&temp->left==NULL){
					temp->left=cur;
					return root;
					}
			else if (cur->data<temp->data &&temp->left != NULL){
					temp =temp->left;	
					}
			else if (cur->data>temp->data && temp->right == NULL){
					temp->right = cur;
					return root;
					}
			else if (cur->data>temp->data && temp->right!=NULL){
					temp =temp->right;
					}
				}
			}
	}

void preorder(struct node *root){
	if (root!= NULL){
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
	}
}

void inorder(struct node*root){
	if(root !=NULL){
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
	}
}

void postorder(struct node*root){
	if(root !=NULL){
	postorder(root-> left);
	postorder(root->right);
	printf("%d ",root->data);
	}
}

int main(){
	int ch;
	struct node*root;
	while(1){
	printf("\n1-create \n 2-preorder \n 3-inorder \n 4-postorder \n 5-exit \n");
		printf("Enter your choice:");
		scanf("%d", &ch);
		switch(ch){
					case 1: root = create();
									break;
					case 2: preorder(root);
									break;
					case 3: inorder(root);
									break;
					case 4: postorder(root);
									break;
			case 5: exit(0);
		}
	}
  
Output:
  1-create 
 2-preorder 
 3-inorder 
 4-postorder 
 5-exit 
Enter your choice:1
1

1-create 
 2-preorder 
 3-inorder 
 4-postorder 
 5-exit 
Enter your choice:1
2

1-create 
 2-preorder 
 3-inorder 
 4-postorder 
 5-exit 
Enter your choice:1
3

1-create 
 2-preorder 
 3-inorder 
 4-postorder 
 5-exit 
Enter your choice:2
1 2 3 
1-create 
 2-preorder 
 3-inorder 
 4-postorder 
 5-exit 
Enter your choice:3
1 2 3 
1-create 
 2-preorder 
 3-inorder 
 4-postorder 
 5-exit 
Enter your choice:4
3 2 1 
1-create 
 2-preorder 
 3-inorder 
 4-postorder 
 5-exit 
Enter your choice:5
