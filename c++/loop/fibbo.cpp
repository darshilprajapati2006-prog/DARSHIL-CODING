#include<iostream>
using namespace std;
int main(){
    int n,sum=0,a=1,b=1;
    cout<<"enter a no : ";
    cin>>n;
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
    }
    cout<<b<<" ";
}

