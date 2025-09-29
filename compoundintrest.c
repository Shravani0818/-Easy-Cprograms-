#include<stdio.h>
#include<math.h>

int main()
 {
    float principal, rate, time, amount, compoundinterest;

    printf("Enter the principal amount: ");
    scanf("%f", &principal);

    printf("Enter the rate of interest: ");
    scanf("%f", &rate);

    printf("Enter the time : ");
    scanf("%f", &time);

    amount = principal * pow((1 + rate / 100), time);
    compoundinterest = amount - principal;

    printf("Compound interest = %f\n", compoundinterest);
    printf("Total Amount = %f\n", amount);

    return 0;
}
