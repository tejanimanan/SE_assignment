// Write a C program to read temperature in centigrade and display a suitable
//message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot
#include<stdio.h>
void main()
{
	int temp;
	printf("Enter temperature in centigrade:");
	scanf("%d",&temp);
	
	if (temp < 0)
	{
		printf("Freezing weather");
	}
	else if (temp > 0 && temp < 10)
	{
		printf("very cold weather");
	}
	else if (temp > 10 && temp < 20)
	{
		printf("cold weather");
	}
	else if ( temp > 20 && temp <30)
	{
		printf("Normal weather");
	}
	else if (temp > 30 && temp < 40)
	{
		printf("Hot weather");
	}
	else
	{
		printf("its very Hot weather");
	}
}
