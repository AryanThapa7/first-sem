#include <stdio.h>

int main() {
    int num ;
    int i = 1;
    int fact =1 ;

    printf("Enter a number : ");
    scanf("%d", &num);

   if (num >= 0) {
        while (i <= num) {
            fact = fact * i;
            i++;
        }
        printf("Factorial of %d is %d\n", num, fact);
        } 

        
        else {
        printf("Invalid input! Please enter a  positive number.\n");
        }

    return 0;
}
