#include <stdio.h>
#include <stdlib.h>

/* realloc()
it is used for resizing a previously allocated memory block. It takes two arguments: a pointer to the previously allocated memory block and the new size in bytes. If the new size is larger than the old size, realloc() will allocate additional memory and copy the existing data to the new location. If the new size is smaller, it will truncate the existing data. If realloc() fails to allocate the requested memory, it returns NULL and leaves the original memory block unchanged.
syntax : void* realloc(void* ptr, size_t new_size); where size_t is an unsigned integer type used to represent the size of objects in bytes. The ptr parameter is a pointer to the memory block that was previously allocated with malloc(), calloc(), or realloc(). If ptr is NULL, realloc() behaves like malloc() and allocates a new block of memory. If new_size is zero and ptr is not NULL, realloc() behaves like free() and deallocates the memory block pointed to by ptr.

*/ 
int main (){
    int *array = (int*)malloc(5 * sizeof(int)); // Allocate memory for 5 integers
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1; // Exit if memory allocation fails
}
    // Initialize the array
    for (int i = 0; i < 5; i++) {
        array[i] = i + 1; // Fill the array with values 1 to 5
    }

    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Resize the array to hold 10 integers
    int *new_array = (int*)realloc(array, 10 * sizeof(int));
    if (new_array == NULL) {
        printf("Memory reallocation failed\n");
        free(array); // Free the original array if reallocation fails
        return 1; // Exit if memory reallocation fails
    }
    array = new_array; // Update the pointer to the new memory block

    // Initialize the new elements of the array
    for (int i = 5; i < 10; i++) {
        array[i] = i + 1; // Fill the new part of the array with values 6 to 10
    }

    // Print the resized array
    printf("Resized array: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array); // Free the allocated memory
    return 0;
}