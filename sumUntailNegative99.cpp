#include <iostream>
#include <string>
using namespace std;

float ReadNumber(string Message)
{
    float number;
    cout << Message << endl;
    cin >> number;

    return number;
};

int AddNumberToCourrentNumber()
{
    int result, number, counter = 1;

    do
    {
        number = ReadNumber("plase enter number " + to_string(counter));

        if (number == -99)
        {
            break;
        }

        result += number;
        counter++;

    } while (number != -99);

    return result;
}

void PrintResult(int result)
{
    cout << result;
};

int main()
{
    PrintResult(AddNumberToCourrentNumber());

    return 0;
}