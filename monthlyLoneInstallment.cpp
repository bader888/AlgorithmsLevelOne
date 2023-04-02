#include <iostream>
#include <string>
using namespace std;

float readPostieNumber(string messages)
{
    float number = 0;

    do
    {
        cout << messages << endl;
        cin >> number;

    } while (number <= 0);

    return number;
};

void totalPayMonths(float lonaAmount, float months)
{
    cout << lonaAmount / months << " payMent per month ";
};

int main()
{

    // PrintResult(CalcLoneInstallmentMonths(ReadLoneData()));

    float loneAmount = readPostieNumber("enter the lone amount: ");
    float months = readPostieNumber("enter the months: ");

    totalPayMonths(loneAmount, months);

    return 0;
};