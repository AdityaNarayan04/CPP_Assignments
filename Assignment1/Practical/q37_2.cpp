#include<iostream>
using namespace std;

inline int cube(int n){
    return n*n*n;
}

int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;
    cout<<"the cube of the given number is : "<<cube(n);
    return 0;
}