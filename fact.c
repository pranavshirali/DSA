#include<stdio.h>
int fact(int n);
int main(){
	int a;
	printf("enter a numbers");
	scanf("%d",&a);
	printf("factorial of number %d is %d",a,fact(a));
}
int fact(int n){
	if(n>=1)
		return n*fact(n-1);
	else
		return 1;
}
