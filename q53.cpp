#include<iostream>
using namespace std;

typedef class employee{
    public :
    virtual void intro(){
        cout<<"i am an employee"<<endl;
    }
}emp;

class manager : public emp{
    public:
    void intro()override{
        cout<<"i am an employee"<<endl;
        cout<<"i am an manager"<<endl;
    }
};
class worker : public emp{
    public:
    void intro()override{
        cout<<"i am an employee"<<endl;
        cout<<"i am an worker"<<endl;
    } 
};

int main(){
    emp aditya;
    aditya.intro();
    cout<<endl;
    manager adarsh ;
    adarsh.intro();
    cout<<endl;
    worker dany ;
    dany.intro();

    return 0;
}