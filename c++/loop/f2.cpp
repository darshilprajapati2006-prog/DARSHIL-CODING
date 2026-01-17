#include<iostream>
using namespace std;
int fact(int x);
int combination(int a,int b);
int main(){
    int n;
    cout<<"enter n : ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<combination(i,j)<<" ";
        }
        cout<<endl;
    }
}
int fact(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact *=i;
    }
    return fact;
}
int combination(int n,int r){
    int ncr = fact(n) / (fact(r) * fact(n - r));
    return ncr;
}