#include<stdio.h>
int main(){

    int arr[5];
    printf("enter values : ");
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }

    int n;
    n=sizeof(arr)/4;
    printf("size of array : %d\n",n);
    
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);

    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
return 0;
}