#include<stdio.h>
#include<string.h>
void main(){
	char a[23],b[23]; int n;
	printf("enter a string");
	scanf("%s",a);
	n=strlen(a);
	printf("%d",n);
	for(int i=n;i>0;i++){
		for(int j=0;j<n;j++){
			b[j]=a[i];}}
	printf("%s",b);
}
