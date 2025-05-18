#include <iostream>
using namespace std;

class Sample {
public:
    int value;

    Sample(int v) : value(v) {}

    void compare(Sample* other) {
        if (other == nullptr) {
            cout << "Null pointer passed." << endl;
            return;
        }
        if (value > other->value) {
            cout << "Current object value (" << value << ") is greater than other object value (" << other->value << ")." << endl;
        } else if (value < other->value) {
            cout << "Current object value (" << value << ") is less than other object value (" << other->value << ")." << endl;
        } else {
            cout << "Both objects have the same value (" << value << ")." << endl;
        }
    }
};

int main() {
    Sample obj1(10);
    Sample obj2(20);

    // Call member function with pointer to another object
    obj1.compare(&obj2);

    return 0;
}