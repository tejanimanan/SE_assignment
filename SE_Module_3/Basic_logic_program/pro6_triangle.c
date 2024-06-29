//Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
void main()
{
	float area,b,h;
	printf("Enter value B:");
	scanf("%f",&b);
	printf("Enter value H:");
	scanf("%f",&h);
	
	//area of Triangle
	
	area = (1/2)* b*h;
	printf("Area of triangle: %.2f",area);
}
