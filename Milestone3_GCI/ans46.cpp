// program to convert Decimal to Octal number system
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num, octal[100], i = 0, j = 0, k;
    cout << "Enter any decimal number" << endl;
    cin >> num;
    cout << "After conversion the octal number is " << endl;

    while (num > 0)
    {
        octal[i] = num % 8;
        i++;
        j++;
        num = num / 8;
    }
    for (k = j - 1; k >= 0; k--)
    {
        cout << octal[k];
    }
    cout << endl;
}