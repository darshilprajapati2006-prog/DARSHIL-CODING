// PROGRAM TO CALCULATE SIMPLE INTEREST.
#include<stdio.h>
int main(){
    float principal;
    printf("Enter principal amount=\n");
    scanf("%f",&principal);
    float rate;
    printf("Enter rate of interest=\n");    
    scanf("%f",&rate);
    float time;
    printf("Enter time period=\n");    
    scanf("%f",&time);
    float SI;
    SI=(principal*rate*time)/100;
    printf("Simple Interest=%f",SI);
    return 0;
}