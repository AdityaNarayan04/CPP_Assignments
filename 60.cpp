#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    Box(double l, double w, double h) : length(l), width(w), height(h) {}

    // Member function that returns the current object using this pointer
    Box* getPointer() {
        return this;
    }

    void display() {
        cout << "Box dimensions: " << length << " x " << width << " x " << height << endl;
    }
};

int main() {
    Box box1(3.5, 2.0, 4.0);

    // Get pointer to current object using member function
    Box* ptr = box1.getPointer();

    // Use pointer to call display
    ptr->display();

    return 0;
}
