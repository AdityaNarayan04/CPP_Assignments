#include<iostream>
using namespace std;
inline int square(int x){
    return (x*x);
}
int main(){
    int x;
    cout<<"enter a number : ";
    cin>>x;
    cout<<"the sqaure of the number is : "<<square(x)<<endl;
    return 0;
}
// #include<iostream>
// using namespace std;
// #define square(x) (x*x)
// int main(){
//     int x;
//     cout<<"enter a number : ";
//     cin>>x;
//     cout<<"the sqaure of the number is : "<<square(x)<<endl;
//     return 0;
// }