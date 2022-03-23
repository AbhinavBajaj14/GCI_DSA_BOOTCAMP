// program to check whether a number is armstrong number or not
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num, num1, n, num2, i, j = 0, sum = 0;
    cout << "Enter any number " << endl;
    cin >> num;
    num1 = num;
    num2 = num;
    while (1)

    {
        num1 = num1 / 10;
        j++;
        if (num1 == 0)
            break;
    }
    for (i = 1; i <= j; i++)
    {
        n = num2 % 10;
        num2 = num2 / 10;
        sum = sum + (n * n * n);
        if (num2 < 10)
            n = num2;
    }
    cout << "The sum of digits is " << sum << endl;
    if (sum == num)
        cout << "The given number is an armstrong number" << endl;
    else
        cout << "The given number is not an armstrong number" << endl;
}