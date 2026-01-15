#include<iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    int x = (int)ch;
    cout << "ASCII value: " << x << endl;
    if(x>=97 && x<=122){
        cout << "Alphabet is small letter" << endl;
    }
    else if(x>=65 && x<=90){
        cout << "Alphabet is capital letter" << endl;
    }
    else{
        cout << "Not an alphabet" << endl;
    }
}