#include <stdio.h>
void number(int n);
int main()
{
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    number(n);
    return 0;
}

void number(int n){
    if(n%2==0) printf("number is even");
    else printf("number is odd");
}