#include<stdio.h>
int main(){
    float radius;
    printf("Enter radius of circle:");
    scanf("%f",&radius);
    float pi=3.14;
    float area=pi*radius*radius;
    printf("Area of circle is:%f",area);
    return 0;  
}
