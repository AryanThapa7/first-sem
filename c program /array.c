#include <stdio.h>
#include <string.h>

int main(){
        char str[]="aryan";
        int count = 0 ;
        for(int i = 0 ; str[i]!='\0' ; i++){
            count++ ; 
        }
        printf("The number of letters : %d\n" ,count);
        return 0 ;

}