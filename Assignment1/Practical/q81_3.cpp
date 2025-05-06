#include<iostream>
using namespace std;

class parent{
    protected:
    string name;
    public:
    void setName(string s){
        name = s;
    }
    void details(){
        cout<<"father"<<" : "<<name<<endl;
    }
};

class child1 : public parent{
    public:
    void details(){
        cout<<"child1"<<" : "<<name<<endl;
    }
};

class child2 : public parent{
    public:
    void details(){
        cout<<"child2"<<" : "<<name<<endl;
    }
};

int main(){
    parent  ramesh;
    ramesh.setName("ramesh");
    ramesh.details();
    child1 aditya;
    aditya.setName("aditya");
    aditya.details();
    child2 adarsh;
    adarsh.setName("adarsh");
    adarsh.details();
    return 0;
}