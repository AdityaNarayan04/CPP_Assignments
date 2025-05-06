#include<iostream>
using namespace std;

class math{
    public:
    static int sum(int a, int b){
        return a+b;
    }
    static int dif(int a, int b){
        return a-b;
    }
    static int product(int a, int b){
        return a*b;
    }
    static int div(int a, int b){
        if(b == 0){
            cout<<"error ! division by zero"<<endl;
            return 0;
        }
        return a/b;
    }
};
int main(){
    int x, y;
    cout<<"enter a value y : ";
    cin>>x;
    cout<<"enter a value y : ";
    cin>>y;
    cout<<"sum is : "<<math::sum(x,y)<<endl;
    cout<<"Difference is : "<<math::dif(x,y)<<endl;
    cout<<"product is : "<<math::product(x,y)<<endl;
    cout<<"division is : "<<math::div(x,y)<<endl;
    return 0;
}