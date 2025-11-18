#include<stdio.h>
int main(){
    float x;
    printf("Enter a floating point number: ");
    scanf("%f",&x);
    int y; // Type casting float to int
    y=x;
    printf("\nThe integer value is: %d",y);
    float z=x-y; // Getting the decimal part
    printf("\nThe decimal part is: %f",z);
    return 0;
}