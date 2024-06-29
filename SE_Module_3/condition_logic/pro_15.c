#include<stdio.h>
void main()
{
	int math,phy,chem,total;
	printf("Enter Math mark:");
	scanf("%d",&math);
	printf("Enter phy mark:");
	scanf("%d",&phy);
	printf("Enter chem mark:");
	scanf("%d",&chem);
	total = math+phy+chem;
	
	if(math>=65 && phy >=55 && chem >=50 && total>=190 && math+phy >=140)
	{
			printf("The candidate is eligible.");
	}
	else
	{
		printf("The candidate is not eligible.");
	}
}
