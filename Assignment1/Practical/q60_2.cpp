#include<iostream>
using namespace std;

class employee{
    string name;
    string position;
    float salary;
    public:
    void setdata(string s1, string s2, float f){
        name = s1;
        position = s2;
        salary = f;
    }
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"position : "<<position<<endl;
        cout<<"salary : "<<salary<<endl;
    }
};

int main(){
    employee aditya;
    aditya.setdata("Aditya Narayan", "Executive", 12000.80);
    aditya.display();
    return 0;
}