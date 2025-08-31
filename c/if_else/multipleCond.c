#include<stdio.h>
int main(){
    int n;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n>99 && n<1000){
        printf("%d is a three digit number",n);
    }
    else if(n>9 && n<100){
        printf("%d is a two digit number",n);
    }
    else if(n>-10 && n<10){
        printf("%d is a one digit number",n);
    }
    else{
        printf("%d is not a one, two or three digit number",n);
    }
    return 0;
}