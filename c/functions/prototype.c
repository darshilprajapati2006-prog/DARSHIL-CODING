#include<stdio.h>
void england(){
    printf("you are in england\n");
    void australiya();
    australiya();
}
void australiya(){
    printf("you are in australiya\n");
    void japan();
    japan();
}
void japan(){
    printf("you are in japan\n");
    void chaina();
    chaina();   
}
void chaina(){
    printf("you are in chaina\n");
    return;
}
int main(){
    printf("you are in india\n");
    void england();
    england();
}