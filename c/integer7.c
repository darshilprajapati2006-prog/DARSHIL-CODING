#include<stdio.h>
int main(){
    float a;
    printf("enter a first number:");
    scanf("%f",&a);
    int b=(int)a;
    float c=(float)b;
    if(a==c){
        printf("the number is integer");
    }
    else{
        printf("the number is not integer");
    }
    
    return 0;
}