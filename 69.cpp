#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    virtual double calculateSalary() const = 0;
    virtual void displayDetails() const = 0;

    virtual ~Employee() {}
};

class Manager : public Employee {
private:
    string name;
    double baseSalary;
    double bonus;

public:
    Manager(const string& n, double base, double b) : name(n), baseSalary(base), bonus(b) {}

    double calculateSalary() const override {
        return baseSalary + bonus;
    }

    void displayDetails() const override {
        cout << "Manager: " << name << ", Salary: " << calculateSalary() << endl;
    }
};

class Engineer : public Employee {
private:
    string name;
    double baseSalary;
    double overtimePay;

public:
    Engineer(const string& n, double base, double overtime) : name(n), baseSalary(base), overtimePay(overtime) {}

    double calculateSalary() const override {
        return baseSalary + overtimePay;
    }

    void displayDetails() const override {
        cout << "Engineer: " << name << ", Salary: " << calculateSalary() << endl;
    }
};

int main() {
    Employee* employees[2];
    employees[0] = new Manager("gannu", 80000, 15000);
    employees[1] = new Engineer("mannu", 70000, 10000);

    for (int i = 0; i < 2; ++i) {
        employees[i]->displayDetails();
    }

    for (int i = 0; i < 2; ++i) {
        delete employees[i];
    }

    return 0;
}
