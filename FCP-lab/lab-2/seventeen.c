// 17.⁠ ⁠PROGRAM TO READ THREE NOS. AND PRINT MAX USING
// LOGICAL OPERATOR (&&).
#include <stdio.h>
int main() {
 int a, b, c;
 printf("Enter three numbers: ");
 scanf("%d %d %d", &a, &b, &c);
 if((a > b) && (a > c))
 printf("Max = %d", a);
 else if((b > a) && (b > c))
 printf("Max = %d", b);
 else
 printf("Max = %d", c);
 return 0;
}
