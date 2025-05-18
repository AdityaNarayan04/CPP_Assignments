#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void displayFunctionality() const {
        cout << "This is a generic appliance." << endl;
    }

    virtual ~Appliance() {}
};

class WashingMachine : public Appliance {
public:
    void displayFunctionality() const override {
        cout << "Washing clothes." << endl;
    }
};

class Refrigerator : public Appliance {
public:
    void displayFunctionality() const override {
        cout << "Keeping food fresh." << endl;
    }
};

class Microwave : public Appliance {
public:
    void displayFunctionality() const override {
        cout << "Heating food quickly." << endl;
    }
};

int main() {
    Appliance* appliances[3];
    appliances[0] = new WashingMachine();
    appliances[1] = new Refrigerator();
    appliances[2] = new Microwave();

    for (int i = 0; i < 3; ++i) {
        appliances[i]->displayFunctionality();
    }

    for (int i = 0; i < 3; ++i) {
        delete appliances[i];
    }

    return 0;
}
