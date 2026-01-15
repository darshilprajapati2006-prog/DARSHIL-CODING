#include<iostream>
using namespace std;
int main(){
    int n,sum=0,remainder;
    cout<<"enter a no : ";
    cin>>n;
    while(n>0){
        remainder = n%10;
        sum+=remainder;
        n=n/10;
    }
    cout<<"sum digit"<<" "<<sum;
}
