#include <iostream>
using namespace std;

int main()
{
    int num1 = 18;
    int num2 = 24;
    int min = num1;
    int gcd = 0;
    if (min > num2)
    {
        min = num2;
    }
    for (int i = 1; i <= min / 2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << "the greatest common divisor is : " << gcd;
    return 0;
}