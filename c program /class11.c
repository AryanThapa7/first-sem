#include <stdio.h>

int main() {
    int base, power, i;
    int result = 1;

    printf("Enter base and power: ");
    scanf("%d %d", &base, &power);

    for (i = 1; i <= power; i++) {
        result = result * base;
    }

    printf("Result = %d\n", result);

    return 0;
}
