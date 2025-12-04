#include<stdio.h>
int factorial(int n,int r){
    int nfact = 1;
    for(int i=2;i<=n;i++){
        nfact*=i;
    }
    int rfact=1;
    for(int i=2;i<=r;i++){
        rfact*=i;
    }
    int nrfact=1; 
    for(int i=2;i<=n-r;i++){
        nrfact*=i;
    }
    int ncr = nfact/(rfact*nrfact);
    return ncr;
}
int main(){
    int n;
    printf("enter a value of n : ");
    scanf("%d",&n);
    int r;
    printf("enter a value of r : ");
    scanf("%d",&r);
    int ncr = factorial(n,r);
    printf("thr value of ncr is : %d",ncr);
    return 0;
}