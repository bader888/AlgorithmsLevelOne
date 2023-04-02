#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
    int number;

    cout << "enter your number: ";

    cin >> number;

    return number;
};

float CalcHalfNumber(int number)
{
    return (float)number / 2;
};

void PrintHalfNumber(int number)
{
    cout << "the half number: " + to_string(number) + " " + "is:" + to_string(CalcHalfNumber(number));
}

int main()
{

    PrintHalfNumber(ReadNumber());

    return 0;
}