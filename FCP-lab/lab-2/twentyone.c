// 21.⁠ ⁠PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC
// TASK (USING ARITHMETIC OPERATOR) USING SWITCH-CASE
// (CASE IN CHAR FORM).
#include <stdio.h>
int main(){
 int a, b;
 char choice;
 printf("Enter two numbers: ");
 scanf("%d %d", &a, &b);
 printf("Enter your choice (+, -, *, /): ");
 scanf(" %c", &choice);
 switch(choice) {
 case '+': printf("Addition = %d", a + b); break;
 case '-': printf("Subtraction = %d", a - b); break;
 case '*': printf("Multiplication = %d", a * b); break;
 case '/': 
 if(b != 0)
 printf("Division = %d", a / b);
 else
 printf("Division by zero not possible");
 break;
 default: printf("Invalid choice");
 }
 return 0;
}
