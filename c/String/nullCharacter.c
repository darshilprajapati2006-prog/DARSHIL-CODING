#include<stdio.h>
int main(){
    char arr[]="i am darshil prajapati\0";
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",n);
    for(int i=0;i<22;i++){
        if(arr[i]!='\0'){
            printf("%c",arr[i]);
        }
    }
    return 0;
}
