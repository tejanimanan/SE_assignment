//WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
void main()
{
	int no1,no2,no3,min;
	printf("Enter Number:");
	scanf("%d %d %d",&no1,&no2,&no3);
	
	min = (no1<no2)?(no1<no3?no1:no3):(no2<no3?no2:no3);
	printf("Minimum Number is:%d ",min);
}
