#include <iostream>
using namespace std;

int main()
{
    int num;
    int max;
    cout << "enter the number of element : ";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 1; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "the highest number in the array is : " << max;
    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;                                                            // arr[0] = first element of the array.
//     cout << "enter the number of elements of the array : ";
//     cin >> num;
//     int arr[num];
//     int max = arr[0];
//     for (int i = 0; i < num; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 1; i < arr[num]; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     cout << "the max is : " << max << endl;
//     return 0;
// }