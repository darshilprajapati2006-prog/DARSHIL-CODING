#include<stdio.h>
int main(){
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    int hf=1;
    for(int i=n/2; i>=1; i--){
        if(n%i==0){
            hf=i;
            break;
        }
       }
    printf("The highest factor of %d is %d",n,hf);
    return 0;
}