#include <iostream>
using namespace std;

template <typename T>
class Stack {
private:
    static const int maxSize = 100;
    T arr[maxSize];
    int top;

public:
    Stack() : top(-1) {}

    void push(const T& element) {
        if (top >= maxSize - 1) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = element;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return;
        }
        --top;
    }

    void display() const {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int> intStack;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    intStack.display();

    intStack.pop();
    intStack.display();

    Stack<string> stringStack;
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.display();

    stringStack.pop();
    stringStack.display();

    return 0;
}
