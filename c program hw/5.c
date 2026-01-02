//Write a program to input a character and print its ASCII value.

#include <stdio.h>
int main(){
    char c;
    printf("Enter any single character: ");
    scanf("%c", &c);
    printf("The ASCII value of %c is %d\n", c, c);
    return 0;
}