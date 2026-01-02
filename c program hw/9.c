//  Write a program to input temperature in Celsius and convert it to Fahrenheit.


#include <stdio.h>

int main(){

    float temp;
    printf("Enter the temperature in celsius  ");
    scanf("%f", &temp);

    temp = (temp*9)/5 + 32;
    printf("The temperature is %.2f°F\n", temp);
    return 0;
}