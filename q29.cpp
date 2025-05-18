#include <iostream>
using namespace std;

int main()
{
    int num;
    int factorial = 1;
    cout << "enter a number : ";
    cin >> num;
    // if(num == 0){
    //     factorial = 1;       // this is not necessary.
    // }
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    cout << "the factorial of the number " << num << " : " << factorial << endl;
    return 0;
}