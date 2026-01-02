#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n); 
    int array[n];
    printf("Enter %d numbers\n", n);
    for(int i = 0 ; i<n; i++){
        scanf("%d", array[i]);
    }
    for(int i = 0; i<n; i++){
        printf("%d", array[i]);
    }
    
    return 0;
}
