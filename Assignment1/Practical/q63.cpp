#include<iostream>
using namespace std;

class student{
    int rollno;
    int age;
    public :
    static int noOfStudent;
    student(){
        noOfStudent++;
    }
    void setdata(int a, int b){
        rollno = a;
        age = b;
    }
    void getdata(){
        cout<<"your roll no. is : "<<rollno<<endl;
        cout<<"your age : "<<age<<endl;
    }
    static int show(){
        return noOfStudent;
    }
};

int student::noOfStudent = 0;
int main(){
    student aditya, aditiya, nikhil, garvit;
    aditya.setdata(17258,19);
    aditya.getdata(); 
    aditiya.setdata(17257,18);
    aditiya.getdata(); 
    nikhil.setdata(17260,20);
    nikhil.getdata();

    cout<<"The Number of Student is : "<< student::show()<<endl;
    return 0;
}