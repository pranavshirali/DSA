#include<stdio.h>
void main(){
	int num,flag=0;
	printf("enter its number");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		if(i*i==num)
			flag=1;
			
	}
	if(flag==1)
		printf("square number");
	else
		printf("not square number");
}
