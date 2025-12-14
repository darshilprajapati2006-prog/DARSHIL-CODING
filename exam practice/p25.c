#include <stdio.h>

void swap(int *aa,int *bb);

int main()
{
    int a, b;
    int *aa, *bb;

    printf("enter a and b : ");
    scanf("%d %d", &a, &b);

    aa = &a;
    bb = &b;
    
    swap(aa, bb);

    printf("after swapping value of a=%d and b=%d", a, b);
    return 0;
}

void swap(int *aa,int *bb)
{
    int temp = *aa;
    *aa = *bb;
    *bb = temp;
}