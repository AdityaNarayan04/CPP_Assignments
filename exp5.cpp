#include <iostream>
using namespace std;

class bankaccount
{
    string name;
    int accountno;
    string accountType;
    float balance;

public:
    void setdata(int a, float b, string s1, string s2)
    {
        accountno = a;
        balance = b;
        name = s1;
        accountType = s2;
    }
    void display()
    {
        cout << "your name is : " << name << endl;
        cout << "your account no. is : " << accountno << endl;
        cout << "your account type is : " << accountType << endl;
        cout << "your balance is : " << balance << endl;
    }
    void deposit(int deposit)
    {
        cout << "amount to be deposited : " << deposit << endl;
        ;
        balance += deposit;
    }
    void withdraw(int withdraw)
    {
        cout << "amount to be withdrawed : " << withdraw << endl;
        if (withdraw > balance)
        {
            cout << "insufficient balance" << endl;
        }
        else
        {
            balance = balance - withdraw;
        }
    }
};

int main()
{
    bankaccount aditya;
    aditya.setdata(1001, 100, "aditya", "savings");
    aditya.display();
    cout << endl;
    aditya.deposit(100);
    cout << "balance after deposit : " << endl;
    aditya.display();
    cout << endl;
    aditya.withdraw(100);
    cout << "balance after withdraw : " << endl;
    aditya.display();
    return 0;
}