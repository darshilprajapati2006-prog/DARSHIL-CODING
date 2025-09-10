// 5.PROGRAM TO SWAP TWO VARIABLE USING THIRD VARIABLE.

#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter value of a=\n");
    scanf("%d",&a);
    printf("Enter value of b=\n");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping a=%d\n",a);
    printf("After swapping b=%d\n",b);
    return 0;
}