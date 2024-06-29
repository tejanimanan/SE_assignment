#include<stdio.h>
void main()
{
	int no1;
	printf("Enter any Number:");
	scanf("%d",&no1);
	if(no1>0)
	{
		printf("Number is positive");
	}
	else if(no1<0)
	{
		printf("Number is Negative");
	}
	else
	{
		printf("Number is zero");
	}
}
