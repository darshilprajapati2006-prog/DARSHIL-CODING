#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/4;
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]) max=arr[i];
    }
    printf("%d\n",max);
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]) min=arr[i];
    }
    printf("%d",min);
    return 0;
}