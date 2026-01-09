#include<iostream>
using namespace std;
int main(){
    int arr[3][3]{1,2,3,4,5,6,7,8,9};

    cout<<"element of 3*3 matrix and address :\n\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<"arr["<<i<<"]["<<j<<"] = "<<arr[i][j]<<"\t address = "<<&arr[i][j]<<endl;
        }
        cout<<endl;
    }
    cout<<"proof of row major order :\n";
    cout<<"address of arr[0][0] : "<<&arr[0][0]<<endl;
    cout<<"address of arr[0][1] : "<<&arr[0][1]<<endl;
}