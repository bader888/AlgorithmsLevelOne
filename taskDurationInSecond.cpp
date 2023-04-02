#include <iostream>
#include <string>

using namespace std;

struct strTaskDuration
{
    int days, hours, minuts, second;
};
void PrintResult(float result)

{
    cout << result;
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
strTaskDuration ReadTaskDuration()
{
    strTaskDuration taskdDurationData;

    taskdDurationData.days = readPostieNumber("enter days: ");
    taskdDurationData.hours = readPostieNumber("enter hours: ");
    taskdDurationData.minuts = readPostieNumber("enter minuts: ");
    taskdDurationData.second = readPostieNumber("enter second: ");

    return taskdDurationData;
};

void CalaTaskDuration(strTaskDuration TaskDurationData)
{

    float seconds = (TaskDurationData.hours * 3600) + (TaskDurationData.days * 86400) + (TaskDurationData.minuts * 60) + TaskDurationData.second;

    PrintResult(seconds);
}

int main()
{

    CalaTaskDuration(ReadTaskDuration());
    return 0;
}
