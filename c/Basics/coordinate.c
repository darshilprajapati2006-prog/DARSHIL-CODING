#include<stdio.h>
int main(){
    int x,y;
    printf("Enter coordinates of a point (x,y): ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("The point is at the origin");
    }
    else if(x==0){
        printf("The point is on the y-axis");
    }
    else if(y==0){
        printf("The point is on the x-axis");
    }
    else if(x>0 && y>0){
        printf("The point is in the first quadrant");
    }
    else if(x<0 && y>0){
        printf("The point is in the second quadrant");
    }
    else if(x<0 && y<0){
        printf("The point is in the third quadrant");
    }
    else{
        printf("The point is in the fourth quadrant");
    }
    return 0;
}          