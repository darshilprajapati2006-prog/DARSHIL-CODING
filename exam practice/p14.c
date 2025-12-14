#include <stdio.h>

int main()
{
    int a=1,b=0,next=0;
    for(int i=1;i<=11;i++){
        next = a+b;
        a = b;
        b = next;
        printf("%d ",next);
    }
    return 0;
}