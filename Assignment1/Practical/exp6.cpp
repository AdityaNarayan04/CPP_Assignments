#include <iostream>
using namespace std;

class DB;

class DM
{
private:
    int meters;
    int centimeters;

public:
    DM() : meters(0), centimeters(0) {}

    void read()
    {
        cout << "Enter distance in meters and centimeters (m cm): ";
        cin >> meters >> centimeters;
    }

    void display() const
    {
        cout << "Distance in DM: " << meters << " meters and " << centimeters << " centimeters" << endl;
    }

    friend DM operator+(const DM &d1, const DB &d2);
};

class DB
{
private:
    int feet;
    int inches;

public:
    DB() : feet(0), inches(0) {}

    void read()
    {
        cout << "Enter distance in feet and inches (ft in): ";
        cin >> feet >> inches;
    }

    void display() const
    {
        cout << "Distance in DB: " << feet << " feet and " << inches << " inches" << endl;
    }

    friend DM operator+(const DM &d1, const DB &d2);
};

DM operator+(const DM &d1, const DB &d2)
{

    int total_inches = d2.feet * 12 + d2.inches;
    int total_centimeters = total_inches * 2.54;

    DM result;
    result.meters = d1.meters + total_centimeters / 100;
    result.centimeters = d1.centimeters + total_centimeters % 100;

    if (result.centimeters >= 100)
    {
        result.meters += result.centimeters / 100;
        result.centimeters = result.centimeters % 100;
    }

    return result;
}

int main()
{
    DM distanceM;
    DB distanceB;

    distanceM.read();
    distanceB.read();

    DM result = distanceM + distanceB;

    result.display();

    return 0;
}