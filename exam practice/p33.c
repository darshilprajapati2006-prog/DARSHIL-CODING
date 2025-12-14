#include <stdio.h>
void prime(int n);
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    prime(n);
    return 0;
}
void prime(int n){
    int a=0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0) a=1;
    }
    if(a==0)
        printf("numer is prime");
    else
        printf("numer is not prime"); 
}