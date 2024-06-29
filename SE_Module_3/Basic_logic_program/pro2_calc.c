#include<stdio.h>
void main(){
	int no1,no2,ans;
	char op;
	printf("Enter no1 value:");
	scanf("%d",&no1);
	printf("Enter no2 value:");
	scanf("%d",&no2);
	printf("select operation + ,- ,* , / :");
	scanf(" %c",&op);
	switch(op)
	{
		case '+' :
		ans = no1+no2;
		break;
		
		case '-':
		ans = no1-no2;
		break;
		
		case '*':
		ans = no1 * no2;
		break;
		
		case '/':
		ans = no1 / no2;
		break;
		
		default:
			printf("\nEnter valid op");
			break;
		

	}
	printf("\nans is : %d",ans);
	
}
