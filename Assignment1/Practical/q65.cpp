#include<iostream>
using namespace std;

class point{
    int x,y;
    public:
    point(){
        cout<<"the default constructor is called....."<<endl;
        x = 0;
        y = 0;
    }
    point(int a, int b){
        cout<<"the parameterized constructor is called....."<<endl;
        x = a;
        y = b;
    }
    point(const point &p){
        cout<<"the copy constructor is called....."<<endl;
        x = p.x;
        y = p.y;
    }
    void display(){
        cout<<"point("<<x<<", "<<y<<")"<<endl;
    }
};
int main(){
    point p1;
    p1.display();
    point p2(20,30);
    p2.display();
    point p3 = p2;
    p3.display();
    return 0;
}