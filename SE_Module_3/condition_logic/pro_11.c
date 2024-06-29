//WAP to find number is even or odd using ternary operator
#include<stdio.h>
void main()
{
	int no1;
	printf("Enter Number:");
	scanf("%d",&no1);
	(no1 % 2 == 0 )? printf("number is even"):printf("Number is odd");
}
