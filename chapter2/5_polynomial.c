#include <stdio.h>
#include <math.h>

int main (void)
{
    int x, result;
    printf("input x: ");
    scanf("%d", &x);
    result = 3 * pow(x,5) + 2 * pow(x,4) - 5 * pow(x,3) - x * x + 7 * x - 6;
    printf("%d", result);

    return 0;
}
