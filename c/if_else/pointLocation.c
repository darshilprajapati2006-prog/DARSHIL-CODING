#include<stdio.h>
int main(){
    int x,y;
    printf("Enter coordinates of a point (x,y): ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("The point lies at the origin");
    }
    else if(x==0){
        printf("The point lies on the y-axis");
    }
    else if(y==0){
        printf("The point lies on the x-axis");
    }
    else if(x>0 && y>0){
        printf("The point lies in the first quadrant");
    }
    else if(x<0 && y>0){
        printf("The point lies in the second quadrant");
    }
    else if(x<0 && y<0){
        printf("The point lies in the third quadrant");
    }
    else{
        printf("The point lies in the fourth quadrant");
    }
    return 0;
}