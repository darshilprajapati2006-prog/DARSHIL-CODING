#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no : ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"three digit no"<<endl;
    }
    else{
        cout<<"no is not three digit no";
    }
}