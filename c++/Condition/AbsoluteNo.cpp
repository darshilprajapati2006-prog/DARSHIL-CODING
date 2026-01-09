#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no : ";
    cin>>n;
    if(n>0){
        cout<<"the absolute value of no is : "<<n;
    }
    else if(n==0){
        cout<<"the absolute value of no is : "<<0;
    }
    else{
        cout<<"the absolute value of no is : "<<(-n);
    }
}