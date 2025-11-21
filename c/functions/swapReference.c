#include<stdio.h>
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}

int main(){
    int a=2;
    int b=9;
    swap(&a,&b);
    printf("value of a is %d\n",a);
    printf("value of b is %d\n",b);
    return 0;
}