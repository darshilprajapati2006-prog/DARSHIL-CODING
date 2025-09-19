#include<stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int x=100;
    for(int i=1;i<=n;i++){
        printf("%d ",x);
        x=x-5;
    }
    return 0;
}                 