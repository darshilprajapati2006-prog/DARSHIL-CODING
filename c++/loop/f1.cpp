#include<iostream>
using namespace std;
void startringle(int x);
    // {
//     for(int i=1;i<=x;i++){
//         for(int j=1;j<=i;j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
int main(){
    startringle(3);
    cout<<endl;
    startringle(7);
    cout<<endl;
    startringle(3);
}

void startringle(int x){
    for(int i=1;i<=x;i++){
        for(int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}