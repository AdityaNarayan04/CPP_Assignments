#include<iostream>
using namespace std;

class student{
    string id;
    string name;
    static int count;
    public:
    student(string s1, string s2){
        id = s1;
        name = s2;
        count++;
    }
    static int display(){
        return count;
    }
};

int student::count = 0; 
int main(){
    student aditya("aditya narayan", "2410017258");
    student arvind("arvind ahuja", "2410017257");
    student karun("karun nair", "2410017256");
    cout<<"No. of students enrolled : "<<student::display();
    return 0;
}