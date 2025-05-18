#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "enter a number : ";
    cin >> num;
    int i = 1;
    do
    {
        cout << num * i << endl;
        i++;
    } while (i <= 10);
    return 0;
}