#include <iostream>
#include <string>
using namespace std;

class Payment {
public:
    virtual void processPayment() const = 0;

    virtual ~Payment() {}
};

class CreditCardPayment : public Payment {
private:
    string cardNumber;

public:
    CreditCardPayment(const string& cardNum) : cardNumber(cardNum) {}

    void processPayment() const override {
        cout << "Processing credit card payment with card number: " << cardNumber << endl;
    }
};

class DebitCardPayment : public Payment {
private:
    string cardNumber;

public:
    DebitCardPayment(const string& cardNum) : cardNumber(cardNum) {}

    void processPayment() const override {
        cout << "Processing debit card payment with card number: " << cardNumber << endl;
    }
};

int main() {
    Payment* payments[2];
    payments[0] = new CreditCardPayment("1234-5678-9876-5432");
    payments[1] = new DebitCardPayment("9876-5432-1234-5678");

    for (int i = 0; i < 2; ++i) {
        payments[i]->processPayment();
    }

    for (int i = 0; i < 2; ++i) {
        delete payments[i];
    }

    return 0;
}
