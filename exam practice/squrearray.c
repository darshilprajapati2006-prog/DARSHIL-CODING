#include<stdio.h>
int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    // printf("enter the elements of array : ");
    // scanf("%d",arr[5]);
    
    for(int i=1;i<=n;i++){
        arr[i-1]=i*i;
        printf("%d ",arr[i-1]);
    
    }
   
    return 0;
}