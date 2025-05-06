#include<iostream>
using namespace std;

inline int square(int n){
    return n*n;
}
int main(){
    int n;
    cout<<"enter a numbers : "<<endl;
    cin>>n;
    cout<<"the square of the number is : "<<square(n)<<endl;
    return 0;
}