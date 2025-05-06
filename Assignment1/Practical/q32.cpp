#include <iostream>
using namespace std;

int main()
{
    int first = 0;      // first term
    int second = 1;     // second term
    int next;           // next term
    int numberofterms;  // number of terms to print in the following program.
    cout << "enter a the number of terms : ";
    cin >> numberofterms;
    cout << "the fiboancci series is :" << endl;
    for (int i = 0; i < numberofterms; i++)
    {
        cout << first << endl;
        next = first + second;
        first = second;
        second = next;
    }
    return 0;
}