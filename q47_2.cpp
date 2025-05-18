#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}

int main(){
    int num;
    cout<<"enter a number : ";
    cin>>num;
    cout<<"the Factorial of the number is : "<<fact(num)<<endl;
    return 0;
}