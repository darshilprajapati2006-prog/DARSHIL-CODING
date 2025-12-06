#include<stdio.h>
int main(){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements of array : ");
    for(int i=0;i<n;i++){
        
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if((i)%2!=0){
            int x=arr[i]*2;
            printf("%d ",x);
        }
        else {
            int y=arr[i]+10;
            printf("%d ",y);
        }
    }
    return 0;

}