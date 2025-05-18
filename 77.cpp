#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int intArr[] = {1, 3, 5, 7, 9};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int intKey = 5;

    double doubleArr[] = {2.5, 3.6, 4.7, 5.8};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    double doubleKey = 4.7;

    cout << "Searching for " << intKey << " in intArr: ";
    int intResult = linearSearch(intArr, intSize, intKey);
    if (intResult != -1) {
        cout << "Found at index " << intResult << endl;
    } else {
        cout << "Not found" << endl;
    }

    cout << "Searching for " << doubleKey << " in doubleArr: ";
    int doubleResult = linearSearch(doubleArr, doubleSize, doubleKey);
    if (doubleResult != -1) {
        cout << "Found at index " << doubleResult << endl;
    } else {
        cout << "Not found" << endl;
    }

    return 0;
}
