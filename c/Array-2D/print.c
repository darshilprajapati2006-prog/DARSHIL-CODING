#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value of x and y : ");
    scanf("%d %d",&x,&y);
    int arr[x][y];
    printf("enter the elements of matrix:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("your matrix is:\n");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}