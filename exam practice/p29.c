#include <stdio.h>
void swap(int x,int y);
void _swap(int *x,int *y);

int main()
{
    int x=4,y=3;
    printf("before swapping x=%d and y=%d\n",x,y);
    swap(x,y);
    printf("before swapping x=%d and y=%d\n",x,y); 
    _swap(&x,&y);
    return 0;
}
    void swap(int x,int y){
        int temp = x;
        x = y;
        y =temp;
        printf("after swapping x=%d and y=%d\n",x,y);
    }
    void _swap(int *x,int *y){
        int temp = *x;
        *x = *y;
        *y =temp;
        printf("after swapping x=%d and y=%d\n",*x,*y);
    }
