#include <stdio.h>

int main() {

    int num ; 
    printf("Enter any number : ");
    scanf("%d",&num);

    int count=0 ;
    while(num != 0 ){

     num= num/10 ;
     count++ ;
     
    }
    
   printf("The total digits is %d " , count ) ;

   return 0 ;
   
} 

    