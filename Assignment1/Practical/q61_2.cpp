#include<iostream>
using namespace std;

class employee{
    string name;
    string position;
    float salary;
    static int count;
    public:
    employee(){
        count ++;
    }
    employee(string s1, string s2, float f){
        name = s1;
        position = s2;
        salary = f;
        count++;
    }
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"position : "<<position<<endl;
        cout<<"salary : "<<salary<<endl;
        cout<<"count is : "<<count<<endl;
    }
};

int employee::count = 0;
int main(){
    employee aditya("aditya naryan","executive",12080.888);
    aditya.display();
    employee yash;
    yash.display();

    
    return 0;
}