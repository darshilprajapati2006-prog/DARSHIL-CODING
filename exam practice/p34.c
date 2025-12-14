#include <stdio.h>
int factorial(int x);
int main()
{
    int n,r;
    printf("enter n : ");
    scanf("%d",&n);
    printf("enter r : ");
    scanf("%d",&r);
    int ncr = factorial(n) / (factorial(r) * factorial(n - r));
    printf("value of ncr = %d", ncr);
    return 0;
}
int factorial(int x){
    int fact = 1;
    for(int i = 1; i <= x; i++){
        fact *= i;
    }
    return fact;
}