#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rollno;
    float cgpa;

    Student(string s,int r,float c){
        name = s;
        rollno = r;
        cgpa = c;
    }

    void print(Student s){
        cout<<s.name<<" "<<s.rollno<<" "<<s.cgpa<<endl;
    }
};

int main(){
    Student s1("darshil",7,8.23);
    s1.print(s1);
}