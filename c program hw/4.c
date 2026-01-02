// Write a program to input a floating-point number and display it up to two decimal places.

#include <stdio.h>
int main(){
    float num;
    printf("Enter a floating point number\n");
    scanf("%f", &num);
    printf("The number you entered in two decimal places is %.2f.\n", num);
    return 0;
}