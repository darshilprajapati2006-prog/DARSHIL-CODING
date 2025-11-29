#include<stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    printf("enter term : ");
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}
// int main(){
//     int a=0;
//     int b=1;
//     int sum;
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         printf("%d ",b);
//         sum = a+b;
//         a=b;
//         b=sum;
//     }
    
//     return 0;
// }