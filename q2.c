#include<stdio.h>
int main(){
	int base,height;
	printf("enter a number");
	scanf("%d%d",&height,&base);
	float sum;
	sum=height*base;
	printf("%.2f",sum);
}