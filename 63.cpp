#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void displayType() const = 0; // Pure virtual function

    virtual ~Vehicle() {} // Virtual destructor
};

class Car : public Vehicle {
public:
    void displayType() const override {
        cout << "This is a Car." << endl;
    }
};

class Bike : public Vehicle {
public:
    void displayType() const override {
        cout << "This is a Bike." << endl;
    }
};

int main() {
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();

    v1->displayType();
    v2->displayType();

    delete v1;
    delete v2;

    return 0;
}
