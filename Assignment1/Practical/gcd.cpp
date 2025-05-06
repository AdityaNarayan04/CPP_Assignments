#include <iostream>
using namespace std;

int main()
{
    int a, b, min, gcd;
    cout << "enter a number a: ";
    cin >> a;
    cout << "enter a number b: ";
    cin >> b;
    min = a;
    if (min > b)
    {
        min = b;
    }
    int i = 1;
    while (i <= min / 2)
    {
        if ((a % i == 0) && (b % i == 0))
        {
            gcd = i;
            i++;
        }
    }
    cout << "gcd : " << gcd << endl;
    return 0;
}