#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three integers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && c+a>b){
        printf("The sides form a triangle");
    }
    else{
        printf("The sides do not form a triangle");
    }
    return 0;
}
    