#include<stdio.h>

int min(int x,int y){
    if(x<y) return x;
    else return y;
}

int max(int x,int y){
    // if(x>y) return x;
    // else return y;
    return (x>y) ? x : y;
}   

int main(){
    int a;
    printf("enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number : ");
    scanf("%d",&b);
    int x=min(a,b);
    printf("minimum of %d and %d is %d\n",a,b,x);
    int y=max(a,b);
    printf("maximum of %d and %d is %d\n",a,b,y);
    return 0;
}