#include<stdio.h>
void main()
{
	char name[10];
	int sal,avg,total=0,count=0,i;
	
	for(i=0;i<5;i++)
	{
		printf("\n\nEnter EmpName:");
		scanf(" %s",&name);
	
		printf("Enter Salary:");
		scanf("%d",&sal);
		count++;	
		total= total+sal;
	}
	printf("\ntotal salary is :%d",total);
	avg=total/count;
	printf("\n\nAverage is:%d",avg);		
	
}
