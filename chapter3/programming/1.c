#include <stdio.h>

int main(void){
    int y, m, d;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &m,&d, &y);
    printf("You entrtrd the date %d%d%d\n", y, m, d);

    return 0;
}
