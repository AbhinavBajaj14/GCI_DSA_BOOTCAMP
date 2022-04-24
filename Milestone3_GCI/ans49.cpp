// program to convert Hexadecimal to Octal number system.
//  by-Abhinav Bajaj

#include <iostream>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int i, j = 0, x, dec = 0, octal[100], k = 0, l = 0, m;
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
    cout << "After conversion the octal number is " << endl;

    while (dec > 0)
    {
        octal[k] = dec % 8;

        k++;
        l++;
        dec = dec / 8;
    }
    for (m = l - 1; m >= 0; m--)
    {
        cout << octal[m];
    }
    cout << endl;
}