// 3.PROGRAM TO CALCULATE GROSS SALARY.

#include<stdio.h>
int main(){
    float basic;
    printf("Enter basic salary=\n");
    scanf("%f",&basic);
    float hra;
    printf("Enter HRA percentage=\n");    
    scanf("%f",&hra);
    float da;   
    printf("Enter DA percentage=\n");    
    scanf("%f",&da);
    float gross;
    gross= basic + (basic*hra)/100 + (basic*da)/100;
    printf("Gross Salary=%f",gross);
    return 0;
}    
