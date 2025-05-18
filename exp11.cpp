#include <iostream>
using namespace std;
#include <string>

class Account {
protected:
     string customerName;
    int accountNumber;
    float balance;

public:
    Account(const  string& name, int accNum, float initialBalance)
        : customerName(name), accountNumber(accNum), balance(initialBalance) {}

    virtual void deposit(float amount) {
        balance += amount;
    }

    virtual void displayBalance() const {
         cout << "Account Balance: " << balance <<  endl;
    }

    virtual void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
        } else {
             cout << "Insufficient balance for withdrawal." <<  endl;
        }
    }

    virtual void imposePenalty() {}
};

class SavingsAccount : public Account {
private:
    float interestRate;

public:
    SavingsAccount(const  string& name, int accNum, float initialBalance, float rate)
        : Account(name, accNum, initialBalance), interestRate(rate) {}

    void computeAndDepositInterest() {
        float interest = balance * (interestRate / 100);
        deposit(interest);
         cout << "Interest of " << interest << " has been added to your account." <<  endl;
    }
};

class CurrentAccount : public Account {
private:
    float minimumBalance;
    float serviceCharge;

public:
    CurrentAccount(const  string& name, int accNum, float initialBalance, float minBalance, float charge)
        : Account(name, accNum, initialBalance), minimumBalance(minBalance), serviceCharge(charge) {}

    void withdraw(float amount) override {
        if (amount <= balance) {
            balance -= amount;
            imposePenalty();
        } else {
             cout << "Insufficient balance for withdrawal." <<  endl;
        }
    }

    void imposePenalty() override {
        if (balance < minimumBalance) {
            balance -= serviceCharge;
             cout << "Service charge of " << serviceCharge << " has been imposed." <<  endl;
        }
    }
};

int main() {
    SavingsAccount savings("John Doe", 1001, 500.0f, 5.0f);
    CurrentAccount current("Jane Smith", 1002, 300.0f, 200.0f, 10.0f);

    savings.displayBalance();
    savings.computeAndDepositInterest();
    savings.displayBalance();
    savings.withdraw(100);
    savings.displayBalance();

    current.displayBalance();
    current.withdraw(50);
    current.displayBalance();
    current.withdraw(100);
    current.displayBalance();
    current.withdraw(200);
    current.displayBalance();

    return 0;
}
