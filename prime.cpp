#include <iostream>
using namespace std;

int main()
{
    int num, prime = 0;
    cout << "enter a number : ";
    cin >> num;
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            prime = 1;
        }
    }
    if (prime == 0)
    {
        cout << "the number is prime " << endl;
    }
    else
    {
        cout << "the number is not prime " << endl;
    }

    return 0;
}