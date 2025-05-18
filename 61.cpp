#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}

    Person& setName(const string& n) {
        name = n;
        return *this;
    }

    Person& setAge(int a) {
        age = a;
        return *this;
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person p;
    p.setName("Alice").setAge(30).display();

    return 0;
}
