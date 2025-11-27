#include<stdio.h>
void greet(){
    printf("heyy! GOOD MORNING\n");
    printf("how are you\n");
    return;
}
int main(){
    // greet();
    for(int i=1;i<=5;i++){
        greet();
    }
    printf("byyee...");
    return 0;
}