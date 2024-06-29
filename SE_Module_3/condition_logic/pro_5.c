#include<stdio.h>
void main()
{
	int no1;
	printf("Enter Number:");
	scanf("%d",&no1);
	
	if(no1>0)
	{
		printf("Number value is positive");
	}
	else if(no1<0)
	{
		printf("Number value is negative");
	}
	else
	{
		printf("value is zero");
	}
}
