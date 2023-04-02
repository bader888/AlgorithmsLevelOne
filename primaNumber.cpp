#include <iostream>
#include <string>
using namespace std;

// my solution
int ReadNumber(string Message)
{
    int number;
    cout << Message << endl;
    cin >> number;

    return number;
};

void CheckNumberSignle(int number)
{
    if (number < 0)
    {
        cout << "plase enter positive number: " << endl;
    }
}

string CheckPrimaNumber()
{

    string result;
    int number;

    do
    {
        number = ReadNumber("Enter prima number: ");

        CheckNumberSignle(number);

    } while (number < 0);

    if (number % 2 == 0)
    {
        result = "not prima number";
    }
    else
    {

        result = "prima number";
    }
    return result;
}

void PrintResult(string result)
{
    cout << result;
};

//////////////////////////// another sploution /////////////////////////////////
enum enPrimeNotPrime
{
    Prime = 1,
    NotPrime = 0
};

float readPostieNumber(string messages)

{
    float number = 0;

    do
    {
        cout << messages << endl;
        cin >> number;

    } while (number <= 0);

    return number;
}

enPrimeNotPrime CheckPrime(int number)
{
    int M = (number / 2);

    for (int counter = 0; counter <= M; counter++)
    {
        if (number % counter == 0)
        {
            return enPrimeNotPrime::NotPrime;
        }
    }
    return enPrimeNotPrime::Prime;
}

void PrintNumberType(int number)

{

    switch (CheckPrime(number))
    {
    case enPrimeNotPrime::Prime:
        cout << "the number is prime:";
        break;
    case enPrimeNotPrime::NotPrime:
        cout << "the number is Not Prime:";
        break;
    default:
        break;
    }
}
int main()
{

    // PrintResult(CheckPrimaNumber());

    // PrintNumberType(readPostieNumber("enter positive number: "));

    return 0;
}