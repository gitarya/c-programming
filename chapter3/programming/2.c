#include <stdio.h>

int main(void){
    int num, m, d, y;
    float price;

    printf("Enter item number: ");
    scanf("%d", &num);
    printf("Enter unit price: ");
    scanf("%f", &price);
    printf("Enter purchase data (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m, &d, &y);
    printf("Item\tUnit\tPurchase\n \tPrice\tDate\n%d\t$ %.2f\t%d/%d/%d\n", num, price, m, d, y);
    return 0;
}
