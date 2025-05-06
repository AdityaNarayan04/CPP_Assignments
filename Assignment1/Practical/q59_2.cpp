#include<iostream>
using namespace std;

class rectangle{
    int length, breadth;
    public :
    void setdata(int a, int b){
        length = a;
        breadth = b;
    }
    int area (){
        int area = length*breadth;
        return area;
    }
    int perimeter (){
        int perimeter = 2*(length+breadth);
        return perimeter;
    }
};
int main(){
    rectangle o1;
    o1.setdata(6,5);
    cout<<"the perimeter = "<<o1.perimeter()<<endl;
    cout<<"the area = "<<o1.area()<<endl;
    return 0;
}