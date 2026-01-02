// Write a program that takes two numbers as input and swaps them using a temporary variable.
#include <stdio.h>

int main(){

    int n1,n2, digit;
    printf("Enter first number  ");
    scanf("%d", &n1);
    printf("Enter second number  ");
    scanf("%d", &n2);
    
    digit = n1;
    n1 = n2;
    n2 = digit;

    printf("The first number  %d\n", n1);
    printf("The second number  %d\n", n2);
    return 0;
}