/* 14.PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL
CASE LETTER, A DIGIT OR A SPECIAL SYMBOL. */

#include<stdio.h>
int main(){
    char ch;
    printf("Enter any character=\n");
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z')
        {printf("%c is capital letter",ch);}
    else if (ch>='a' && ch<='z')
        {printf("%c is small case letter",ch);}
    else if (ch>='0' && ch<='9')
        {printf("%c is digit",ch);}
    else
        {printf("%c is special symbol",ch);}
    return 0;
}      