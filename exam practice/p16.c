#include <stdio.h>

int main()
{
    float sum=0.0;
    for(int i=1;i<=10;i++){
        sum = sum + (1.0/i);
    }
    printf("%f",sum);
    return 0;
}