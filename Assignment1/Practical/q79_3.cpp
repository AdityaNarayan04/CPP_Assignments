#include<iostream>
using namespace std;

class vehicle{
    public:
    void details(){
        cout<<"this is a vehicle"<<endl;
    }
};

class car : public vehicle{
    public:
    void details(){
        cout<<"this is a car"<<endl;
    }
};

class bike : public vehicle{
    public:
    void details(){
        cout<<"this is a bike"<<endl;
    }
};

int main(){
    vehicle v;
    v.details();
    car c;
    c.details();
    bike b;
    b.details();
    return 0;
}