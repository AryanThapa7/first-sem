#include <stdio.h>

int main() {
    int guess, number = 7;

    do {
        printf("Guess the number: ");
        scanf("%d", &guess);

        if (guess > number)
            printf("Too High!\n");
        else if (guess < number)
            printf("Too Low!\n");
    } while (guess != number);

    printf("Correct Guess!");

    return 0;
}
