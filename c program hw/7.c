// Write a program to read an integer and check whether the input operation was successful using the return value of 
// scanf . 


#include <stdio.h>
int main(){
    int  result , num;
    printf("Enter any number ");
    result = scanf("%d", &num);


    if(result == 1 ){
        printf("User entered a correct integer : %d\n" , num );
    } 
    else{
        printf("User entered an incorrect integer \n"  );
    }
    return 0;
} 