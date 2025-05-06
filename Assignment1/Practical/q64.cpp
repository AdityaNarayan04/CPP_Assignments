#include<iostream>
using namespace std;

class book{
    string name;
    int pageno;
    int year;
    public :
    book(string s, int page, int y){                             // default constructor.....
        name  = s;
        pageno = page;
        year = y;
    }
    void display(){
        cout<<"the name is "<<name<<endl;
        cout<<"the page no. is "<<pageno<<endl;
        cout<<"the year is "<<year<<endl;
    }
};
int main(){
    book aditya("aditya",10,2000);
    aditya.display();
    return 0;
}