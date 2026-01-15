#include<iostream>
using namespace std;
int main(){
    int n, reverse = 0, remainder, original;
    cout<<"enter a no : ";
    cin>>n;
    original = n;
    while(n>0){
        remainder = n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    cout<<"reverse of the no"<<" "<<reverse<<endl;
    if(original==reverse) cout<<"no is palindrome";
    else cout<<"no is not a palindrome";
}
