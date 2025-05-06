#include <iostream>
using namespace std;

class shape
{
protected:
    double a, b;

public:
    void setdata(double a, double b)
    {
        this->a = a;
        this->b = b;
    }
    virtual void area() = 0;
};

class rectangle : public shape
{
public:
    void area() override
    {
        double area = a * b;
        cout << "the area of the rectangle : " << area << endl;
    }
};
class triangle : public shape
{
public:
    void area() override
    {
        double area = 0.5 * a * b;
        cout << "the area of the triangle : " << area << endl;
    }
};

int main()
{
    shape *ptr;
    triangle t;
    ptr = &t;
    ptr->setdata(2.5, 7.5);
    ptr->area();

    rectangle r;
    ptr = &r;
    ptr->setdata(10, 3.14);
    ptr->area();
    return 0;
}