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
        
    if(arr[i]==arr[j]){
        i++;
        j--;
        printf("array is palindrome\n");
    }
    }
   
    return 0;
}
