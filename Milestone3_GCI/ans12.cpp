// program to find sum of first and last digits of a number.
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num, num1, sum = 0, first, last;
    cout << "Enter any number" << endl;
    cin >> num;
    if (num > 9)
    {
        last = (num % 10);
        while (1)
        {
            num1 = num;
            num = num / 10;
            if (num == 0)
            {
                cout << "The first digit is " << num1 << endl;
                break;
            }
        }
        cout << "The last digit is " << last << endl;
        sum = (num1 + last);
        cout << "The sum of first and last digit of the number is " << sum << endl;
    }
    else
        cout << "You have entered a single digit number" << endl;
}