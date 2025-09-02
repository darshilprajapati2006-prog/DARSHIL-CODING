#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three ages: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a<=b && a<=c){
        printf("%d is the youngest age",a);
    }
    else if(b<=a && b<=c){
        printf("%d is the youngest age",b);
    }
    else{
        printf("%d is the youngest age",c);
    }
    return 0;
}