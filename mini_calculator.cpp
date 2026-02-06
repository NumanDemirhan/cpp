#include <iostream>
using namespace std;

int squareNumber(int number)
{
    return number * number;
}

double squareNumber(double number)
{
    return number * number;
}

void resetValue(int &number)
{
    number = 0;
}

int main()
{
    int x = 7;
    double y = 9.8;

    cout << "Integer " << x << " number's square: " << squareNumber(x) << endl;
    cout << "Double " << y << " number's square: " << squareNumber(y) << endl;

    cout << "x value before reset: " << x << endl;

    resetValue(x);

    cout << "x value after reset: " << x << endl;
    return 0;
}