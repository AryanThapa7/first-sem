#include <stdio.h>

// function returning pointer 
// syntax: data_type *function_name(parameters)
// eg : float *getAverage(int a, int b){
//     float *avg = (float *)malloc(sizeof(float));
//     *avg = (a + b) / 2.0;
//     return avg;
// }
// array of pointers
// syntax: data_type *array_name[size]
// eg : int *arr[5]; // array of 5 integer pointers
int main(){
    int *pa[3]; // array of 3 integer pointers
    int i, a = 5 , b = 10 , c = 15;
    pa[0] = &a; // assigning address of a to first pointer
    pa[1] = &b; // assigning address of b to second pointer 
    pa[2] = &c; // assigning address of c to third pointer
    for(i=0 ; i < 3 ; i++){
        printf("Value at pa[%d] = %d\n", i, *pa[i]); // dereferencing pointer to get value
    }
    return 0;
}