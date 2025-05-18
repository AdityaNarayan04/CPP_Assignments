#include <iostream>
#include <vector>
using namespace std;

class BankAccount {
public:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}

    virtual void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << ". New balance: " << balance << endl;
    }

    virtual void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
            cout << "Withdrew " << amount << ". New balance: " << balance << endl;
        }
    }

    virtual void display() const {
        cout << "Account Number: " << accountNumber << ", Balance: " << balance << endl;
    }

    virtual ~BankAccount() {}
};

class SavingsAccount : public BankAccount {
    double interestRate;

public:
    SavingsAccount(int accNum, double bal, double rate)
        : BankAccount(accNum, bal), interestRate(rate) {}

    void addInterest() {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest added: " << interest << ". New balance: " << balance << endl;
    }

    void display() const override {
        cout << "Savings Account - ";
        BankAccount::display();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

class CurrentAccount : public BankAccount {
    double overdraftLimit;

public:
    CurrentAccount(int accNum, double bal, double overdraft)
        : BankAccount(accNum, bal), overdraftLimit(overdraft) {}

    void withdraw(double amount) override {
        if (amount > balance + overdraftLimit) {
            cout << "Overdraft limit exceeded." << endl;
        } else {
            balance -= amount;
            cout << "Withdrew " << amount << ". New balance: " << balance << endl;
        }
    }

    void display() const override {
        cout << "Current Account - ";
        BankAccount::display();
        cout << "Overdraft Limit: " << overdraftLimit << endl;
    }
};

void showMenu() {
    cout << "\nMenu:\n";
    cout << "1. Create Savings Account\n";
    cout << "2. Create Current Account\n";
    cout << "3. Deposit\n";
    cout << "4. Withdraw\n";
    cout << "5. Display Accounts\n";
    cout << "6. Add Interest to Savings Accounts\n";
    cout << "7. Exit\n";
    cout << "Enter your choice: ";
}

int findAccountIndex(const vector<BankAccount*>& accounts, int accNum) {
    for (size_t i = 0; i < accounts.size(); ++i) {
        if (accounts[i]->accountNumber == accNum) {
            return i;
        }
    }
    return -1;
}

int main() {
    vector<BankAccount*> accounts;
    int choice;

    do {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: {
                int accNum;
                double bal, rate;
                cout << "Enter account number: ";
                cin >> accNum;
                cout << "Enter initial balance: ";
                cin >> bal;
                cout << "Enter interest rate (%): ";
                cin >> rate;
                accounts.push_back(new SavingsAccount(accNum, bal, rate));
                cout << "Savings account created.\n";
                break;
            }
            case 2: {
                int accNum;
                double bal, overdraft;
                cout << "Enter account number: ";
                cin >> accNum;
                cout << "Enter initial balance: ";
                cin >> bal;
                cout << "Enter overdraft limit: ";
                cin >> overdraft;
                accounts.push_back(new CurrentAccount(accNum, bal, overdraft));
                cout << "Current account created.\n";
                break;
            }
            case 3: {
                int accNum;
                double amount;
                cout << "Enter account number: ";
                cin >> accNum;
                int idx = findAccountIndex(accounts, accNum);
                if (idx != -1) {
                    cout << "Enter amount to deposit: ";
                    cin >> amount;
                    accounts[idx]->deposit(amount);
                } else {
                    cout << "Account not found.\n";
                }
                break;
            }
            case 4: {
                int accNum;
                double amount;
                cout << "Enter account number: ";
                cin >> accNum;
                int idx = findAccountIndex(accounts, accNum);
                if (idx != -1) {
                    cout << "Enter amount to withdraw: ";
                    cin >> amount;
                    accounts[idx]->withdraw(amount);
                } else {
                    cout << "Account not found.\n";
                }
                break;
            }
            case 5: {
                for (auto acc : accounts) {
                    acc->display();
                    cout << endl;
                }
                break;
            }
            case 6: {
                for (auto acc : accounts) {
                    SavingsAccount* sa = dynamic_cast<SavingsAccount*>(acc);
                    if (sa) {
                        sa->addInterest();
                    }
                }
                break;
            }
            case 7: {
                cout << "Exiting...\n";
                break;
            }
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 7);

    for (auto acc : accounts) {
        delete acc;
    }

    return 0;
}
