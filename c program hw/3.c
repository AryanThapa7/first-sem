// Write a program to input two integers and print their sum, difference, product, and quotient.

#include <stdio.h>
int main(){
    float x, y;
    printf("Enter first number: ");
    scanf("%f", &x);
    printf("Enter second number: ");
    scanf("%f", &y);


    printf("%.1f plus %.2f = %.2f\n", x, y, x+y);
    printf("%.2f minus %.2f = %.2f\n", x, y, x-y);
    printf("%.2f multiplied by %.2f = %.2f\n", x, y, x*y);
    printf("%.2f divided %.2f = %.2f\n", x, y, x/y);

    return 0;
}