//17. Calculate person’s insurance premium based on salary
#include<stdio.h>
void main()
{
	int ip,ip_rate,sal;
	
	printf("Enter salary:");
	scanf("%d",&sal);
	
	printf("Enter insurance premium rate: ");
	scanf("%d",&ip_rate);
	
	ip = sal * ip_rate/100;
	
	printf("insurance premium is :%d",ip);
	
}
