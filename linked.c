//CODE BY: PRANAV SHIRALI | DATE: 22/12/22

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
struct node{
		int info;
		struct node *link;
};
struct node *top;
//PUSH FUCTIION
void push(int x){
	struct node *new;
	new=(struct node *)malloc(sizeof(struct node));
	new->info=x;
	new->link=top;
	top=new;
}
//POP FUCTION
void pop(){
	struct node *temp;
	if(top=='\0')
		printf("Underflow");
	else
		printf("TOP = %d\n",top->info);
		temp=top;
		top=top->link;
		free(temp);
}
//DISPLAY FUNCTION
void display(){
	struct node *temp;
	temp=top;
	while(temp!=NULL){
		printf("%d\n",temp->info);
		temp=temp->link;
	}
}
//LINER SEARCH FUNCTION
void linear(){
	int key,i=1;
	bool 
}
void concatination(){
	
}
void main(){
	int ch,n,x;
	while(1){
		printf("\n***MAIN MENU***\n1.PUSH\n2.POP\n3.DISPLAY\n4.LINEAR SEARCH\n5.CONCATINATION\n6.EXIT");
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch){
		case 1 : printf("Enter the number element");
						 scanf("%d",&n);
						 for(int i=0;i<n;i++){
							scanf("%d",&x);
						 	push(x);
						 }
			break;
		case 2 : pop();
			break;
		case 3 : display();
			break;
		case 4 : linear();
			break;
		case 5 : concatination();
			break;
		case 6 : exit(0);
		default : printf("Invalid choice");
		}
	}
}
