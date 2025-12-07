#include<stdio.h>
#include<string.h>
int main(){
    char str[20] = "darshil";
    printf("%s\n",str);
    int len = strlen(str);
    printf("%d\n",len);
    for(int i = len; i >= 2; i--) {
        str[i+1] = str[i];
    }
    str[2] = 'k';
    printf("%s\n",str);
    return 0;
}