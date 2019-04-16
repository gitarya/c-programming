#include <stdio.h>

int main (void) {
    float loan, rate, month_rate, month_pay;
    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &rate);
    printf("Enter monthly payment: ");
    scanf("%f", &month_pay);

    month_rate = rate * 0.01 / 12.0 ;

    printf("Balance remaining after first payment: %.2f\n", loan - month_pay + loan * month_rate);
    loan = loan - month_pay + loan * month_rate;
    printf("Balance remaining after second payment: %.2f\n", loan - month_pay + loan * month_rate);
    loan = loan - month_pay + loan * month_rate;
    printf("Balance remaining after third payment: %.2f\n", loan - month_pay + loan * month_rate);

    return 0;
}
