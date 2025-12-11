#include<stdio.h>
typedef int* pointer;
int main(){
    int x,y;
    pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}