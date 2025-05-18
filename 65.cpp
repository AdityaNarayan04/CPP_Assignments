#include <iostream>
using namespace std;

class Account {
public:
    virtual double calculateInterest() const = 0; // Pure virtual function

    virtual ~Account() {}
};

class SavingsAccount : public Account {
private:
    double balance;
    double interestRate;

public:
    SavingsAccount(double bal, double rate) : balance(bal), interestRate(rate) {}

    double calculateInterest() const override {
        return balance * interestRate;
    }
};

class CurrentAccount : public Account {
private:
    double balance;
    double interestRate;

public:
    CurrentAccount(double bal, double rate) : balance(bal), interestRate(rate) {}

    double calculateInterest() const override {
        // Current accounts might have a different interest calculation
        return balance * interestRate * 0.5; // Example: half the rate
    }
};

int main() {
    Account* accounts[2];
    accounts[0] = new SavingsAccount(1000.0, 0.05);
    accounts[1] = new CurrentAccount(2000.0, 0.03);

    for (int i = 0; i < 2; ++i) {
        cout << "Interest for account " << i + 1 << ": " << accounts[i]->calculateInterest() << endl;
    }

    for (int i = 0; i < 2; ++i) {
        delete accounts[i];
    }

    return 0;
}
