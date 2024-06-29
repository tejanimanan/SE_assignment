// WAP to find the largest of three numbers.
#include<stdio.h>
void main()
{
	int no1,no2,no3;
	printf("Enter Number value:");
	scanf("%d %d %d",&no1,&no2,&no3);
	
	if(no1>=no2 && no1>=no3)
	{
		printf("Number %d is largest.",no1);
	}
	else if(no2>=no1 && no2 >= no3)
	{
		printf("Number %d is largest.",no2);
	}
	else{
		printf("Number %d is largest.",no3);
	}
}
