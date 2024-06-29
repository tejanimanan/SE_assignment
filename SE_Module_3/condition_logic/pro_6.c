#include<stdio.h>
void main()
{
	char ch;
	printf("Enter any Character:");
	scanf(" %c",&ch);
	
	if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'|| ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') 
	{
		printf(" Character is vowel: %c",ch);
	}
	else
	{
		printf("Character is not vowel");
	}
}
