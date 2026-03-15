#include <stdio.h>
#include <stdlib.h>

/*  Dynamic memory allocation 

malloc() allocates a block of memory of the specified size and returns a pointer to the beginning of the block.
 syntax : 
    void* malloc(size_t size);
        ptr = (castType*) malloc(sizeInBytes);
        eg : 
        int *ptr 
        ptr = (int*) malloc(10 * sizeof(int)); 
        this allocates memory for 10 integers and returns a pointer to the first integer in the block. The size of each integer is determined by sizeof(int).
        returns null if the memory allocation fails

 */
int main(){ 
    int *arr , size ;
    printf("Enter the size of array : ");
    scanf("%d",&size);

    arr = (int*) malloc(size * sizeof(int)); // this allocates memory for 'size' integers and returns a pointer to the first integer in the block.
    if ( arr == NULL){ // check if malloc failed to allocate memory
        printf("Memory allocation failed\n");
    }
    for ( int i = 0; i < size; i++){
        printf("Enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are : ");
    for ( int i = 0; i < size; i++){
        printf("%d ",arr[i]);

}
    free(arr); // deallocate the memory allocated by malloc
    return 0;
}
