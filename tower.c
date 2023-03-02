#include<stdio.h>
int henoi(int n, char beg,char end, char aux);
void main(){
	int n;
	char beg,end,aux;

	printf("Enter the number of Dics");
	scanf("%d",&n);
	henoi(n,'a','c','b');
}
int henoi(int n, char beg,char end, char aux){
	if(n==1){
		printf("\nMove dics %d from %c to %c\n",n,beg,end);
		return 0;}
	else{
		henoi(n-1,beg,aux,end);
		printf("\nmove dics %d from %c to %c\n",n,beg,end);
		henoi(n-1,aux,end,beg);
	}
}
