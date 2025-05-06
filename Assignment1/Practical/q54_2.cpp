#include<iostream>
using namespace std;

class person {
    string name;
    int age;
    public :
    void setdata(string s, int n){
        name = s;
        age = n;
    }
    void display(){
        cout<<"your name : "<<name<<endl;
        cout<<"your age  : "<<age<<endl;
    }
};
int main(){
    person aditya;
    aditya.setdata("aditya narayan",18);
    aditya.display();
    return 0;
}