//8. Find circumference of Rectangle formula : circumference = 2 * (length + width)
#include<stdio.h>
void main()

{
	int l ,w,c;
	printf("Enter length & width:");
	scanf("%d %d",&l,&w);
	c = 2 * (l+w);
	printf("circumference is :%d",c);
}
