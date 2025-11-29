#include<stdio.h>
void preINpost(int n){
    if(n==0) return;
    printf("pre %d\n",n);
    preINpost(n-1);
    printf("in %d\n",n);
    preINpost(n-1);
    printf("post %d\n",n);
    return;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    preINpost(n);
    return 0;
}