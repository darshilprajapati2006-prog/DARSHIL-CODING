#include <stdio.h>

int main()
{
    int n,a=0;
    printf("enter number : ");
    scanf("%d",&n);
    for(int i=2;i<=n-i;i++){
        if((n%i)==0)
        a=1;
    }
    if(a==1) printf("not prime");
    if(a==0) printf("prime");
    return 0;
}