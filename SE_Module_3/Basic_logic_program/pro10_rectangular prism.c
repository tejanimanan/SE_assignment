//10. find the area of a rectangular prism formula : A=2(wl+hl+hw)
///    _______
//   /      /|
//  /______/ |
// |      |  |
// |      |  |
// |______| /
#include<stdio.h>
void main()
{
	int w,l,h,area;
	printf("Enter width:");
	scanf("%d",&w);
	printf("Enter length:");
	scanf("%d",&l);
	printf("Enter height:");
	scanf("%d",&h);
	
	area = 2 * (w*l + h*l + h*w);
	printf("Area  of rectanglar prism: %d",area);
	
	
	
}
