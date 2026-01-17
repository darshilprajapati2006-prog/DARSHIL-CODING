#include<iostream>
#include<vector>
using namespace std;
void change(vector<int> a){
    //a-> call by value
    //&a-> call by reference
    a[2]=7;

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }


}
int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(9);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    change(v);
    cout<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }


}