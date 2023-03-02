#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct node{
	long phone,id;
	char name[20],branch[20],spec[20];
	struct node *rlink;
	struct node *llink;
};struct node *top;
void push(long Phone, long Id, char Name[20], char Branch[20], char Spec[20]){
	struct node *new;
	new = (struct node *)malloc(sizeof(struct node));
	new->phone=Phone;
	new->id=Id;
	strcpy(new->name,Name);
	strcpy(new->branch,Branch);
	strcpy(new->spec,Spec);
	new->rlink=new->llink=NULL;
	if(top=='\0'){
		top=new;
	}
	else{
		top->rlink=new;
		new->llink=top;
		top=new;
	}

}
void display(){
	struct node *temp;
	temp=top;
	while(temp!=NULL){
		printf("ID: %ld\n",temp->id);
		printf("PHONE NO: %ld\n",temp->phone);
		printf("NAME: %s\n",temp->name);
		printf("BRANCH: %s\n",temp->branch);
		printf("SPECILIZATION: %s\n",temp->spec);
		printf("\n");
		temp=temp->llink;
	}
}
void pop(){
	struct node *temp;
	temp=top;
	if(temp==NULL)
		printf("underflow");
	else{
		top=top->llink;
		temp->llink=NULL;
		free(temp);
		}
}
void main(){
	int ch,x;
	long id,phone;
	char name[20],branch[20],spec[20];
	while(1){
		printf("\n***MAIN MENU***\n1.CREATE\n2.POP\n3.DISPLAY\n4.EXIT");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch){
		case 1 : printf("Enter Professor details\n");
						 printf("Enter professor ID: ");
						 scanf("%ld",&id);
				 		 printf("Enter professor Phone NO: ");
						 scanf("%ld",&phone);
						 printf("Enter professor Name: ");
						 scanf("%s",name);
						 printf("Enter professor Branch: ");
						 scanf("%s",branch);
						 printf("Enter professor Specialisation: ");
						 scanf("%s",spec);
						 push(phone,id,name,branch,spec);
			break;
		case 2 : pop();
			 break;
		case 3 : display();
			break;
		case 4 : exit(0);
		}
	}
}
