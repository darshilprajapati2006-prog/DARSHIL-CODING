#include<stdio.h>
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2 !=0){
            for(int j=1;j<=i;j++){
                printf("%d ",j);
            }
        }
        else{
            for(int j=1;j<=i;j++){
                printf("%c ",j+64);
            }
        }
        printf("\n");
    }
    return 0;
}