#include <iostream>
#include <string>
using namespace std;

enum enPassFail
{
    pass = 1,
    fail = 0
};

int ReadNumber()
{
    int num;

    cout << "enter your mark: ";

    cin >> num;

    return num;
};

enPassFail checkMark(int mark)
{

    if (mark >= 50)
        return enPassFail::pass;

    else
        return enPassFail::fail;
};

void Result(bool mark)
{
    if (checkMark(mark) == enPassFail::pass)
        cout << "you pass the exam";

    else
        cout << "you fail in exam";
}

int main()
{

    Result(checkMark(ReadNumber()));

    return 0;
};