#include<stdio.h>
int main(){
    int n,sum;
    printf("Enter a number : ");
    scanf("%d",&n);
    int rev = 0;
    while(n!=0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    printf("Reversed number : %d",rev);
    printf("\n");
        sum = rev + n;
        printf("%d",sum);
    return 0;
}      