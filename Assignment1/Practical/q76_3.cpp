#include<iostream>
using namespace std;

class distance{
    int meter;
    public :
    void setdata(int n){
        meter = n;
    }
    friend void calcDistance(const distance &d1);
};
 void calcDistance(const distance &d1){
    cout<<"the distance is : "<< (d1.meter)<<endl;
}

int main(){
    
    return 0;
}