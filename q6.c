#include<stdio.h>
main()
{
	int a,b,c;
	float average;		
	printf("the Average of three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	average= (a+b+c) /3;	
	printf("%.2f\n",average);
}