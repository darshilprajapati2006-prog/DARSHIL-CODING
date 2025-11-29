#include<stdio.h>
void decreasing(int x,int n){
    if(x>n) return;
    decreasing(x+1,n);
    printf("%d ",x);
    return;
}

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    decreasing(1,n);
    return 0;
}