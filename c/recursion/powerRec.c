#include<stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    int x= a*power(a,b-1);
    return x;
}
int main(){
    int a,b;
    printf("enter base and power : ");
    scanf("%d %d",&a,&b);
    int x=power(a,b);
    printf("%d",x);
    return 0;
}