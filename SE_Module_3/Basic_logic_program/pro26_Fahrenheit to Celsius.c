//26 Fahrenheit to Celsius  C = (°F - 32) ÷ (9/5) 
#include<stdio.h>
void main()
{
	float f,c;
	printf("Enter Fahrenheit value:");
	scanf("%f",&f);
	 c = (f-32) / (9.0/5.0);
	 printf("Celsius is %0.2f",c);
}
