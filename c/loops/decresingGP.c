#include<stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    float x=100;
    for(int i=1;i<=n;i++){
        printf("%f ",x);
        x=x*(0.5);
    }
    return 0;
}
