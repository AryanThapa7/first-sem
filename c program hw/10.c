// Write a program to input marks of five subjects and calculate the total and percentage.

#include <stdio.h>

int main() {
    int i=1;
    int marks;
    int total = 0;
    float percentage;

    while (i <= 5) {
        printf("Enter marks for subject %d: ", i);
        scanf("%d", &marks);

        if (marks >= 0 && marks <= 100) {
            total = total + marks;
            i++;
        } else {
            printf("Invalid ! Enter marks between 0 and 100.\n");
        }
    }

    percentage = (total / 500.0) * 100;

    printf("\nTotal Marks = %d\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}
