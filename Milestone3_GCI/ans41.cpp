// program to convert binary to hexadecimal
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int num, rem, dec = 0, i = 0, j = 0, temp;
    char hexa[100];
    cout << "Enter any binary number ";
    cin >> num;
    cout << "After conversion the hexadecimal number is : " << endl;
    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        dec = dec + rem * pow(2, i); // converted binary to decimal
        i++;
        temp = temp / 10;
    }
    i = 0;
    rem = 0;
    while (dec > 0)
    {
        rem = dec % 16; // converting decimal to hexadecimal
        if (rem < 10)
            hexa[i] = rem + 48;
        else
            hexa[i] = rem + 55;
        i++;
        dec = dec / 16;
    }
    for (j = i - 1; j >= 0; j--)
        cout << hexa[j];

    cout << endl;
}