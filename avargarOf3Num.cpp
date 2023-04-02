#include <iostream>
#include <string>
using namespace std;

void ReadMark(int &num1, int &num2, int &num3)
{

    cout << "enter mark 1: ";
    cin >> num1;

    cout << "enter mark 2: ";
    cin >> num2;

    cout << "enter mark 3: ";
    cin >> num3;
};

int calcAvargr(int n1, int n2, int n3)
{
    return n1 + n2 + n3 / 3;
};

void PrintResult(int avrage)
{
    cout << "the avarge of your Marks is  :" << avrage;
};

int main()
{

    int num1, num2, num3;

    ReadMark(num1, num2, num3);

    PrintResult(calcAvargr(num1, num2, num3));

    return 0;
};