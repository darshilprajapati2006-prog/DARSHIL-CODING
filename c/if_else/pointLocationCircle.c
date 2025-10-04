#include<stdio.h>
int main(){
    int a,b;
    printf("Enter coordinates of center of circle (a,b): ");
    scanf("%d %d",&a,&b);
    int x,y;
    printf("Enter coordinates of a point (x,y): ");
    scanf("%d %d",&x,&y);
    int r;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    if((x-a)*(x-a)+(y-b)*(y-b)<r*r){
        printf("The point is inside the circle");
    }
    else if((x-a)*(x-a)+(y-b)*(y-b)==r*r){
        printf("The point is on the circle");
    }
    else{
        printf("The point is outside the circle");
    }
    return 0;
}