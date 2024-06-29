#include<stdio.h>
void main()
{
	int m,n;
	printf("Enter m value:");
	scanf("%d",&m);
	if(m>0)
	{
		n=1;
		printf("N value is:%d",n);
	}
	else if (m==0 && m == -1)
	{
		n=0;
		printf("N value is:%d",n);
		
	}
	else
	{
		n=0;
		printf("N value is:%d",n);
	}
}
