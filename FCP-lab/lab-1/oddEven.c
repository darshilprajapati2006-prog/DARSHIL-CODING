// 13.PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD.

#include<stdio.h>
int main(){
    int num;
    printf("Enter any number=\n");
    scanf("%d",&num);
    if (num%2==0)
        {printf("%d is even number",num);}
    else
        {printf("%d is odd number",num);}
    return 0;
} 