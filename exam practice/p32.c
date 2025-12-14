#include <stdio.h>
void fibo(int a, int b);
int main()
{
    int a = 1, b = 1;
    fibo(a, b);
    return 0;
}
void fibo(int a, int b){
    int n;
    printf("enter n : ");
    scanf("%d",&n);
    printf("%d %d ", a, b);
    for(int i = 3; i <= n; i++){
        int next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }
}