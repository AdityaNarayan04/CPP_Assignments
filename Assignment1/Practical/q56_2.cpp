#include<iostream>
using namespace std;

class car{
    int year;
    string modelname;
    public:
    void setyear(int date){
        year = date;
    }
    void diplayyear(){
        cout<<"the year of manufacturer : "<<year<<endl;
    }
    void setmodelname(string m){
        modelname = m;
    }
    void displaymodelname(){
        cout<<"the model name of the car is : "<<modelname<<endl;
    }
};

int main(){
    car supra;
    supra.setmodelname("MK 4");
    supra.displaymodelname();
    supra.setyear(2009);
    supra.diplayyear();

    return 0;
}