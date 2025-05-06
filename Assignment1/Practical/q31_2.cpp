#include<iostream>
using namespace std;

int product(int a, int b){
    return a*b;
}
int main(){
    int a,b;
    cout<<"enter 2 number a and b "<<endl;
    cin>>a>>b;
    cout<<"the product is : "<<product(a,b)<<endl;
    return 0;
}