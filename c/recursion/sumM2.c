#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return n;
    return n+sum(n-1);
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int x=sum(n);
    printf("%d",x);
    return 0;
}