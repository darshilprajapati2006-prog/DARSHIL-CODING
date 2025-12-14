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
    int original, rem, reverse = 0;
    original = n;
    while(n > 0){
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    if(original == reverse)
        printf("number is palindrome");
    else
        printf("number is not palindrome");
}