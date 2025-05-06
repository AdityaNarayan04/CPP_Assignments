#include<iostream>
using namespace std;

class bankaccount{
    int accountno;
    float balance;
    public:
    void setdata(int a, float b){
        accountno = a;
        balance = b;
    }
    void display(){
        cout<<"your account no. is : "<<accountno<<endl;
        cout<<"your balance is : "<<balance<<endl;
    }
    void deposit(int deposit){
        cout<<" amount to be deposited : "<<deposit<<endl;;
        balance += deposit;
    }
    void withdraw(int withdraw){
        cout<<"amount to be withdrawed : "<<withdraw<<endl;
        balance -= withdraw;
    }
};

int main(){
    bankaccount aditya;
    aditya.setdata(1001,100);
    aditya.display();
    aditya.deposit(100);    
    cout<<"balance after deposit"<<endl;
    aditya.display();  
    aditya.withdraw(100);
    cout<<"balance after withdraw"<<endl;
    aditya.display();    
    return 0;
}