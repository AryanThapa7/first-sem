#include <stdio.h>

// void pointer 
int main(){
int a = 10;
float b = 3.14;
char ch = 'A';
void *ptr; // void pointer declaration
ptr = &a; // pointing to an integer
printf("Value of a: %d\n", *(int*)ptr); // dereferencing void pointer as integer
ptr = &b; // pointing to a float
printf("Value of b: %.2f\n", *(float*)ptr); // dereferencing void pointer as float
ptr = &ch; // pointing to a char
printf("Value of ch: %c\n", *(char*)ptr); // dereferencing void pointer as char
return 0;
}