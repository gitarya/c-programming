#include <stdio.h>

int main(void){
    int GS1, id, code, num, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GS1, &id, &code, &num, &check);
    printf("GS1 prefix: %d\n", GS1);
    printf("Group identifier: %d\n", id);
    printf("Publisher code: %d\n", code);
    printf("Item number: %d\n", num);
    printf("Check digit: %d\n", check);

    return 0;
}
