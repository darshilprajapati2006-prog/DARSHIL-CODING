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
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        
        printf("%d ",arr[i]);
    }
    return 0;
}
