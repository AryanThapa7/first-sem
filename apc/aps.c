#include<stdio.h>
int add(int a,int b);
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("enter b");
    scanf("%d",&b);
    int c=add(a,b);
    printf("sum is %d",c);
    return 0;
}
int add(int a, int b){
    return a+b;
}