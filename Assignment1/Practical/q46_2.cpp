#include<iostream>
using namespace std;

int power(int base, int exponent = 2){
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {       
        result = result*base;
    }
    return result;
}

int main(){
    cout<<"5 to the power 2 is : "<<power(5)<<endl;       // becoz default exponent is 2.
    cout<<"5 to the power 3 is : "<<power(5,3);
    return 0;
}