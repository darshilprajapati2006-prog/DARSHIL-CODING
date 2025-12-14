#include <stdio.h>

int main()
{
    int n,p,r,pcr;
    int pfact=1,rfact=1,prfact=1;
    for(int i=1;i<=p;i++){
        pfact*=i;
    }
    for(int i=1;i<=r;i++){
        rfact*=i;
    }
    for(int i=1;i<=p-r;i++){
        prfact*=i;
    }
    pcr= pfact/(rfact*prfact);
    printf("enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)>n){
            printf("* ");
            } 
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}