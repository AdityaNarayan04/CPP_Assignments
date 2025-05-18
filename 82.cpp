#include <iostream>
using namespace std;

template <typename T>
class Queue {
private:
    static const int maxSize = 100;
    T arr[maxSize];
    int front;
    int rear;
    int count;

public:
    Queue() : front(0), rear(-1), count(0) {}

    void enqueue(const T& element) {
        if (count == maxSize) {
            cout << "Queue overflow" << endl;
            return;
        }
        rear = (rear + 1) % maxSize;
        arr[rear] = element;
        ++count;
    }

    void dequeue() {
        if (count == 0) {
            cout << "Queue underflow" << endl;
            return;
        }
        front = (front + 1) % maxSize;
        --count;
    }

    void display() const {
        if (count == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = 0; i < count; ++i) {
            cout << arr[(front + i) % maxSize] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue<int> intQueue;
    intQueue.enqueue(10);
    intQueue.enqueue(20);
    intQueue.enqueue(30);
    intQueue.display();

    intQueue.dequeue();
    intQueue.display();

    Queue<string> stringQueue;
    stringQueue.enqueue("Hello");
    stringQueue.enqueue("World");
    stringQueue.display();

    stringQueue.dequeue();
    stringQueue.display();

    return 0;
}
