#include <stdio.h>

int main(){
int num ;

printf("Enter the number \n ");
scanf("%d", &num);

while(num!=0){
    printf(" You have entered : %d\n",num );
    printf("Again enter the number \n ");
    scanf(" %d", &num);
}
printf("End of the program\n");

return 0;


}