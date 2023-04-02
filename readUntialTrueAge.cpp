#include <iostream>
#include <string>
using namespace std;

int ReadAge(int age)
{

    cout << "your age most be between 18 - 45:" << endl;
    cout << "Enter your age: ";
    cin >> age;

    return age;
};

bool CheckValidNumberInRage(int age, int from, int to)
{
    return (age >= from && age <= to);
}

int CheckUntailValidAge(int from, int to)
{
    int age = 0;

    do
    {

        age = ReadAge(age);

    } while (!CheckValidNumberInRage(age, from, to));

    return age;
}

void PrintResult(int age)
{

    cout << "the " << age << " between 18 - 45";
};

int main()
{
    PrintResult(CheckUntailValidAge(18, 45));

    return 0;
}