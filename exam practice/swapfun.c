#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp; 
    return;
}
int main(){
    int a;
    printf("enter a first number : ");
    scanf("%d",&a);
    int b;
    printf("enter a second number : ");
    scanf("%d",&b);
    swap(a,b);
    int temp=a;
    a=b;
    b=temp;
    printf("after swapping the value of a is:%d\n",a);
    printf("after swapping the value of b is:%d\n",b);
    return 0;
}