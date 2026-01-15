#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no : ";
    cin>>n;
    int count = 0;
    if(n == 0) count = 1;
    else{
        while(n != 0){
            n = n / 10;
            count++;
        }
    }
    cout << count;
}