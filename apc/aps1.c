#include <stdio.h>

int main() {
    int i = 1;      // counter starts from 1
    int sum = 0;    // stores the total sum

    while (i <= 10) {
        sum = sum + i;  // add current value of i to sum
        i++;            // move to next number
    }

    printf("Sum of numbers from 1 to 10 = %d", sum);

    return 0;
}
