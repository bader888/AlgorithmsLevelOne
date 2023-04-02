#include <iostream>
#include <string>
using namespace std;

// from 0 to 1
void UsingFoorLoop(int n)
{
    for (int i = n; n > i; i--)
    {
        cout << i;
    }
};

void UsingWhileLoop(int n)
{
    int i;
    while (i < n)
    {

        cout << i;

        i++;
    }
}

void UsingDoWhileLoop(int n)
{
    int i = 0;
    do
    {
        cout << i;

        i++;
    } while (i < n);
}

// from n to 0;
void UsingFoorLoop2(int n)
{
    for (int i = n; i > 0; i--)
    {
        cout << i;
    }
};

void UsingWhileLoop2(int n)
{
    int i = n;
    while (i > 0)
    {

        cout << i;

        i--;
    }
}

void UsingDoWhileLoop2(int n)
{
    int i = n;
    do
    {
        cout << i;

        i--;
    } while (i > 0);
}

int main()
{

    UsingDoWhileLoop(10);
    UsingFoorLoop(10);
    UsingWhileLoop(10);
    return 0;
}