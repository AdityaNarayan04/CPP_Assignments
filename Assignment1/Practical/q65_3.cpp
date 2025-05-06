#include<iostream>
using namespace std;

class point{
    int x, y;
    public:
    point():x(0),y(0){};
    point(int a, int b){
        x = a;
        y = b;
    }
    point(point &p){
        x = p.x;
        y = p.y;
    }
    void display(){
        cout<<"the value of x : "<<x<<endl;
        cout<<"the value of y : "<<y<<endl;
    }
};

int main(){
    point o1;
    o1.display();
    point o2(1,2);
    o2.display();
    point o3 = o2;
    o3.display();
    return 0;
}