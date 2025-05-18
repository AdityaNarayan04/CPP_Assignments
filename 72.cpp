#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double numerator, double denominator) {
    if (denominator == 0) {
        throw runtime_error("Division by zero error");
    }
    return numerator / denominator;
}

int main() {
    double a, b;
    cout << "Enter numerator: ";
    cin >> a;
    cout << "Enter denominator: ";
    cin >> b;

    try {
        double result = divide(a, b);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
