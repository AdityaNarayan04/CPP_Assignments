#include <iostream>
using namespace std;

void isprime(int n)
{
    int isprime = 0;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isprime = 1;
        }
    }
    if (isprime == 0)
    {
        cout << n << endl;
    }
}
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        isprime(i);
    }
    return 0;
}