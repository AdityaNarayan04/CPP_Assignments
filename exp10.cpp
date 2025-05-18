#include <iostream>
using namespace std;

class Complex
{
private:
    float real;
    float imaginary;

public:
    Complex() : real(0), imaginary(0) {}

    Complex(float r, float i) : real(r), imaginary(i) {}

    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    Complex operator-(const Complex &other) const
    {
        return Complex(real - other.real, imaginary - other.imaginary);
    }

    Complex operator*(const Complex &other) const
    {
        return Complex(real * other.real - imaginary * other.imaginary,
                       real * other.imaginary + imaginary * other.real);
    }

    Complex operator/(const Complex &other) const
    {
        float denominator = other.real * other.real + other.imaginary * other.imaginary;
        return Complex((real * other.real + imaginary * other.imaginary) / denominator,
                       (imaginary * other.real - real * other.imaginary) / denominator);
    }

    void display() const
    {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }
};

int main()
{
    Complex num1(1, 4);
    Complex num2(1, 2);

    Complex sum = num1 + num2;
    Complex difference = num1 - num2;
    Complex product = num1 * num2;
    Complex quotient = num1 / num2;

    cout << "First Complex Number: ";
    num1.display();
    cout << "Second Complex Number: ";
    num2.display();

    cout << "Sum: ";
    sum.display();
    cout << "Difference: ";
    difference.display();
    cout << "Product: ";
    product.display();
    cout << "Quotient: ";
    quotient.display();

    return 0;
}
