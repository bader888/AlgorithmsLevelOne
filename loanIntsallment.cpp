#include <iostream>
#include <string>
using namespace std;

// a =  loanAmount ,b =  monthlyPayment ; a / b = months .
struct strloanIntsallment
{
    int loneAmount, monthlyPayment;
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
};

strloanIntsallment ReadLoneData()
{
    strloanIntsallment loneData;

    loneData.loneAmount = readPostieNumber("enter lone amount: ");

    loneData.monthlyPayment = readPostieNumber("enter monthly pament");

    return loneData;
};

float CalcLoneInstallmentMonths(strloanIntsallment loneData)
{

    return loneData.loneAmount / loneData.monthlyPayment;
};

void PrintResult(float result)
{
    cout << result << " months";
};
// ///////////////////////ANOTHER SOLUTION//////////////////////////
void totalMonths(float lonaAmount, float MonthlypayMent)
{
    cout << lonaAmount / MonthlypayMent << " months";
};

int main()
{

    // PrintResult(CalcLoneInstallmentMonths(ReadLoneData()));

    float loneAmount = readPostieNumber("enter the lone amount: ");
    float monthlyPayMent = readPostieNumber("enter the monthly payment: ");

    totalMonths(loneAmount, monthlyPayMent);

    return 0;
};