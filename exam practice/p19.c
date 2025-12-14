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
    printf("enter the elements of matrix b :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("matrix a :\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("matrix b :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    int c[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            c[i][j] = 0;
            for(int k=0;k<3;k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("multiplication of two matrix : \n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }



    return 0;
}