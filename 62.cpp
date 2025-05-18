#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter(int c) : count(c) {}

    bool isEqual(Counter* other) {
        if (other == nullptr) {
            return false;
        }
        return this->count == other->count;
    }

    void display() {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1(10);
    Counter c2(20);
    Counter c3(10);

    c1.display();
    c2.display();
    c3.display();

    cout << "c1 is " << (c1.isEqual(&c2) ? "equal" : "not equal") << " to c2" << endl;
    cout << "c1 is " << (c1.isEqual(&c3) ? "equal" : "not equal") << " to c3" << endl;

    return 0;
}
