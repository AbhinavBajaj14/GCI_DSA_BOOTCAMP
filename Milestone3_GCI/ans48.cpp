// program to convert Hexadecimal to Binary number system.
//  by-Abhinav Bajaj

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int x, i, dec = 0, j = 0, k = 0, l = 0, m, bin[100];

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
    // CONVERTED HEXADECIMAL INTO DECIMAL
    cout << "After conversion the binary number is " << endl;
    while (dec > 0)
    {
        bin[k] = dec % 2;

        k++;
        l++;
        dec = dec / 2;
    }
    for (m = l - 1; m >= 0; m--)
    {
        cout << bin[m];
    }
    cout << endl;
}