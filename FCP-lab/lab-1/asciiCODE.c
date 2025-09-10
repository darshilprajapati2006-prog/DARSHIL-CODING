// 12.PROGRAM TO PRINT ASCII CODE OF ANY CHARACTER.

#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character=\n");
    scanf("%c",&ch);
    int ascii;
    ascii= ch;
    printf("ASCII code of %c is=%d",ch,ascii);
    return 0;
}   
