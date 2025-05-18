#include<iostream>
using namespace std;

void display(int number){
    cout<<"integer is : "<<number<<endl;
}

void display(float number){
    cout<<"float is : "<<number<<endl;
}

void display(string s){
    cout<<"string is : "<<s<<endl;
}

int main(){
    int a = 10;
    float b = 3.14f;
    string name = "aditya narayan";
    display(a);
    display(b);
    display(name);
    return 0;
}