#include <iostream>
#include <string>
using namespace std;

struct struBillCash
{
    int totalBill;
    int cashPaid;
};

struBillCash ReadData()
{
    struBillCash price;

    cout << "enter the total bill: " << endl;
    cin >> price.totalBill;

    cout << " enter the cash paid: " << endl;
    cin >> price.cashPaid;

    return price;
};

int CalculatePrice(struBillCash paid)
{

    return paid.cashPaid - paid.totalBill;
};

void PrintResult(int result)
{
    cout << result;
};
/////////////////////another solution///////////////////////////////////
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

int CalculateRemainder(float totalBill, float CashPaid)
{
    return CashPaid - totalBill;
}

int main()
{
    float totalBill = readPostieNumber("enter total bill: ");
    float cashpaid = readPostieNumber("enter total cash paid");

    cout << endl;

    cout << " the total bill" << totalBill << endl;

    cout << " the total cash paid" << cashpaid << endl;

    cout << "*****************************" << endl;
    cout << "remainder: " << CalculateRemainder(totalBill, cashpaid);

    // PrintResult(CalculatePrice(ReadData()));

    return 0;
};