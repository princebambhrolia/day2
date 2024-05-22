#include<stdio.h>
int main(){
int a,b;
	printf("Enter a number : ");
	scanf("%d%d",&a,&b);
	float sum;
	sum= a*a - b*b +2*a*b;
	printf("%.2f",sum);	
}