#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{

    int num1;

    cout << "enter the number: ";
    cin >> num1;

    return num1;
};
int ReadPower()
{

    int power;

    cout << "enter the power: ";
    cin >> power;

    return power;
};

int powerOF(int number, int power)
{
    // any number powerd to zero equal zero;
    if (power == 0)
    {
        return 1;
    }

    int p = 1;

    for (int i = 1; i <= power; i++)
    {
        p = p * number;
    };

    return p;
}

void printResult(int result)
{
    cout << "result: " << result;
};

int main()
{
    printResult(powerOF(ReadNumber(), ReadPower()));
    return 0;
}