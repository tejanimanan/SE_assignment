#include<stdio.h>
void main()
{
	int m1,m2,m3,tot,per;
	printf("Enter Marks:");
	scanf("%d %d %d",&m1,&m2,&m3);
	tot = m1+m2+m3;
	per=tot/3;
	printf("per is:%d\n",per);
	if(per>=33)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
}
