#include<stdio.h>
int maze(int cr,int cc,int er,int ec){
    int rightways=0;
    int downways=0;
    // int x = maze(cr,cc+1,er,ec);
    // int y = maze(cr+1,cc,er,ec);
    if(cr==ec && cc==ec) return 1;
    if(cr==er){
        rightways+=maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
        downways+=maze(cr+1,cc,er,ec);
    }
    if(cr<er && cc<ec){
        rightways+=maze(cr,cc+1,er,ec);;
        downways+=maze(cr+1,cc,er,ec);
    }
    int totalways = rightways+downways;
    return totalways;
}
int main(){
    int m;
    printf("enter rows : ");
    scanf("%d",&m);
    int n;
    printf("enter columns : ");
    scanf("%d",&n);
    int ways = maze(1,1,m,n);
    printf("%d",ways);
    return 0;
}