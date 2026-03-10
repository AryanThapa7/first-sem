#include <stdio.h>

// pointer and array in c 

int main() {
    int arr[5];
    int *ptr = arr; // pointer to the first element of the array

   
    for (int i = 0; i < 5; i++) {
        printf("enter element %d: ", i + 1);
        scanf("%d", (ptr + i)); // accessing array elements using pointer arithmetic
    }
    for(int i = 0; i < 5; i++) {
        printf("element %d: %d\n", i + 1, *(ptr + i)); // accessing array elements using pointer arithmetic
    }

    return 0;
}