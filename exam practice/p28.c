#include <stdio.h>

void square(int n);
void _square(int *n);

int main()
{
    int n=4;
    square(n);
    printf("n is : %d\n",n);
    _square(&n);
    printf("n is : %d",n);
    return 0;
}
void square(int n){
    n = n * n;
    printf("the square is : %d\n",n);
}
void _square(int *n){
    *n = *n * *n;
    printf("the square is : %d\n",*n);
}

