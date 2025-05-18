#include <iostream>
#include <exception>
using namespace std;

class InvalidAgeException : public exception {
public:
    const char* what() const noexcept override {
        return "Invalid age entered. Age must be between 0 and 150.";
    }
};

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try {
        if (age < 0 || age > 150) {
            throw InvalidAgeException();
        }
        cout << "Your age is " << age << endl;
    } catch (const InvalidAgeException& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}
