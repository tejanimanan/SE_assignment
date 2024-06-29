//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable
//and without using 3rd variable
#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter a & b value:");
	scanf("%d %d",&a,&b);
	printf("before  swap A is :%d & B is :%d",a,b);
	c = a;
	a = b;
	b = c;
	printf("\nAfter swap \nA is : %d \nB is : %d",a,b);
	int no1,no2;
	printf("\n\nSwaping without 3rd variable");
	printf("\n\nEnter No1 & no2 value:\n");
	scanf("%d %d",&no1,&no2);
	no1 = no1 + no2;
	no2 = no1 - no2;
	no1 = no1 - no2;
	printf("After swap  \nno1 is :%d \nno2 is : %d",no1,no2);	
	
}
