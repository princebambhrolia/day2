#include<stdio.h>
int main(){
	int a,b;
	printf("enter a number");
	scanf("%d%d",&a,&b);
	float sum;
	sum=a*a + 2*a*b + b*b;
	printf("%.2f",sum);
}