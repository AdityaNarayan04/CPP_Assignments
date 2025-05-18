#include <iostream>
using namespace std;

long factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int a;
    cout << "enter a  number : ";
    cin >> a;
    cout << "the factorial of the given number is : " << factorial(a);
    return 0;
}