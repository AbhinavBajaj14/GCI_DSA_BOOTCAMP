// program to convert octal to binary
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 0, j = 0, k = 1, num, dec = 0, bin[100], digit = 0, temp, size;

    cout << "Enter the octal number" << endl;
    cin >> num;
    cout << "After conversion the binary number is : " << endl;
    temp = num;
    while (temp > 0)
    {
        digit = temp % 10; // converting octal into decimal
        dec = dec + digit * pow(8, i);
        temp = temp / 10;
        i++;
    }
    i = 0;
    while (dec > 0)
    {
        bin[i] = dec % 2; // converting decimal into binary
        i++;
        j++;
        dec = dec / 2;
    }
    for (k = j - 1; k >= 0; k--)
    {
        cout << bin[k];
    }

    cout << endl;
}