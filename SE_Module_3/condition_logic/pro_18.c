#include<stdio.h>
void main()
{
	int s_p,c_p;
	printf("Enter Cost Price:");
	scanf("%d",&c_p);
	printf("Enter Selling Price:");
	scanf("%d",&s_p);
	if(s_p > c_p)
	{
		printf("Profit is:%d",s_p - c_p);
	}
	else
	{
		printf("loss is:%d",c_p-s_p);	
	}
}
