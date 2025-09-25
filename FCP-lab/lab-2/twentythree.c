// 23.⁠ ⁠PROGRAM TO READ TWO NOS. AND CALCULATE POWER
// WITHOUT USING HEADER FILE ().
#include <stdio.h>
int main(){
 int base, exp, i, result = 1;
 printf("Enter base: ");
 scanf("%d", &base);
 printf("Enter exponent: ");
 scanf("%d", &exp);
 for(i = 1; i <= exp; i++) {
 result *= base;
 }
 printf("%d ^ %d = %d", base, exp, result);
 return 0;
}