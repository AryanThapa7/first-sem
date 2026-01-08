#include <stdio.h>

int main() {
    int num, sum = 0, count = 0, digit;
    float avg;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        sum = sum + digit;
        count++;
        num = num / 10;
    }

    avg = (float)sum / count;
    printf("Average = %.2f", avg);

    return 0;
}
