//18. Calculate person’s Annual salary
#include<stdio.h>
void main()
{
	int sal , ann_sal;
	printf("Enter 1 month salary:");
	scanf("%d",&sal);
	
	ann_sal = sal * 12;
	
	printf("Annual salary is : %d ",ann_sal);
	
}
