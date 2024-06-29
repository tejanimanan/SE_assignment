//28. Convert years into days and months
#include<stdio.h>
void main()
{
		int year,day,month;
		printf("Enter year:");
		scanf("%d",&year);
		day = year * 365;
		month = year * 12;
		
		printf("Day is : %d ",day);
		printf("\nMonth is:%d",month);
}
