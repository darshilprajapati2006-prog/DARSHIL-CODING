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
    int x=0;
    for(int i=0;i<n;i++){
        if(i%2 ==0){
            x+=arr[i];
        }
    }
    
    printf("%d\n",x); 

    int y=0;
    for(int i=0;i<n;i++){
        if(i%2 !=0){
            y+=arr[i];
        }
    }
    
    printf("%d\n",y); 
    printf("diffrence = %d",x-y);
    return 0;
}

