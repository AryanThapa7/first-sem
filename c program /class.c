#include <stdio.h> 
#include <stdlib.h>
/* file handling in c : 
buffer is used to store the data temporarily before writing it to the file or reading it from the file.
buffer is used to improve the performance of file handling operations by reducing the number of disk accesses.
# opening a file :
FILE *fopen(const char *filename, const char *mode);
filename : name of the file to be opened
mode : mode in which the file is to be opened (e.g. "r" for reading, "w" for writing, "a" for appending, etc.)
returns a pointer to a FILE object that can be used to access the file, or NULL if the file cannot be
example : *fpl ;
fpl = fopen("file.txt", "r"); // opens the file in read mode 
fpl = fopen("file.txt", "w"); // opens the file in write mode
fpl = fopen("file.txt", "a"); // opens the file in append mode

*/ 
// example : 

int main() {
    FILE *ptr ;
    char name[20]=" aryan thapa ";
    ptr = fopen("hello.txt", "w"); // opens the file in write mode
    if(ptr == NULL) {
        printf("Error opening file");
        return 1;
    }
    int i = 0 ;
    while(name[i] != '\0'){ 
        fputc(name[i], ptr);
        i++;
    }
    fclose(ptr); // closes the file
    return 0;
    
}
    