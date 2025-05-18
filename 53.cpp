#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() {
        cout << "Employee working" << endl;
    }
    virtual ~Employee() {}
};

class Manager : public Employee {
public:
    void work() override {
        cout << "Manager managing" << endl;
    }
};

class Worker : public Employee {
public:
    void work() override {
        cout << "Worker working" << endl;
    }
};

int main() {
    Employee* employees[2];
    employees[0] = new Manager();
    employees[1] = new Worker();

    for (int i = 0; i < 2; i++) {
        employees[i]->work();
    }

    for (int i = 0; i < 2; i++) {
        delete employees[i];
    }

    return 0;
}
