#include <stdio.h>

int main() {
   int n;
   printf("enter n: ");
   scanf("%d",&n);
    int nst=1;
    int nsp=n-1;
    for (int i=1;i<=n;i++){
        
        for(int k=1;k<=nsp;k++){
            printf("  ");
        }
        nsp--;
        for(int j=1;j<=nst;j++){
            printf("%d ",j);
        }
            nst=nst+1;
          int a=i-1;  
        for(int k=1;k<=i-1;k++){
            printf("%d ",a);
            a--;
        }
        
       
        
        printf("\n");
    }

    return 0;
}