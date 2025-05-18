#include <iostream>
using namespace std;

class bankaccount
{
    string name;
    string accountno;
    string accountType;
    float balance;

public:
    bankaccount(string s1, string s2, string a, float b)
    {
        name = s1;
        accountType = s2;
        accountno = a;
        balance = b;
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
    bankaccount aditya("Aditya Narayan", "Savings", "2410017258", 1200);
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