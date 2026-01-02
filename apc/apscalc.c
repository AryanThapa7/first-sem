#include <stdio.h>

// function for addition
int add(int a, int b) {
    return a + b;
}

// function for subtraction
int subtract(int a, int b) {
    return a - b;
}

// function for multiplication
int multiply(int a, int b) {
    return a * b;
}

// function for division
float divide(int a, int b) {
    return (float)a / b;
}

int main() {
    int a, b, choice;

    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    printf("\nCalculator Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Result = %d", add(a, b));
    }
    else if (choice == 2) {
        printf("Result = %d", subtract(a, b));
    }
    else if (choice == 3) {
        printf("Result = %d", multiply(a, b));
    }
    else if (choice == 4) {
        printf("Result = %.2f", divide(a, b));
    }
    else {
        printf("Invalid choice");
    }

    return 0;
}
