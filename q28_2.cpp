#include<iostream>
using namespace std;

int sum(int a, int b);

int main(){
    int a,b;
    cout<<"enter two number a and b : "<<endl;
    cin>>a>>b;
    cout<<"the sum is : "<<sum(a,b);
    return 0;
}

int sum(int a, int b){
    return a+b;
}