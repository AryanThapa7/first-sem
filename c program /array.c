#include <stdio.h>

int main(){
    int  n ;
    int even= 0 , odd= 0;

    printf("Enter the number of elements");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");

    for(int i=0; i<n ; i++){
         scanf("%d", &arr[i]);
    
         if(arr[i]%2==0)
         even++;

         else 
         odd++;
}

    printf("Even numbers count = %d\n", even);
    printf("Odd numbers count = %d\n", odd); 

    return 0;
}