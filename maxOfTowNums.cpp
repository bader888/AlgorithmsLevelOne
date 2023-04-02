#include <iostream>
#include <string>
using namespace std;

void ReadNumber(int &num1, int &num2)
{

    cout << "enter the 1 number: ";
    cin >> num1;

    cout << "enter the 2 number: ";
    cin >> num2;
};

int checkMaxNumber(int num1, int num2)
{
    if (num1 > num2)
        return num1;

    else
        return num2;
}

void PrintResult(int max)
{
    cout << "the biggest number is: " << max;
}

int main()
{
    int num1, num2;

    ReadNumber(num1, num2);

    PrintResult(checkMaxNumber(num1, num2));

    return 0;
};