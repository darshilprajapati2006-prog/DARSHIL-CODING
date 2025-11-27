#include<stdio.h>
void num(int x){
    if(x%2==0) printf("%d is even",x);
    else printf("%d is odd",x);
}
int main(){
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    num(a);
    return 0;
}