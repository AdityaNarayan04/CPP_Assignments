#include<iostream>
using namespace std;

int max(int a, int b){
    int max = a;
    if(max<b){
        max = b;
    }
    return max;
}

int max(int a, int b, int c){
    int max = a;
    if(max<b){
        max = b;
    }
    if(max<c){
        max = b;
    }
    return max;
}

int main(){
    int a,b,c;
    cout<<"enter your number : ";
    cin>>a;
    cout<<"enter your number : ";
    cin>>b;
    cout<<"enter your number : ";
    cin>>c;
    cout<<"the max of a and b : "<<max(a,b)<<endl;
    cout<<"the max of a, b and c : "<<max(a,b,c)<<endl;
    return 0;
}