// program to convert Binary to Decimal number system
//  by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int binary, i = 0, decimal = 0, digit;
    cout << "Enter any binary number" << endl;
    cin >> binary;
    while (binary > 0)
    {
        digit = binary % 10;
        decimal = decimal + (digit * (pow(2, i)));
        binary = binary / 10;
        i++;
    }
    cout << "The value after conversion in decimal is " << decimal << endl;
}