#include<stdio.h>
int main(){
    int a=37;
    int *x=&a;
    int **y=&x;
    int ***z=&y;
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",***z);
    printf("%d\n",**y);
    return 0;
}