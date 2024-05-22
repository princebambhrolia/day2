#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a number : ");
	scanf("%d%d",&a,&b);
	float sum;
	sum= a+b * a-b ;
	sum= a*a - b*b ;
    printf("%.2f",sum);	
}