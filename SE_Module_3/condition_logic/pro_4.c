#include<stdio.h>
void main()
{
	int a,b;
	char op;
	printf("Enter a value:");
	scanf("%d",&a);
	printf("Enter b value:");
	scanf("%d",&b);
	printf("\nSelect Operation: + - * / %% :=");
	scanf(" %c",&op);
	
	switch(op)
	{
		case '+':
		printf("Sum is :%d",a+b);
		break;
		
		case '-':
		printf("Sub is :%d",a-b);
		break;
		
		case '*':
		printf("Mul is :%d",a*b);
		break;
		
		case '/':
		printf("Div is :%d",a/b);
		break;
		
		case '%':
		printf("Modulo is :%d",a%b);
		break;
		
		default:
			printf("Enter proper oprator");
			break;
		
	}
}
