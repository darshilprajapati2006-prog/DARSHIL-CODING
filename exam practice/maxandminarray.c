#include<stdio.h>
int main(){
    int arr[]={12,43,65,123,6,4,765};
    int max=arr[0];
    int n;
    n=sizeof(arr)/4;
    printf("%d\n",n);
    for(int i=0;i<n;i++){
        if(max<arr[i]) max=arr[i];
        
    }
    printf("%d\n",max);

    int smax=0;
    for(int i=0;i<n;i++){
        if(arr[i] !=max && smax<arr[i]) smax=arr[i];
        
    }
    printf("%d\n",smax);

    // int min=arr[0];
    // for(int i=0;i<n;i++){
    //     if(min>arr[i]) min=arr[i];
       
    // }
    //  printf("%d",min);
    
    return 0;
}