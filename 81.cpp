#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {64, 34, 25, 12, 22, 11, 90};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);

    cout << "Original int array: ";
    printArray(intArr, intSize);

    bubbleSort(intArr, intSize);

    cout << "Sorted int array: ";
    printArray(intArr, intSize);

    double doubleArr[] = {64.5, 34.2, 25.1, 12.6, 22.9, 11.0, 90.3};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);

    cout << "Original double array: ";
    printArray(doubleArr, doubleSize);

    bubbleSort(doubleArr, doubleSize);

    cout << "Sorted double array: ";
    printArray(doubleArr, doubleSize);

    return 0;
}
