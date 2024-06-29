//20. Accept monthly salary from the user and deduct 10% insurance premium,
//10% loan installment find out of remaining salary
#include<stdio.h>
void main()
{
	int sal,ip,loan_inst,net_sal;
	printf("Enter Month salary:");
	scanf("%d",&sal);
	ip = (sal * 10) / 100;
	loan_inst = (sal * 10) / 100;
	
	net_sal = sal - ip - loan_inst;	
	
	printf("Net salary is :%d",net_sal);
	 
}
