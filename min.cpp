#include <iostream>
using namespace std;

int main()
{
    int num;
    int min;
    cout << "enter the number of element : ";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    for (int i = 1; i < num; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "the min number in the array is : " << min<<endl;
    return 0;
}