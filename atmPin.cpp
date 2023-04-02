#include <iostream>
#include <string>
using namespace std;

// enum enUser
// {
//     balance = 17500,
//     pinCode = 1234
// };

// float ReadPostieNumber(string messages)
// {
//     float number = 0;

//     do
//     {
//         cout << messages << endl;
//         cin >> number;

//     } while (number <= 0);

//     return number;
// };

// void CheckPinCode(enUser pinCode)
// {
//     switch (pinCode)
//     {
//     case enUser::pinCode:
//         cout << "your balance is: " << enUser::balance;
//         break;

//     default:
//         cout << "wronge pin Code ;\(";
//         break;
//     };
// };
///////////////////////////ANOTHER SOLUTION///////////////////////////////
string ReadPinCode()
{
    string pinCode;

    cout << "enter your pin Code: ";
    cin >> pinCode;

    return pinCode;
}

bool LogIn()
{
    string PinCode;

    do
    {
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;
        }
        else
        {
            cout << "wrong pin code";
            system("color 4F");
        }
    } while (PinCode != "1234");

    return 0;
}
int main()
{
    // float userPinCode = ReadPostieNumber("enter your pin code: ");
    // CheckPinCode((enUser)userPinCode);
    if (LogIn())
    {
        system("color 2F");
        cout << "your balance is " << 17500;
    };

    return 0;
};