#include<stdio.h>
int gcd(int n1, int n2);
void main(){
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("GCD of two numbers %d and %d is %d",a,b,gcd(a,b));
}
int gcd(int n1, int n2){
	if(n2!=0)
		return gcd(n2, n1%n2);
	else
		return n1;
}
