// 4.PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CELSIUS DEGREES.

#include<stdio.h>
int main(){
    float fahrenheit;
    printf("Enter temperature in fahrenheit=\n");
    scanf("%f",&fahrenheit);
    float celsius;
    celsius= (fahrenheit - 32)*5/9;
    printf("Temperature in celsius=%f",celsius);
    return 0;
}