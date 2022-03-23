// program to check if a number is palindrome or not
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 1, n, num1, j = 0, num, rev_num = 1, num2;
    cout << "Enter any number " << endl;
    cin >> num;
    num1 = num;
    num2 = num;
    for (i, j;; i++)
    {
        num = num / 10;
        j = j + 1;
        if (num == 0)
            break;
    }
    cout << "There are " << j << " digits in the number" << endl;

    while (1)
    {
        n = num1 % 10;
        if (num1 >= 10)
            num1 = num1 / 10;
        else if (num1 < 10)
        {
            n = num1;
            num1 = 0;
        }
        rev_num = (rev_num + (n * (pow(10, (j - 1)))));
        j = j - 1;
        if (num1 == 0)
            break;
    }
    cout << "The reversed number is " << rev_num << endl;
    if (rev_num == num2)
        cout << "The given number is a palindrome" << endl;
    else
        cout << "The given number is not a palindrome" << endl;
}