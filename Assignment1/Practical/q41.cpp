#include <iostream>
using namespace std;
int main()
{
    int num, reversenum = 0;
    cout << "enter a number : ";
    cin >> num;
    int i = num;
    while (num != 0)
    {
        int remainder = num % 10;
        reversenum = reversenum * 10 + remainder;
        num = num / 10;
    }

    if (i == reversenum)
    {
        cout << "the number is palindrome" << endl;
    }
    else
    {
        cout << "the number is not palindrome" << endl;
    }

    return 0;
}