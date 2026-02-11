#include<iostream>
#include<vector>
using namespace std;

int main() {

    int n;
    cout<<"enter size of an array : ";
    cin>>n;
    vector<int> a(n);
    cout<<"enter elements of an array : "<<endl;
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    int start=0,end=n-1;
    while(start<end){
        swap(a[start], a[end]);
        start++;
        end--;
    }
    cout << "\nReversed array: ";
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}