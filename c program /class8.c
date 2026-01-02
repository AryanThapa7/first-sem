#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {                       // outer loop → 1, 2, 3
        for (j = 1; j <= 3; j++) {                   // inner loop → ×1, ×2, ×3
            printf("%d * %d = %d\n", i, j, i * j);
        }
        printf("\n");  
    }

    return 0;
}
