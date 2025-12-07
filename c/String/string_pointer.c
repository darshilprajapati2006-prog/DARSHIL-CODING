#include<stdio.h>
#include<string.h>
int main(){
    // char str[] = "hello world";
    // char *ptr = &str[0];
    // char *ptr1 = &str[1];
    // char *ptr2 = &str[2];
    // printf("%p\n",&str[0]);
    // printf("%p\n",&str[1]);
    // printf("%p\n",&str[2]);
    // printf("%p\n",str);

    // int i=0;
    // while(*ptr!='\0'){
    //     printf("%c\n",*ptr);
    //     ptr++;
    //     i++;
    // }

    char str[] = "college Wallah";
    char *ptr = str;
    ptr = "physics wallah";
    printf("%s",str);
    return 0;
}
