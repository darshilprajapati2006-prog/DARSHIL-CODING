#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5}; 
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    char brr[5]={'a','b','c','d','e'};
    printf("%c\n\n",brr[3]);
    printf("%p\n",&brr[1]);
    printf("%p\n",&brr[0]);
    printf("%p\n",&brr[2]);
    printf("%p\n",&brr[3]);
    printf("%p\n",&brr[4]);
    return 0;
}