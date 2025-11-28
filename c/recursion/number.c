#include<stdio.h>
int num(int n){
    // if(n=0) return;
    for(int i=n;i>=1;i--){
      printf("%d\n",i);  
    }
    return n;
}
int main(){
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    int x=num(n);
    printf("%d",x);
    return 0;
}