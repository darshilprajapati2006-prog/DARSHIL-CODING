#include<stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a,int b){
    int hcf;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            hcf=i;
        }
    }
    return hcf;
}
int main(){
    int a;
    printf("enter a first number : ");
    scanf("%d",&a);
    int b;
    printf("enter a second number : ");
    scanf("%d",&b);
    int hcf = gcd(a,b);
    printf("%d",hcf);
    return 0;
}
