#include<iostream>
using namespace std;

int max(int a, int b, int c);

int main(){
    int a,b,c;
    cout<<"enter three number : "<<endl;
    cin>>a>>b>>c;
    max(a,b,c);
    return 0;
}

int max(int a, int b, int c){
    int max = a;
    if(max<b){
        max = b;
    }if(max<c){
        max = c;
    }
    cout<<"the max number is : "<<max<<endl;
}