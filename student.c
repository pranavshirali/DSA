#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
struct student{
	long phone,id;
	char name[20],branch[20];
	struct student *link;
};
struct student *front,*rear;
void nqueue(long id,long phone,char name[20],char branch[20]){
	struct student *new;
	new = (struct student *)malloc(sizeof(struct student));
	printf("\nEnter student details");
	new->id = id;
	new->phone = phone;
	strcpy(new->name,name);
	strcpy(new->branch,branch);
	if(front==NULL){
		front=new;
		rear=new;
	}
	else{
		rear->link=new;
	}	
}
void Dqueue(){
	struct student *temp;
	if(front=='\0')
		printf("Underflow");
	else
//		printf("FRONT = %d\n",front->info);
		temp=front;
		front=front->link;
		free(temp);

}
void display(){
	struct student *temp;
	temp=front;
	while(temp!=NULL){
		printf("ID: %ld\n",temp->id);
		printf("PHONE NO: %ld\n",temp->phone);
		printf("NAME: %s\n",temp->name);
		printf("BRANCH: %s\n",temp->branch);
		printf("\n");
		temp=temp->link;
	}
}
void main(){
	int ch,n,x;
	long id,phone;
	char name[20],branch[20];
	while(1){
		printf("\n***MAIN MENU***\n1.NQUEUE\n2.DQUEUE\n3.DISPLAY\n4.EXIT");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);

		switch(ch){
		case 1 : printf("Enter student details\n");
						 printf("Enter student ID: ");
						 scanf("%ld",&id);
				 		 printf("Enter student Phone NO: ");
						 scanf("%ld",&phone);
						 printf("Enter student Name: ");
						 scanf("%s",name);
						 printf("Enter student Branch: ");
						 scanf("%s",branch);
						 nqueue(id,phone,name,branch);
			break;
		case 2 : Dqueue();
			break;
		case 3 : display();
			break;
		case 4 : exit(0);
		default : printf("Invalid choice");
		}
	}
}
