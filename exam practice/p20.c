#include <stdio.h>

int main()
{
    int a[2][3],b[3][2];
    printf("enter the elements of matrix a :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            b[j][i] = a[i][j];
        }
    }
    printf("transpose matrix is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
