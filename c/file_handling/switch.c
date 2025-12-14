#include <stdio.h>

int main()
{
    int a,b;
    printf("enter a and b : ");
    scanf("%d %d",&a,&b);
    char ch;
    printf("enter opretor : ");
    scanf(" %c",&ch);
    switch (ch){
        case '+' : printf("ans is : %d",a+b);
        break;
        case '-' : printf("ans is : %d",a-b);
        break;
        case '*' : printf("ans is : %d",a*b);
        break;
        case '/' : printf("ans is : %d",a/b);
        break;
        default  : printf("invalid operator");
        break;
    }
    
    return 0;
}