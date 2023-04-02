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

void PrintNumber(int num1, int num2)
{
    cout << "the first number is: " << to_string(num1) << "the second number is: " << to_string(num2) << endl;
}

void swapNumber(int &num1, int &num2)
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

int main()
{

    int num1, num2;

    ReadNumber(num1, num2);
    PrintNumber(num1, num2);
    swapNumber(num1, num2);
    PrintNumber(num1, num2);

    return 0;
};