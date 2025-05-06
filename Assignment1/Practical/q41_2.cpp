#include<iostream>
using namespace std;

float area(float r){
    return 3.14*r*r;
}

int area(int a, int b){
    return a*b;
}

int main(){
    cout<<"the area of the rectangle : "<<area(2,4)<<endl;
    cout<<"the area of the triangle : "<<0.5*area(2,4)<<endl;
    cout<<"the area of the circle : "<<area(3.71)<<endl;
    return 0;
}