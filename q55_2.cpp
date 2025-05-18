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

class student : public person{
    string studentID;
    public :
    void setstudentID(string p){
        studentID = p;
    }
    void displaystudentID(){
        cout<<"your studentID : "<<studentID<<endl;
    }
};
int main(){
    student aditya;
    aditya.setdata("aditya narayan ",18);
    aditya.setstudentID("24100BTAIMLM17258");
    aditya.display();
    aditya.displaystudentID();
    return 0;
}