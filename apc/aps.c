#include <stdio.h>

// function declarations
void sum();
void sub(int a, int b);
int mul();
float div(float a, float b );

// global variables
int num1 ;
int num2;

int main(){
    printf("Enter any 2 numbers : "); // asking for 2 numbers
    scanf("%d%d",&num1 , &num2); // storing the variables into num1 and num2 

    // calling functions
    sum();
    sub( num1, num2 );
    mul();
    div( num1,  num2 );

    return 0 ;
}


void sum(){
    int c = num1 + num2;
    printf("The sum of %d and %d is %d\n" , num1 , num2 , c );
   

}
void sub(int a, int b){
    printf("The sub of %d and %d is %d\n",a,b,(a-b));
}

int mul(){
    int a , b , c ;
    c=a*b;
    printf("The multiplication of %d and %d is %d\n", a , b , c);
    return c ;
}

float div(float a, float b ){
if(num2 > 0){
printf("%.2f divided by %.2f is %.2f\n", a , b , a/b);
}
else{
    printf("Error");

}
return 0 ;
}







