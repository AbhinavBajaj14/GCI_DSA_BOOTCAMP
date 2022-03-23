// program to find power of a number using loops
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i, num = 1, base, expo;
    cout << "Enter the base number" << endl;
    cin >> base;
    cout << "Enter the exponent/power" << endl;
    cin >> expo;

    for (i = 1; i <= expo; i++)
    {
        num = num * base;
    }
    cout << num << endl;
}