#include<stdio.h>
void change(int x[],int n){
   printf("size of array : %d\n",n);
   x[2]=7;
    return;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/4;
    printf("size of array : %d\n",n);
    printf("%d\n",arr[2]);
    change(arr,n);
    printf("%d\n",arr[2]);
}