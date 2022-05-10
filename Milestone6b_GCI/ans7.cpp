// program to print strong numbers in a range
//  by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
void strong(int);
int main()
{
    int num;
    cout << "Enter the numbers till you want the strong numbers" << endl;
    cin >> num;
    strong(num);
}
void strong(int n)
{

    int i = 1, j, last_digit, sum = 0, fact, num1;
    cout << "The strong numbers from 1 to entered limit are : " << endl;

    for (i = 1; i <= n; i++)
    {

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
}