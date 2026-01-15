#include<iostream>
using namespace std;
int main(){
    int n,sum=0,remainder;
    cout<<"enter a no : ";
    cin>>n;
    int original=n;
    while(n>0){
        remainder = n%10;
        sum+=remainder*remainder*remainder;
        n=n/10;
    }
    if(sum==original) cout<<"no is armstrong";
    else cout<<"no is not armstrong no";
}
