#include <stdio.h>

int main(void)
{
    int input, r1, r2, r3, r4, r5;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &input);
    r1 = input % 8;
    r2 = input / 8 % 8;
    r3 = input / 8 / 8 % 8;
    r4 = input / 8 / 8 / 8 % 8;
    r5 = input / 8 / 8 / 8 / 8 % 8;
    printf("In octal, your number is: 03641: %d%d%d%d%d\n", r5, r4, r3, r2, r1);

    return 0;
}
