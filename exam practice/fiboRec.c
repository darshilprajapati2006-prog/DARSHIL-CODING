#include<stdio.h>
int fibo(int n){
    if(n==0) printf("not allowed");
    if(n==1 || n==2) return 1;
    int next = fibo(n-1)+fibo(n-2);
    return next;
}
int main(){
    int n;
    printf("enter no of terms : ");
    scanf("%d",&n);
    int x = fibo(n);
    printf("%d ",x);
    return 0;
}