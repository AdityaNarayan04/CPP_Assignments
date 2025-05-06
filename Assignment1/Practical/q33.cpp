#include <iostream>
using namespace std;

int main()
{
    int num;
    int count = 0;
    cout << "enter a number : ";
    cin >> num;
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }
    cout << "the number of digits in the number is : " << count;
    return 0;
}