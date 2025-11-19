#include <stdio.h>

int factorial(int x){
    int fact = 1;
    for(int i = 2; i <= x; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int n, r;
    printf("enter n and r : ");
    scanf("%d %d", &n, &r); 
    int ncr;

    ncr = factorial(n) / (factorial(r) * factorial(n - r));
    printf("%dC%d = %d\n", n, r, ncr);
    return 0;
}