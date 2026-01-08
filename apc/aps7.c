#include <stdio.h>
void sum(){ // function prototype  
    int a , b ;
    printf("enter 2 numbers");
    scanf("%d%d", &a , &b );

    printf(" the sum of %d and %d is %d ", a , b , a+b);

}

int main(){
    sum();
    return 0 ;

}