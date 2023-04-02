#include <iostream>
#include <string>
using namespace std;


// struct CalculatorContent{

//     int numberOne,numberTwo;
//     char operation;

// };

// int sumNumber(int num1, int num2)
// {
//     return num1 + num2;
// };

// int subTract(int num1, int num2)
// {
//     return num1 - num2;
// };

// int multiply(int num1, int num2)
// {
//     return num1 * num2;
// };

// int divide(int num1, int num2)
// {
//     return num1 / num2;
// };



// CalculatorContent ReadCalculatorContent()
// {
// CalculatorContent CalculatorContent;

// cout << "number one :" << endl;
// cin >> CalculatorContent.numberOne;

// cout << "number two : " << endl;
// cin >> CalculatorContent.numberTwo;

// cout << "operation : " << endl;
// cin >> CalculatorContent.operation;

// return CalculatorContent;
// };


// void PrintResult(CalculatorContent calculator)
// {
//     if(calculator.operation == '+')
//     {
//        cout<< sumNumber(calculator.numberOne,calculator.numberTwo);
//     };
//     if(calculator.operation == '-')
//     {
//        cout<< subTract(calculator.numberOne,calculator.numberTwo);
//     };
//     if(calculator.operation == '*')
//     {
//       cout<<  multiply(calculator.numberOne,calculator.numberTwo);
//     };
//     if(calculator.operation == '/')
//     {
//        cout<< divide(calculator.numberOne,calculator.numberTwo);
//     };
// }
///////////////////////////////second solution///////////////////////////////

enum enOprationType {
    add ='+',
    subTract ='-',
    divide = '/',
    multiply = '*'
};

float ReadNumber(string Message)
{
    float number;
    cout << Message << endl ;
    cin >> number;

    return number;
};

enOprationType ReadOpType()
{
    char op = '+';

    cout << "enter oprtation +,-,*,/";

    cin >> op;

    return (enOprationType)op;
};

float Calculate(float number1,float number2 , enOprationType opType)
{
    switch(opType){
        case enOprationType::add:
        return number1 +number2;
        case enOprationType::subTract:
        return number1 - number2;
        case enOprationType::divide:
        return number1 / number2;
        case enOprationType::multiply:
        return number1 *number2;
        default:
        return number1 + number2;
    }
}


void PrintResult(float result)
{
    cout << result;
}
int main()
{

    // PrintResult(ReadCalculatorContent());


///////////////// second solution /////////////////

float number1 = ReadNumber("enter the first number: ");
float number2 = ReadNumber("enter the second number: ");

enOprationType op = ReadOpType();
PrintResult(Calculate(number1,number2,op));
    return 0;
}