#include <iostream>
#include <deque>
using namespace std;

class DequePalindrome{
    deque<char> dq;
public:
    void insertString(string str){
        dq.clear();
        for(char ch:str) dq.push_back(ch);
    }
    bool isPalindrome(){
        while(dq.size()>1){
            char front=dq.front(),rear=dq.back();
            if(front!=rear) return false;
            dq.pop_front(); dq.pop_back();
        }
        return true;
    }
};

int main(){
    DequePalindrome obj;
    string str;
    int choice;
    do{
        cout<<"\n1. Check Palindrome\n2. Exit\nEnter choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter string: ";
                cin>>str;
                obj.insertString(str);
                if(obj.isPalindrome()) cout<<"Result: Palindrome\n";
                else cout<<"Result: Not Palindrome\n";
                break;
            case 2:
                cout<<"Exiting...\n";
                break;
            default:
                cout<<"Invalid choice\n";
        }
    }while(choice!=2);
    return 0;
}