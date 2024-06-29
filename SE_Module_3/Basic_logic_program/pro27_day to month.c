//27. Convert days into months
#include<stdio.h>
void main()
{
	int day,month;
	printf("Enter days:");
	scanf("%d",&day);
	month = day / 30;
	printf("Month is :%d",month);
}
