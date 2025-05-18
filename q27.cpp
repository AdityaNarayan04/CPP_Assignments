#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 50)
    {
        sum = sum + i;
        i++;
    }
    cout << "the sum of the first 50 natural number " << sum;
    return 0;
}