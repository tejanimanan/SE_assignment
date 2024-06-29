//31. Convert kilometers into meters
#include<stdio.h>
void main()
{
	float km,meter;
	printf("Enter Kilometer:");
	scanf("%f",&km);
	meter = km * 1000;
	printf("Meter is :%0.2f",meter);
}
