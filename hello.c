#include <stdio.h>

int main(){

int num ;
int digit ;
int sum = 0 ;
int temp ;

printf("Enter any number");
scanf("%d", &num);

temp = num ;

while( num !=0){
digit = num % 10 ; // last to digit 
sum = sum + (digit*digit*digit);
num = num / 10 ;    // decimal ma last ko number aucha ani hatcha 
}

if( sum == temp ){
    printf("%d is an armstrong number", temp);
}

    else{
        printf("&%d is not an armstrong number", temp);
    
    }

    return 0 ;

}





