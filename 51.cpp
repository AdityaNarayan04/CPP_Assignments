#include <iostream>
#include <cmath>

using namespace std;

// Base class Shape
class Shape {
public:
    virtual double area() const = 0; // Pure virtual function
    virtual ~Shape() {} // Virtual destructor
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() const override {
        return M_PI * radius * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    double area() const override {
        return length * width;
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double base;
    double height;
public:
    Triangle(double b, double h) : base(b), height(h) {}
    double area() const override {
        return 0.5 * base * height;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 7.0);

    cout << "Circle area: " << circle.area() << endl;
    cout << "Rectangle area: " << rectangle.area() << endl;
    cout << "Triangle area: " << triangle.area() << endl;

    return 0;
}
