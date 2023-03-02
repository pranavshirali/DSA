#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node * left;
	struct node * right;
};
typedef struct node Node;
Node *createtree(Node *node, int data){
	if(node==NULL){
			Node *temp;
			temp = (Node*)malloc(sizeof(Node));
			temp->data=data;
			temp->left=temp->right=NULL;
			return temp;
	}
	if(data<(node->data))
		node->left=createtree(node->left,data);
	else if(data>(node->data))
		node->right=createtree(node->right,data);
	return node;
}
void inorder(struct node *root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}
void preorder(struct node *root){
	if(root!=NULL){
		printf("%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(struct node *root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
	}
}
void main(){
	struct node *root=NULL;
	int n,a[15],data;
	printf("enter the no. of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
		root = createtree(root, a[i]);
	}
	 printf("\nInorder\n");
	 inorder(root);
	 printf("\nPREORDER\n");
	 preorder(root);
	 printf("\nPOSTORDER\n");
	 postorder(root);
}
