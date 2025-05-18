#include <iostream>
using namespace std;

template <typename T>
T maxValue(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    cout << "Max of " << x << " and " << y << " is " << maxValue(x, y) << endl;

    double a = 15.5, b = 12.3;
    cout << "Max of " << a << " and " << b << " is " << maxValue(a, b) << endl;

    char c1 = 'A', c2 = 'Z';
    cout << "Max of " << c1 << " and " << c2 << " is " << maxValue(c1, c2) << endl;

    return 0;
}
