#include<iostream>
using namespace std;
int main(){
    int a,b,power=1;
    cout<<"enter a vavlue of a : ";
    cin>>a;
    cout<<"enter a vavlue of b : ";
    cin>>b;
    for(int i=1;i<=b;i++){
        power*=a;
    }
    cout<<power;
   
}
