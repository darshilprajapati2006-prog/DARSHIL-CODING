#include<stdio.h>
int factorial(int *n){
    int fact=1;
    for(int i=2;i<=*n;i++)
        fact*=i;
    return fact;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    factorial(&n);
    printf("%d",factorial(&n));
    return 0;
}