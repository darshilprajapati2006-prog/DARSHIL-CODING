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

void change(car& c){ //pass by refrence
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
}