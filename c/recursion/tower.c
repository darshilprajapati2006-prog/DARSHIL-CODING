#include<stdio.h>
int moves = 0;
void tower(int n,char s,char h,char d){
    if(n==0) return;
    tower(n-1,s,d,h);
    printf("%c -> %c\n", s, d);
    moves++;
    tower(n-1,h,s,d);
    return;
}
int main(){
    int n;
    printf("enter no of disks : ");
    scanf("%d",&n);
    tower(n,'a','b','c');
    printf("Total moves = %d\n", moves);
    return 0;
}