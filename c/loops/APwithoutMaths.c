#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of terms\n");
    scanf("%d",&n);
    int x=1;
    for(int i=1;i<=n;i++){
        x=x+3;
        printf("%d ",x);
    }
    return 0;
}