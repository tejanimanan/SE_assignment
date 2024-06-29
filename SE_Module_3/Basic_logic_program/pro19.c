#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;

    
    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter interest rate (in decimal): ");
    scanf("%lf", &rate);

    printf("Enter time period (in years): ");
    scanf("%lf", &time);

    
    amount = principal * pow(1 + rate, time);

    
    compound_interest = amount - principal;

   
    printf("Principal amount: %.2lf\n", principal);
    printf("Interest rate: %.2lf%%\n", rate * 100);
    printf("Time period: %.2lf years\n", time);
    printf("Amount: %.2lf\n", amount);
    printf("Compound Interest: %.2lf\n", compound_interest);

    return 0;
}

