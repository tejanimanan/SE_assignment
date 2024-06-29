#include<stdio.h>
void main()
{
	int a1,a2,a3;
	printf("Enter A1:");
	scanf("%d",&a1);
	printf("Enter A2:");
	scanf("%d",&a2);
	printf("Enter A3:");
	scanf("%d",&a3);
	
	if(a1+a2+a3 == 180)
	{
		printf("triangle can be formed with the given values ");
	}
	else
	{
		printf("triangle can not be formed with the given values ");
	}
}
