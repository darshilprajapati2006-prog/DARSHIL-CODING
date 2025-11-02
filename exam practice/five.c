#include <stdio.h>

int main() {
    int n;
    printf("enter the no of sides of square: ");
    scanf("%d",&n);
    // int m=(n/2)+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            
                printf("  ");
                
            }
        for(int j=1;j<=2*i-1;j++){
            printf("* ");}
        // for(int j=1;j<=(n+1-i);j++){
            
        //         printf("  ");
                
        //     }
        
        printf("\n");
    }

    return 0;
}