#include <iostream>
#include <string>
using namespace std;

void ReadNumber(int &num1, int &num2, int &num3)
{

    cout << "enter the 1 number: ";
    cin >> num1;

    cout << "enter the 2 number: ";
    cin >> num2;

    cout << "enter the 3 number: ";
    cin >> num3;
};

int checkMaxNumber(int num1, int num2, int num3)
{
    if (num1 > num2 && num1 > num3)
        return num1;

    else if (num2 > num3 && num2 > num1)
        return num2;

    else
        return num3;
}

void PrintResult(int max)
{
    cout << "the biggest number is: " << max;
}

int main()
{
    int num1, num2, num3;

    ReadNumber(num1, num2, num3);

    PrintResult(checkMaxNumber(num1, num2, num3));

    return 0;
};