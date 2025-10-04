#include<stdio.h>
int main(){
    int a;
    printf("Ente age of person a : ");
    scanf("%d",&a);
    int b;
    printf("Ente age of person b : ");
    scanf("%d",&b);
    int c;
    printf("Ente age of person c : ");
    scanf("%d",&c);
    if(a<b){
        if(a<c){
            printf("%d is the youngest age",a);
        }
        else{
            printf("%d is the youngest age",c);
        }
    }
    else{
        if(b<c){
            printf("%d is the youngest age",b);
        }
        else{
            printf("%d is the youngest age",c);
        }
    }
    return 0;
}
    
    