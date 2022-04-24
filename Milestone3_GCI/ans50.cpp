// program to convert Hexadecimal to Decimal number system.
//  by-Abhinav Bajaj

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i, x, dec = 0, j = 0;
    string hexa;
    cout << "Enter any hexadecimal number" << endl;
    cin >> hexa;

    x = hexa.size();
    for (i = x - 1; i >= 0; i--)
    {

        if (hexa[i] >= '0' && hexa[i] <= '9')
        {
            dec = dec + (int(hexa[i]) - 48) * pow(16, j);
        }
        else if (hexa[i] >= 'A' && hexa[i] <= 'F')
        {
            dec += (int(hexa[i]) - 55) * pow(16, j);
        }
        j++;
    }
    cout << "After conversion the decimal number is " << dec << endl;
}