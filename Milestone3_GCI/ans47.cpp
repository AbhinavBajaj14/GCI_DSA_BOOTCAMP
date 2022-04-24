// program to convert Decimal to Hexadecimal number system.

//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{

    int i = 0, j, num, rem = 0;
    char hexa[100];
    cout << "Enter any decimal number ";
    cin >> num;
    cout << "After conversion the hexadecimal number is : " << endl;

    while (num > 0)
    {
        rem = num % 16; // converting decimal to hexadecimal
        if (rem < 10)
            hexa[i] = rem + 48;
        else
            hexa[i] = rem + 55;
        i++;
        num = num / 16;
    }
    for (j = i - 1; j >= 0; j--)
        cout << hexa[j];

    cout << endl;
}
