//12. WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
void main()
{
	int no1,no2,no3,max;
	printf("Enter Number value:");
	scanf("%d %d %d",&no1,&no2,&no3);
	
	max = (no1 > no2)?(no1>no3?no1:no3):(no2>no3?no2:no3);
	printf("The maximum number is %d.",max);
}
