#include <stdio.h>

int main(){

int a , b ,c ;
char repeat ;

do{
printf(" enter 1st number\n");
scanf(" %d", &a);

printf(" enter 2nd number\n");
scanf(" %d", &b);

c=a+b;

printf("the sum of %d and %d is %d ", a ,b ,c );

printf("\n Do you want to continute ( yes = y/ no = n)\n");
scanf(" %c", &repeat);

}while(repeat=='y');


printf("\n End of program ");

return 0 ;
}