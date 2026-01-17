#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(7);

    // M-1
    cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<v[3]<<" "<<v[4]<<endl;
    // M-2
    cout<<v.at(0)<<" "<<v.at(1)<<" "<<v.at(2)<<" "<<v.at(3)<<" "<<v.at(4);

}