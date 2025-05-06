#include<iostream>
using namespace std;

class animal{
    public:
    virtual void speak(){
        cout<<"hello world "<<endl;
    }
};

class dog : public animal{
    public:
    void speak()override{
        cout<<"barks "<<endl;
    }
};

class cat : public animal{
    public :
    void speak()override{
        cout<<"meow meow "<<endl;
    }
};

class bird : public animal {
    public:
    void speak()override {
        cout<<"chirping "<<endl;
    }
};

int main(){
    animal aditya;
    aditya.speak();
    dog d1;
    d1.speak();
    cat c1;
    c1.speak();
    bird b1;   
    b1.speak(); 
    return 0;
}