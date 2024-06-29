#include<stdio.h>
void main()
{
	int exp1,exp2,exp3,exp4,exp5,total;
	printf("Enter expense1:");
	scanf("%d",&exp1);
	printf("Enter expense2:");
	scanf("%d",&exp2);
	printf("Enter expense3:");
	scanf("%d",&exp3);
	printf("Enter expense4:");
	scanf("%d",&exp4);
	printf("Enter expense5:");
	scanf("%d",&exp5);
	
	total = exp1+exp2+exp3+exp4+exp5;
	printf("\nTotal Expense Is:%d",total);
	
}
