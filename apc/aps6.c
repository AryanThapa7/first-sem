#include <stdio.h>
#include <string.h>

int main(){

int choice ;    
char repeat ;

    printf("\n --------------------------------------------------------------\n");
    printf(" Welcome to Deerwalk Canteen\n");
    printf("-------------------------------------------------------------------\n");

    printf("-----Menu for today-----\n");
    printf("------------------------\n");

    printf("1.Momo\n2.Pizza\n3.Burger\n4.Drink\n");
do{
    printf("Enter your choice\n");
    scanf("%d", &choice);

    switch (choice){
        case 1: printf(" Your Momo is ready\n ");
        break ;

        case 2: printf(" Your Pizza  is ready\n ");
        break ;
        
        case 3: printf(" Your Burger is ready\n ");
        break ;

        case 4: printf(" Your Drink is ready\n ");
        break ;
        default:printf(" Invalid choice ");
        }

        printf("Do you want to order more ? (press y for yes / press n for no):\n");
        scanf(" %c", &repeat);
    }while(repeat=='y');

    printf("Thank you ! come again  \n");

    return 0 ;

}

