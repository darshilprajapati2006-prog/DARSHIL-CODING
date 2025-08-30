#include<stdio.h>
int main(){
    int i = 2*3/4 + 4/4 + 8-2 + 5/8 ;
    printf("%d",i);
    int a=7,b=3,c,d;
    float x,y;
    c=a/b*b; // Integer division
    d=b/a*a; // Remainder
    x=a/b*b; // Float division
    y=b/a*a; // Float division
    printf("\n%d %d %f %f",c,d,x,y);
return 0;
}