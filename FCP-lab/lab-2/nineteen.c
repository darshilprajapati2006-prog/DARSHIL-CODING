// 19.⁠ ⁠PROGRAM TO READ A CHARACTER AND CHECK WHETHER
// IT IS A SMALL CASE LETTER OR NOT USING CONDITIONAL
// OPERATOR.
#include <stdio.h>
int main(){
 char ch;
 printf("Enter a character: ");
 scanf("%c", &ch);
 (ch >= 'a' && ch <= 'z') ? printf("It is a small case letter") : printf("Not a small case letter");
 return 0;
}
