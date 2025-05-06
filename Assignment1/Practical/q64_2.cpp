#include<iostream>
using namespace std;

class book{
    string name ;
    int year;
    string authorsName;
    public:
    book(string s1, string s2, int y){
        name = s1;
        authorsName = s2;
        year = y;
    }
    void display(){
        cout<<"name of the book is : "<<name<<endl;
        cout<<"Author's name of the book is : "<<authorsName<<endl;
        cout<<"year of establishment of the book is : "<<year<<endl;
    }
};
int main(){
    book spcs("mnemonics","aditya narayan",2006);
    spcs.display();
    return 0;
}