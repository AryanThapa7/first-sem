#include <stdio.h>

int main() {
    int n, i;
    int term = 1;     // first term
    int sum = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

  
        for (i = 1; i <= n; i++) {
            sum = sum + term;     // add current term to sum
            term = term + i;     // find next term
                    
        }

        printf("Sum of the series is: %d\n", sum);
    

    return 0;
}


