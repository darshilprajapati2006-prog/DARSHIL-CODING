#include<stdio.h>
int main(){
    int l;
    printf("Enter length: ");
    scanf("%d",&l);
    int b;
    printf("Enter breadth: ");
    scanf("%d",&b);
    if(l==b){
        printf("It is a square");
    }
    if(l!=b){
        printf("It is a rectangle");
    }
    int area = l*b;
    int perimeter = 2*(l+b);
    if(area>perimeter){
        printf("\nArea is greater than perimeter of rectangle");
    }
    else{
        printf("\n area is not greater than perimeter of rectangle");
    }
    return 0;
}

    