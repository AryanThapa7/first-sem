#include <stdio.h>

int main() {
    int num = 10;        // Normal integer variable
    int *ptr;            // Pointer variable (stores address)

    ptr = &num;          // Store address of num in ptr

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);

    printf("Value stored in ptr (address of num): %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);

    return 0;
}