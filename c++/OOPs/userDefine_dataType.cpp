#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollno;
    float cgpa;
};
int main(){
    Student s1;
    s1.name = "darshil";
    s1.rollno = 7;
    s1.cgpa = 7.93;

    Student s2;
    s2.name = "dilip";
    s2.rollno = 8;
    s2.cgpa = 8.5;

    cout<<s1.name<<" "<<s1.rollno<<" "<<s1.cgpa<<endl;
    cout<<s2.name<<" "<<s2.rollno<<" "<<s2.cgpa<<endl;
}