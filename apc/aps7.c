#include <stdio.h>
#define ROW 2 
#define COL 2

int main(){
    int arr [ROW][COL];
    for(int i = 0; i<ROW;i++){
        printf("Enter the element to add in row : %d", i++);
    
    for(int j=0 ; j<COL ; j++)
    scanf("%d", &arr[i][j]);
    }
    printf("the matrix is : \n");
    for(int i = 0; i<ROW;i++){ 
    for(int j=0 ; j<COL ; j++)
    printf("%d", arr[i][j]);
    }
    printf("\n");

return 0 ;
}
