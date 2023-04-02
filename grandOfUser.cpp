#include <iostream>
#include <string>
using namespace std;

// read the number from user and return the number
int ReadNumber()
{
    int number;

    cout << "enter your grand , most from 0 to 100: ";

    cin >> number;

    return number;
};

// check the user input most be between 0 to 100;
bool CheckValidNumberInRage(int grand, int from, int to)
{
    return (grand >= from && grand <= to);
}

// check the user mark and return the mark
char checkUserGrand(int mark)
{
    if (CheckValidNumberInRage(mark, 90, 100))
    {
        return 'A';
    }

    else if (CheckValidNumberInRage(mark, 80, 89))
    {
        return 'b';
    }
    else if (CheckValidNumberInRage(mark, 70, 79))
    {
        return 'c';
    }
    else if (CheckValidNumberInRage(mark, 50, 59))
    {
        return 'd';
    }
    else
    {
        return 'f';
    }
};

// validate the user number and return it ;
int CheckUntailValiNumber(int from, int to)
{
    int number = 0;

    do
    {

        number = ReadNumber();

    } while (!CheckValidNumberInRage(number, from, to));

    return number;
}

// print the mark on the screen
void printResult(char result)
{
    cout << "your mark: " << result;
};

int main()
{

    printResult(checkUserGrand(CheckUntailValiNumber(0, 100)));

    return 0;
}