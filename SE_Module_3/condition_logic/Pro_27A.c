#include<stdio.h>
void main()
{
	int day;
	printf("Enter Day:");
	scanf("%d",&day);
	
	switch(day)
	{
		
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wendsday");
			break;
		case 4:
			printf("Thrusday");
			break;
		case 5:
			printf("Firday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("sunday");
			break;
		default:
			printf("Enter Proper Input.");
	}
}
