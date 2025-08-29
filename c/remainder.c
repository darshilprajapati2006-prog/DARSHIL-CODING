#include<stdio.h>
int main(){
    int a,b; // a=dividend, b=divisor and a>b
    printf("Enter Divident : ");
    scanf("%d",&a);
    printf("Enter Divisor : ");
    scanf("%d",&b);
    int quotient = a/b;
    int remainder = a - (quotient*b);
    printf("the remainder when %d is divided by %d is : %d",a,b,remainder);
    return 0;  
}