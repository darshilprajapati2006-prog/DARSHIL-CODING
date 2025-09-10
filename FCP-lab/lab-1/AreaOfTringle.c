// 7.PROGRAM TO CALCULATE AREA OF TRIANGLE.

#include<stdio.h>
int main(){
    float base,height,area;
    printf("Enter base of triangle=\n");
    scanf("%f",&base);
    printf("Enter height of triangle=\n");
    scanf("%f",&height);
    area= (0.5)*base*height;
    printf("Area of triangle=%f",area);
    return 0;
}  