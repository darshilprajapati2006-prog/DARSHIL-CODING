#include <stdio.h>

int main()
{
    char ch[60];
    printf("enter name : ");
    fgets(ch,60,stdin);
    puts(ch);
    return 0;
}