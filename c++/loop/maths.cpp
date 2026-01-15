#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of terms : ";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a=a+2;
    }
    for(int i=65;i<=90;i++){
        cout<<(char)i<<" "<<i<<endl;
    }
}