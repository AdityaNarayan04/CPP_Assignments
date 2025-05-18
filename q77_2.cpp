#include<iostream>
using namespace std;

class shape{
    public:
    void details(){
        cout<<"this is a shape"<<endl;
    }
};

class circle : public shape {
    public :
    void details(){
        cout<<"this is a cicrle"<<endl;
    }
};

class rectangle : public shape {
    public :
    void details(){
        cout<<"this is a rectangle"<<endl;
    }
};

class triangle : public shape {
    public :
    void details(){
        cout<<"this is a triangle"<<endl;
    }
};

int main(){
    shape s;
    s.details();
    circle c;
    c.details();
    rectangle r;
    r.details();
    triangle t;
    t.details();
    return 0;
}