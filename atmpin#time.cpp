#include <iostream>
#include <string>
using namespace std;

string ReadPinCode()
{
    string pinCode;

    cout << "enter your pin Code: ";
    cin >> pinCode;

    return pinCode;
};

bool LogIn()
{
    string PinCode;
    int counter;

    do
    {
        counter += 1;
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;
        }
        else if (counter == 3)
        {
            return 0;
        }
        else
        {
            cout << "wrong pin code";
            system("color 4F");
        }
    } while (PinCode != "1234" && counter != 3);

    return 0;
};

int main()
{
    if (LogIn())
    {
        system("color 2F");
        cout << "your balance is " << 17500;
    }
    else
    {
        system("color 4F");
        cout << "wronge pinCode You cant try again sorry: ";
    }

    return 0;
};