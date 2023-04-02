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

int calcTotalNumber(int n1, int n2, int n3)
{
    return n1 + n2 + n3;
}

void PrintResult(int result)
{
    cout << "the total of 3 number :" << result;
}

int main()
{

    int num1, num2, num3;

    ReadNumber(num1, num2, num3);

    PrintResult(calcTotalNumber(num1, num2, num3));

    return 0;
};