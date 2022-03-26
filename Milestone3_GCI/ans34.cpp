// program to check whether a number is Strong number or not.
//  by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int num, num1, num2, n, i, j = 0, k, fact, sum = 0;
    cout << "Enter a number to check " << endl;
    cin >> num;
    num1 = num;
    while (num1 > 0)
    {
        fact = 1;
        n = num1 % 10;
        num1 = num1 / 10;
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
    }

    if (sum == num)
        cout << "The entered number is a strong number " << endl;
    else
        cout << "The entered number is not a strong number " << endl;
}