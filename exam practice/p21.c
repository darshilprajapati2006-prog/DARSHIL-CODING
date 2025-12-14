#include <stdio.h>

int main()
{
    int max,*arr[5],a[5];
    for(int i=0;i<5;i++){
        arr[i] = &a[i];
    }
    printf("enter elements : ");
    for(int i=0;i<5;i++){
        scanf("%d",arr[i]);
    }
    max= *arr[0];
    for(int i=0;i<5;i++){
        if(max< *arr[i])
        max= *arr[i];
    }
    printf("maximum no in array is : %d",max);

    return 0;
}