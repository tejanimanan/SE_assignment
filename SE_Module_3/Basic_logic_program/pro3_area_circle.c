//area of circle
#include<stdio.h>
void main()
{
		float PI,radius,area,circumference;
		PI=3.14;
		printf("Pi value is :%.2f\n",PI);
		printf("Enter the radius:");
		scanf("%f",&radius);
		
		// find area
		area = PI * radius * radius;
		
		// find circumference
		 circumference = 2 * PI * radius;
		 
		 printf("\nArea is :%.2f ",area);
		 printf("\ncircumference is :%.2f",circumference);
		 
}
