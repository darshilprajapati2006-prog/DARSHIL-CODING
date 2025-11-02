#include <stdio.h>

int main() {
   int n;
   printf("enter n: ");
   scanf("%d",&n);
    int nst=1;
    int nsp=n/2;
    int m=(n/2)+1;
    for (int i=1;i<=n;i++){
        
        for(int k=1;k<=nsp;k++){
            printf("  ");
            }
            
        for(int j=1;j<=nst;j++){
            printf("* ");
        }
        
        if(i<m){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
           
        
       
        
        printf("\n");
    }

    return 0;
}
   