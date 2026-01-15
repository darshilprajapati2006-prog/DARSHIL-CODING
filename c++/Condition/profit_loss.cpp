#include<iostream>
using namespace std;
int main(){
    int c,s;
    cout<<"enter cost prize : "<<endl;
    cin>>c;
    cout<<"enter selling prize : "<<endl;
    cin>>s;
    if(c>s){
        cout<<"we get loss and loss is :" <<c-s;
    }
    else if (c<s){
        cout<<"we get profit and profit is :"<<s-c;
    }
    else{
        cout<<"we don't get profit and loss"<<endl;
    }
}