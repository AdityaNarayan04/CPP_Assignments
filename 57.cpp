#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Dynamically create a Student object
    Student* ptr = new Student;

    // Access members using pointer
    ptr->name = "John Doe";
    ptr->age = 20;

    // Call member function using pointer
    ptr->display();

    // Free dynamically allocated memory
    delete ptr;

    return 0;
}
