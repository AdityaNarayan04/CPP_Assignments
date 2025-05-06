#include<iostream>
#define pi 3.14
using namespace std;

int main(){
    int r;
    cout<<"enter the radius of the circle : ";
    cin>>r;
    cout<<"the area of the circle is : "<< pi*r*r <<endl;
    return 0;
}

#include<iostream>
using namespace std;

inline float area(int r){
    return 3.14*r*r;
}
int main(){
    int r;
    cout<<"enter the radius of the circle : ";
    cin>>r;
    cout<<"the area of the circle is "<<area(r)<<endl;
    return 0;
}