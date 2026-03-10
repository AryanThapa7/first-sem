#include <stdio.h>

// pointer and array in c 

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // pointer to the first element of the array

    printf("Array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); // accessing array elements using pointer arithmetic
    }
    printf("\n");

    return 0;
}