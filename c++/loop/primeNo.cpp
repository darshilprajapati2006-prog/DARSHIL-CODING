#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no : ";
    cin>>n;
    int a=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            a=0;
            break;
    }
}
    if(a==0) cout<<"no is not prime";
    if(a==1) cout<<"no is prime";
    
}