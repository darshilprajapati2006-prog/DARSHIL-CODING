#include<iostream>
using namespace std;

class Distance{
    private :
    int meters;
    int centimeters;

    public:
    void getDistance(){
        cout<<"enter meters : ";
        cin>>meters;
        cout<<"enter centimeters : ";
        cin>>centimeters;
    }

    void displayDistance(){
        cout<<"distance : "<<meters<<" "<<"meters"<<" "<<centimeters<<" "<<"centimeters"<<endl;
    }

    Distance addDistances(const Distance &d1, const Distance &d2){
        Distance result;
            result.meters = d1.meters+d2.meters;
            result.centimeters = d1.centimeters+d2.centimeters;

            if(result.centimeters>=100){
                result.meters += result.centimeters/100;
                result.centimeters =result.centimeters%100;
            }
            return result;
    }
};

int main(){
    Distance distance1,distance2,result;
    cout<<"enter the first distance : "<<endl;
    distance1.getDistance();
    cout<<"enter the second distance : "<<endl;
    distance2.getDistance();

    result = result.addDistances(distance1,distance2);

    cout<<"sum of the Distances : "<<endl;
        result.displayDistance();

}