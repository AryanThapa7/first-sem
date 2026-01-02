// Write a program to input a student’s name and roll number and display them in a formatted output.

#include <stdio.h>
#include <string.h>

int main(){

    char name[25];
    int roll_no;

    printf("Enter your name: ");
    scanf("%c", &name);
    printf("Enter your roll.no: ");
    scanf("%d", &roll_no);

    printf("Name: %c \nRoll no: %d\n", name, roll_no);
    
    return 0;
}