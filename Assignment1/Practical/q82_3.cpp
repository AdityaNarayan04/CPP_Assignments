#include<iostream>
using namespace std;

class base{
    protected:
    int a;
    public:
    void setdata(int n){
        a =n;
    }
    void display(){
        cout<<"the value of a : "<<a<<endl;
    }
};

class derived1 : public base{
    int b;
};

class derived2 : public base{
    int c;
};

int main(){
    derived1 d1;
    d1.setdata(10);
    d1.display();
    derived2 d2;
    d2.setdata(20);
    d2.display();
    return 0;
}