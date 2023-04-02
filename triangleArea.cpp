#include <iostream>
#include <string>
using namespace std;

void ReadDimention(int &height, int &base)
{
    cout << "Enter height: ";
    cin >> height;

    cout << "Enter base: ";
    cin >> base;
};

int CalculateTriangleAreaByHeightAndBase(int height, int base)
{

    return (height * base) / 2;
};

void PrintResult(int area)
{
    cout << "the area of triangle equal: " << area;
}

int main()
{

    int height, base;

    ReadDimention(height, base);

    PrintResult(CalculateTriangleAreaByHeightAndBase(height, base));

    return 0;
}