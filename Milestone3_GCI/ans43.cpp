// Octal to Decimal number system.
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, temp, i = 0, digit, dec = 0;
    cout << "Enter the octal number" << endl;
    cin >> num;
    cout << "After conversion the decimal number is : " << endl;
    temp = num;
    while (temp > 0)
    {
        digit = temp % 10; // converting octal into decimal
        dec = dec + digit * pow(8, i);
        temp = temp / 10;
        i++;
    }
    cout << dec << endl;
}