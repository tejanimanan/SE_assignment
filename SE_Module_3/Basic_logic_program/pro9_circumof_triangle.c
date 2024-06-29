//9. Find circumference of Triangle formula : triangle = a + b + c
#include<stdio.h>
void main()
{
	int a,b,c,cir_tri;
	printf("Enter side value A ,b & c:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	cir_tri = a + b + c;
	printf("circumference of triangle is :%d ",cir_tri);
}
