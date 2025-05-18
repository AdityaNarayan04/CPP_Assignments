#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "enter two numbers a and b : " << endl;
    cin >> a >> b;
    cout << "the value of a is : " << a<<endl;
    cout << "the value of b is : " << b<<endl;

    b = b + a;      // b = b+a
    a = b - a;      // a = b+a-a = b
    b = b - a;      // b = b-a = b+a-a+(b-a) = b+a-a-b+a = a

    cout << "the value of a is : " << a<<endl;
    cout << "the value of b is : " << b<<endl;

    return 0;
}