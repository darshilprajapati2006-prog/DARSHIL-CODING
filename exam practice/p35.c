#include <stdio.h>

int max(int arr[], int n);

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m =max(arr,n);
    printf("max = %d", m);
    return 0;
}

int max(int arr[], int n)
{
    int m = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > m)
            m = arr[i];
    }
    return m;
}