#include <stdio.h>

int main()
{
    float sal, gross, da, hra;

   
    printf("Enter basic salary of an employee: ");
    scanf("%f", &sal);



    if(sal <= 10000)
    {
        da  = sal * 0.8;
        hra = sal * 0.2;
    }
    else if(sal <= 20000)
    {
        da  = sal * 0.9;
        hra = sal * 0.25;
    }
    else
    {
        da  = sal * 0.95;
        hra = sal * 0.3;
    }

    // Calculate gross salary 
    gross = sal + hra + da;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", gross);

    return 0;
}
