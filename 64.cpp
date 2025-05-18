#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() const {
        cout << "Drawing a shape." << endl;
    }

    virtual ~Shape() {}
};

class Circle : public Shape {
public:
    void draw() const override {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape {
public:
    void draw() const override {
        cout << "Drawing a square." << endl;
    }
};

int main() {
    Shape* shapes[3];
    shapes[0] = new Shape();
    shapes[1] = new Circle();
    shapes[2] = new Square();

    for (int i = 0; i < 3; ++i) {
        shapes[i]->draw();
    }

    for (int i = 0; i < 3; ++i) {
        delete shapes[i];
    }

    return 0;
}
