#include<stdio.h>

int stair(int n){
    if(n < 0) return 0;
    if(n == 0) return 1;
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(n == 3) return 4;

    int totalways = stair(n-1)+stair(n-2)+stair(n-3);
    return totalways;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    printf("%d",stair(n));
    return 0;
}