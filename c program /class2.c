#include <stdio.h>
#include <math.h>

int main() {

    int num ;
    printf(" Enter any number :"); 
    scanf("%d", &num);

    int sum = 0 ;
    while (num!=0){
     
    sum = sum + num % 10 ; 
    num = num / 10 ;
    }

    printf(" The sum of the given number is : % d " , sum );

    return 0 ;



   
}