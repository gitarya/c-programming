#include <stdio.h>


int main(void) {
    int amount, bills20, bills10, bills5, bills1;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    bills20 = amount / 20;
    bills10 = (amount - 20 * bills20) / 10;
    bills5  = (amount - 20 * bills20 - 10 * bills10) / 5;
    bills1  = amount - 20 * bills20 - 10 * bills10 - 5 * bills5;

    printf("$20 bills: %d\n", bills20);
    printf("$10 bills: %d\n", bills10);
    printf("$5 bills: %d\n", bills5);
    printf("$1 bills: %d\n", bills1);

    return 0;
}
