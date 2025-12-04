#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact*=i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr = factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main(){
    int n;
    printf("enter a value of n : ");
    scanf("%d",&n);
    // int r;
    // printf("enter a value of r : ");
    // scanf("%d",&r);
    for(int i=0;i<=n;i++){
        for(int s=0;s<=n-i;s++){
            printf(" ");
        }
        for(int k=0;k<=i;k++){
            int icj = combination(i,k);
            printf("%d ",icj);
        }
   printf("\n"); 
}
    return 0;
}