#include <stdio.h> 
#include <time.h>

int main(){
        int n = 100000;
        int i ;

        clock_t start , end ;
        double cpu_time_used;

        start = clock(); 

        for(i=0; i < n ; i++){

                int x = i*i ;
        }  

        end = clock();

        cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;

        printf("Time taken for n=%d is %f seconds\n", n , cpu_time_used);

        return 0 ;

}