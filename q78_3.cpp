#include<iostream>
using namespace std;

class animal{
    public:
    void voice(){
        cout<<"i am an animal"<<endl;
    }
};

class dog : public animal{
    public:
    void voice(){
        cout<<"i am an dog"<<endl;
    }
};

class cat : public animal{
    public:
    void voice(){
        cout<<"i am an cat"<<endl;
    }
};

class bird : public animal{
    public:
    void voice(){
        cout<<"i am an bird"<<endl;
    }
};

int main(){
    animal a;
    a.voice();
    dog d;
    d.voice();
    cat c;
    c.voice();
    bird b;
    b.voice();
    return 0;
}