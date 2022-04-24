// Octal to Hexadecimal number system.
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, temp, i = 0, j = 0, k, digit, dec = 0, x;
    char hexa[100];
    cout << "Enter the octal number" << endl;
    cin >> num;
    cout << "After conversion the hexadecimal number is : " << endl;
    temp = num;
    while (temp > 0)
    {
        digit = temp % 10; // converting octal into decimal
        dec = dec + digit * pow(8, i);
        temp = temp / 10;
        i++;
    }
    cout << "decimal is " << dec << endl;
    i = 0;
    while (dec > 0)
    {
        x = dec % 16;
        if (x < 9)
            hexa[i] = x + 48; // converting into hexadecimal
        else
            hexa[i] = x + 55;

        i++;
        j++;
        dec = dec / 16;
    }
    for (k = j - 1; k >= 0; k--)
    {
        cout << hexa[k];
    }

    cout << endl;
}