#include<stdio.h>
void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
    return;
}
int main(){
    int a,b;
    printf("enter two numbers : ");
    scanf("%d %d",&a,&b);
    int temp=a;
    a=b;
    b=temp;
    printf("after swaping the value of a is %d\n",a);
    printf("after swaping the value of b is %d\n",b);
    return 0;

}
