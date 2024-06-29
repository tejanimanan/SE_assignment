#include<stdio.h>
void main()
{
	int bill,finalbill;
	printf("Enter Bill :");
	scanf("%d",&bill);
	if(bill > 800)
	{
		finalbill = bill + (bill*0.18);
	}
	else
	{
		finalbill =  bill;
	}
	if(bill<256)
	{
		finalbill = 256;
	}
	printf("\nFinal Bill Amount is :%d",finalbill);
}
