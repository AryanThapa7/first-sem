#include <stdio.h>

int main(){

    char val ;

    printf("Enter the character : \n ");
    scanf("%c", &val);

    while(val!='n'){

        printf("You have entered the character : %c\n", val);
        
        printf(" Again enter the character : \n");
        scanf(" %c", &val);

    }
    printf(" End of the program");
    return 0 ;
}