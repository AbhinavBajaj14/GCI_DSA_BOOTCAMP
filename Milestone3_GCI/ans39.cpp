// program to convert Binary to Octal number system.
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int binary, octal = 0, digits, i = 0, ans = 0;
    cout << "Enter the binary number" << endl;
    cin >> binary;
    while (binary > 0)
    {
        octal = 0;
        digits = binary % 1000;
        if (digits == 0)
            octal = 0;
        else if (digits == 1)
            octal = 1;
        else if (digits == 10)
            octal = 2;
        else if (digits == 11)
            octal = 3;
        else if (digits == 100)
            octal = 4;
        else if (digits == 101)
            octal = 5;
        else if (digits == 110)
            octal = 6;
        else if (digits == 111)
            octal = 7;

        ans = ans + (octal * pow(10, i));
        i++;
        binary = binary / 1000;
    }
    cout << " Value after conversion to octal is " << ans << endl;
}