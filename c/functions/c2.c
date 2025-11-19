#include<stdio.h>
void england(){
    printf("you are also loosers \n");
    return;
}
void australiya(){
    printf("you ar loosers \n");
    england();
}
void india(){
    printf("we are the winners \n");
    australiya();
}
int main(){
    india();
    return 0;
}

