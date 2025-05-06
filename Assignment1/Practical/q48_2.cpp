#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int difference(int a, int b){
    return a-b;
}

int product(int a, int b){
    return a*b;
}

int division(int a, int b){
    return a/b;
}

int main(){
    typedef int (*operation)(int, int);
    operation ops[] = {sum,difference,product,division};
    int num1,num2;
    int choice;
    cout<<"enter two numbers : "<<endl;
    cin>>num1>>num2;
    cout<<"operators are: "<<endl<<"0 -> sum"<<endl<<"1 -> difference"<<endl<<"2 -> product"<<endl<<"3 -> divide"<<endl;
    cin>>choice;
    int result = ops[choice](num1,num2);
    cout<<"result is : "<<result<<endl;
    return 0;
}