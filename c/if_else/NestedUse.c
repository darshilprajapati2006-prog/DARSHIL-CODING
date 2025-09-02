#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter first integers: ");
    scanf("%d",&a);
    printf("Enter second integers: ");
    scanf("%d",&b);
    printf("Enter third integers: ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is the greatest integer",a);
        }
        else{
            printf("%d is the greatest integer",c);
        }
    }
    else{
        if(b>c){
            printf("%d is the greatest integer",b);
        }
        else{
            printf("%d is the greatest integer",c);
        }

    }
    return 0;
}