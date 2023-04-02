#include <iostream>
#include <string>
using namespace std;

struct stPenney
{
    int penneies,nickel,dime,quarter,dollor;
};

stPenney ReadData(){

    stPenney penneyContant;
    cout <<"penneies: " << endl;
    cin >> penneyContant.penneies;

       cout <<"nickel: " << endl;
    cin >> penneyContant.nickel;

       cout <<"dime: " << endl;
    cin >> penneyContant.dime;

       cout <<"quarter: " << endl;
    cin >> penneyContant.quarter;

       cout <<"dollor: " << endl;
    cin >> penneyContant.dollor;

    return penneyContant;
};

int CalculatPenneyContent(stPenney penneies)
{

    return penneies.penneies *1 + penneies.nickel *5 +penneies.dime *10 + penneies.quarter*25 +penneies.dollor *100 ;
}


void PrintResult(int result)
{
    cout << result;
}


int main()
{

    PrintResult(CalculatPenneyContent(ReadData()));
    return 0;
}