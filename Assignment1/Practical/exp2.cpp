#include <iostream>
using namespace std;
int main()
{
    int a, b, max;
    cout << "enter three numbers a, b: " << endl;
    cin >> a >> b;
    max = a;
    if (max < b)
    {
        max = b;
    }
    cout << "the maximum value is : " << max << endl;
    return 0;
}