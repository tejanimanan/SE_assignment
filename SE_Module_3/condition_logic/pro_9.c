#include<stdio.h>
void main()
{
	char ch;
	printf("Enter any character:");
	scanf(" %c",&ch);
	if (ch >= 'A' && ch <= 'Z')
	{
		printf("\n Character is Uppercase.");
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("\n Character is lowercase.");
	}
	else if (ch >= '0' && ch <='9')
	{
		printf("\n this is a digit.");
	}
	else
	{
		printf("\n this is a special character");
	}
}
