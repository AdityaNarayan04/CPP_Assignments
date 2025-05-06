#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cout << "enter 2 number : " << endl;
    cin >> a >> b;
    cout << "the sum is : " << sum(a, b);
    return 0;
}