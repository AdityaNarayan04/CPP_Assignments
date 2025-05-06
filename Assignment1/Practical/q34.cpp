#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    for (int i = 0; i<=100; i = i+2){
        sum = sum + i;
    }
    cout<<"the sum of all even numbers btw 1 to 100 is : "<<sum;
    return 0; 
}