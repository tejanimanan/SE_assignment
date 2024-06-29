//29. Convert minutes into seconds and hours
#include<stdio.h>
void main()
{
	int minit,second,hours;
	printf("Enter Minit:");
	scanf("%d",&minit);
	second = minit * 60;
	hours = minit / 60 ;
	printf("Hours is :%d",hours);
	printf("\nSecond is : %d",second);
	
}`
