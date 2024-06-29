//30. WAP to convert years into days and days into years
#include<stdio.h>
void main()
{
	int year,day;
	printf("Enter years:");
	scanf("%d",&year);
	day = year * 365;
	printf("Days is :%d",day);
	// day into year 
	int d ,y;
	printf("\n\nEnter Day:");
	scanf("%d",&d);
	y = d/365;
	printf("\nYear is : %d",y);
	
}
