#include <iostream>
#include <string>
using namespace std;

// my solution
enum enWeeksDays
{
    days = 1,
    weeks = 2
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

float HourToDays(float hour)
{
    return (hour / 24);
};

float HourToWeeks(float hour)
{
    return (hour / 168);
}

void showCase()
{
    cout << "from hour to days == 1 " << endl;
    cout << "from hour to weeks == 2 " << endl;
}

void PrintResult(float result)

{
    cout << result;
};

void ConvertHour(enWeeksDays ConvertType, float hour)
{
    float convert;

    switch (ConvertType)
    {
    case enWeeksDays::days:
        convert = HourToDays(hour);
        break;

    case enWeeksDays::weeks:
        convert = HourToWeeks(hour);
        break;

    default:
        cout << "pla pla";
    }

    PrintResult(convert);
}

int main()
{
    float numberOfHour = readPostieNumber("enter the number of Hore:");

    showCase();

    float ConvertType = readPostieNumber("chose one convert type: ");

    ConvertHour((enWeeksDays)ConvertType, numberOfHour);

    return 0;
}
