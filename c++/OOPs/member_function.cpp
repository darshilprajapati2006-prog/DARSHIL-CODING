#include<iostream>
#include<cmath>

using namespace std;

class geometryCalculator{
    public:
    static double calculateRectangleArea(double length, double width) {
        return length * width;
    }
};

int main(){
    double length = 7.7;
    double width = 8.5;
    
    geometryCalculator G1;
    cout<<"rectangle area : "<<G1.calculateRectangleArea(length,width)<<endl;
    
    return 0;
}