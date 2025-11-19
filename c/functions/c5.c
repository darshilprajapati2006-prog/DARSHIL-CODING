#include<stdio.h>
int main(){
    int n,r,ncr;
    printf("enter n and r : ");
    scanf("%d %d",&n,&r);
    int nfact=1;
    int rfact=1;
    int nrfact=1;
    for(int i=2;i<=n;i++){
        nfact*=i;
    }
    for(int i=2;i<=r;i++){
        rfact*=i;
    }
    for(int i=2;i<=n-r;i++){
        nrfact*=i;
    }
    ncr = nfact/(rfact*nrfact);
    printf("%d",ncr);
    return 0;
}