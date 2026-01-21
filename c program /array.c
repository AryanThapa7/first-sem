#include <stdio.h>
#include <string.h>

int main(){
    char str1[] = "aryan";
    char str2[20];
    int count = 0;
    int i;

    for(i = 0; str1[i] != '\0'; i++){
        count++;
    }
    for(i = 0; str1[i] != '\0'; i++){
        str2[i] = str1[i];
    }

    str2[i] = '\0';   
    printf("The number of letters: %d\n", count);
    printf("Copied string is: %s\n", str2);

    return 0;
}
