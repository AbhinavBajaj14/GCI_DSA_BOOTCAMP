// program to convert Decimal to Binary number system
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num, i = 0, j = 0, bin[100], k;
    cout << "Enter the decimal number " << endl;
    cin >> num;
    cout << "After conversion the binary number is " << endl;

    while (num > 0)
    {
        bin[i] = num % 2;
        i++;
        j++;
        num = num / 2;
    }
    for (k = j - 1; k >= 0; k--)
    {
        cout << bin[k];
    }

    cout << endl;
}