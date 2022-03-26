// program to print all Strong numbers between 1 to n.
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i = 1, j, n, last_digit, sum = 0, fact, num1;
    cout << "Enter the number till you want to find the strong numbers " << endl;
    cin >> n;
    cout << "The strong numbers from 1 to entered limit are : " << endl;

    for (i = 1; i <= n; i++)
    {
        // cout << i << endl;

        sum = 0;
        num1 = i;
        while (num1 > 0)
        {
            fact = 1;
            last_digit = num1 % 10; // extracting last digit
            num1 = num1 / 10;

            for (j = 1; j <= last_digit; j++) // factorial of digit extracted from last
            {
                fact = fact * j;
            }
            sum = sum + fact; // adding the factorial of all the numbers
        }
        if (sum == i)
            cout << i << endl;
    }
    return 0;
}