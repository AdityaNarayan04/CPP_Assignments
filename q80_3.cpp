#include<iostream>
using namespace std;

class person{
    protected:
    string name;
};

class employee : public person{
    protected:
    string id;
    public:
    employee(string s1, string s2){
        id = s1;
        name = s2;
    }
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"ID : "<<id<<endl;
    }
};

int main(){
    employee adarsh("2410017258","Aditya Narayan");
    adarsh.display();
    return 0;
}