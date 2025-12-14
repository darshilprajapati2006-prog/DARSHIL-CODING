#include <stdio.h>

int main()
{
    int n,sum=0;
    float avg;
   
    printf("enter no of element in array : ");
    scanf("%d",&n);
    printf("enter elements in array : ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
        
    }
    printf("sum = %d\n",sum);
    avg = sum/n;
    printf("avg = %f",avg);
    return 0;
}