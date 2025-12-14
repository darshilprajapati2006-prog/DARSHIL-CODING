#include <stdio.h>

int main()
{
    int a,b,sum;
    int *p,*q;
    p=&a,q=&b;

    printf("enter two no: ");
    scanf("%d %d",&a,&b);
    sum = *p + *q;
    printf("sum is : %d",sum);
    return 0;
}