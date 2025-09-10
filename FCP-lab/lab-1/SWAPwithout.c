// 6.PROGRAM TO SWAP TWO VARIABLE WITHOUT USING THIRD VARIABLE.

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter value of a=\n");
    scanf("%d",&a);
    printf("Enter value of b=\n");
    scanf("%d",&b);
    a=a+b;  //a=5+10=15
    b=a-b;  //b=15-10=5
    a=a-b;  //a=15-5=10
    printf("After swapping a=%d\n",a);
    printf("After swapping b=%d\n",b);
    return 0;
}    