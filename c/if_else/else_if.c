#include<stdio.h>
int main(){
    int n;
    printf("Enter a percentage: ");
    scanf("%d",&n);
    if(n>90){
        printf("Grade A\n");
    }
    else if(n>80){
        printf("Grade B\n");
    }
    else if(n>70){
        printf("Grade C\n");
    }
    else if(n>60){
        printf("Grade D\n");
    }
    else if(n>40){
        printf("Grade E\n");
    }
    else {
        printf("Grade F");
    }
    return 0;
}