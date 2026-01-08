#include <stdio.h>

int main() {
    int a, r, n, i, term;

    printf("Enter first term, ratio and number of terms: ");
    scanf("%d %d %d", &a, &r, &n);

    term = a;

    for (i = 1; i <= n; i++) {
        printf("%d ", term);
        term = term * r;
    }

    return 0;
}
 