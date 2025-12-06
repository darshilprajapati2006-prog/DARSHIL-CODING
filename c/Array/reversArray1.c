#include<stdio.h>
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        printf("%d ",arr[i]);
    }
    printf("\n");
    int brr[n];
    for(int j=0;j<n;j++){
        brr[j]=arr[n-1-j];
        printf("%d ",brr[j]);
    }
    return 0;
}