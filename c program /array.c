#include <stdio.h>

int main(){
        char str[20], ch = 'y';
        int i = 0 ;
        printf("Enter your name : ");
        while(ch!='\n'){
            ch=getchar();
            str[i]=ch ;
            i++;
        }
        str[i]='\0';
        printf("Your name is : %s ", str);
        return 0 ;

}