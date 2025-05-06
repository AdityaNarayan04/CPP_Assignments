#include <iostream>
using namespace std;

int main()
{
    int num;
    int reversednum = 0;
    int remainder;
    cout << "enter a number : ";
    cin >> num;
    
    while (num != 0)
    {
        remainder = num % 10;
        reversednum = reversednum * 10 + remainder;
        num = num / 10;
    }
    
    cout << reversednum;
    return 0;
}