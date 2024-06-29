//. WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
void main()
{
	int no1,no2;
	printf("\nSwaping  variable value");
	printf("\n\nEnter No1 & no2 value:\n");
	scanf("%d %d",&no1,&no2);
	printf("before swap  \nno1 is :%d \nno2 is : %d",no1,no2);	
	
	no1 = no1 * no2;
	no2 = no1 / no2;
	no1 = no1 / no2;
	printf("\n\nAfter swap  \nno1 is :%d \nno2 is : %d",no1,no2);	
	
}
