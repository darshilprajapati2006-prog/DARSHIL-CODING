#include<iostream>
using namespace std;
int main(){
    int rows,columns;
    cout<<"enter no of rows : "<<endl;
    cin>>rows;
    cout<<"\nenter no of columns : "<<endl;
    cin>>columns;

    int arr[rows][columns];
    cout<<"\nenter elements of array as a row major : "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cin>>arr[i][j];
        }
    }

    cout<<endl;
    cout<<"the matrix is : \n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}