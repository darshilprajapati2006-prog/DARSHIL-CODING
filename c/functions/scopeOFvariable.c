#include<stdio.h>
int a=7;
void change(){
    a=5;
}
int main(){
    int a=70;
    printf("%d\n",a);
    change();
    printf("%d",a);
    return 0;
}