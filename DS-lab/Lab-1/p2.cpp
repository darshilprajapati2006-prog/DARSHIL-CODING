#include<iostream>
using namespace std;
int main(){

    //primitive Data types
    int a=7;
    int b=5;
    float c=3.14;
    char d='d';
    double e=2.56789;

    //non-primitive Data types
    int arr[]={1,2,3};
    int *ptr = &a;
    string str="darshil";
    cout<<endl;

    cout << "---- Primitive Data Types ----\n\n";

    cout<<"int a = "<<a<<endl;
    cout<<"address of a = "<<&a<<endl;
    cout<<"size of a = "<<sizeof(a)<<" bytes\n\n";

    cout<<"int b = "<<b<<endl;
    cout<<"address of b = "<<&b<<endl;
    cout<<"size of b = "<<sizeof(b)<<" bytes\n\n";

    cout<<"int c = "<<c<<endl;
    cout<<"address of c = "<<&c<<endl;
    cout<<"size of c = "<<sizeof(c)<<" bytes\n\n";

    cout<<"int d = "<<d<<endl;
    cout<<"address of d = "<<&d<<endl;
    cout<<"size of d = "<<sizeof(d)<<" bytes\n\n";

    cout<<"int e = "<<e<<endl;
    cout<<"address of e = "<<&e<<endl;
    cout<<"size of e = "<<sizeof(e)<<" bytes\n\n";

    cout << "---- Non-Primitive Data Types ----\n\n";

    cout << "Array elements:\n";
    for (int i = 0; i < 3; i++) {
        cout << "arr[" << i << "] = " << arr[i]
             << " | Address = " << &arr[i]
             << " | Size = " << sizeof(arr[i]) << " bytes\n";
    }

    cout << "\nstring str stores address: " << str << endl;
    cout << "Address of str = " << &str << endl;
    cout << "Size of str = " << sizeof(str) << " bytes\n";

    cout << "\nPointer ptr stores address: " << ptr << endl;
    cout << "Address of ptr = " << &ptr << endl;
    cout << "Size of ptr = " << sizeof(ptr) << " bytes\n";
}