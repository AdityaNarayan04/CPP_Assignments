#include <iostream>
using namespace std;

class Device {
public:
    virtual void turnOn() const = 0;

    virtual ~Device() {}
};

class Laptop : public Device {
public:
    void turnOn() const override {
        cout << "Laptop is turning on." << endl;
    }
};

class Smartphone : public Device {
public:
    void turnOn() const override {
        cout << "Smartphone is turning on." << endl;
    }
};

int main() {
    Device* devices[2];
    devices[0] = new Laptop();
    devices[1] = new Smartphone();

    for (int i = 0; i < 2; ++i) {
        devices[i]->turnOn();
    }

    for (int i = 0; i < 2; ++i) {
        delete devices[i];
    }

    return 0;
}
