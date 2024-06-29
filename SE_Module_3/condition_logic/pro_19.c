#include<stdio.h>
void main()
{
	int id,unit;
	float bill;
	char name[10];
	printf("Enter customer Id:");
	scanf("%d",&id);
	printf("Enter customer Name:");
	scanf("%s",&name);
	printf("Enter Unit:");
	scanf("%d",&unit);
	
	if(unit>350)
	{
		bill = unit*1.20;
	}
	else if(unit > 350 && unit <600)
	{
		bill = unit*1.50;
	}
	else if (unit > 600 && unit < 800)
	{
		bill = unit*1.80;
	}
	else if(unit>800)
	{
		bill = unit*2.00;
	}
	else
	{
		printf("Enter valid unit.");
	}
	printf("\n\tCustomerID:%d",id);
	printf("\n\tCustomer Name:%s",name);
	printf("\n\tUnit is :%d",unit);
	printf("\n\tTotal bill is :%.2f",bill);
}
