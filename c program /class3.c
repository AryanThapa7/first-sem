#include <stdio.h>

int main() {
    
 int num ; 
printf("Enter any number : ");
scanf(" %d" , &num );

    int rev = 0 ;
    int digit ;

    while( num != 0 ){
        digit = num % 10 ;
        rev = rev * 10 + digit ;
        num = num / 10 ;
    }

    printf("The reversed number is %d ", rev);

    return 0 ;


    
    }


    


   
