#include <stdio.h>

int main()
{
    int n, i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int arr[n];
    while (n > 0)
    {
        arr[i] = n % 2;   
        n = n / 2;     
        i++;
    }

    printf("Binary number is: ");

    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}
