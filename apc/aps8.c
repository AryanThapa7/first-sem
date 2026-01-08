#include <stdio.h>

void sum() {
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);
    printf("The sum is %d", a + b);
}

int main() {
    sum();   
    return 0;
}
