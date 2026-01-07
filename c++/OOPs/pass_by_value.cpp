#include<iostream>
using namespace std;
class car{
public:
    string name;
    int price;
    int model;
    int seat;
    string type;
};
void print(car c){
    cout<<c.name<<" "<<c.model<<" "<<c.price<<" "<<c.seat<<" "<<c.type<<endl;
}

void change(car c){ //pass by value
    c.name = "audi a8";
}
int main(){
    car c1;
    c1.name = "city honda";
    c1.model = 2006; 
    c1.price = 1200000;
    c1.seat = 5;
    c1.type = "xyz";

    print(c1);
    change(c1);
    print(c1);

    // car c2;
    // c2.name = "fortuner";
    // c2.model = 2007;
    // c2.price = 3700000;
    // c2.seat = 8;
    // c2.type = "abc";

    // car c3;
    // c3.name = "maruti suzuki";
    // c3.model = 2008;
    // c3.price = 1300000;
    // c3.seat = 5;
    // c3.type = "pqr";

    // print(c1);
    // print(c2);
    // print(c3);
}