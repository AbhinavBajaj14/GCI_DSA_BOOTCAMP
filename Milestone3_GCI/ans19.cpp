// program to take input of a number and print it in words
//  by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 1, n1, n, num1, j = 0, num, rev_num = 1, num2;
    cout << "Enter any number " << endl;
    cin >> num;
    num1 = num;
    num2 = num;
    for (i, j;; i++)
    {
        num = num / 10;
        j = j + 1; // to find number of digits
        if (num == 0)
            break;
    }
    // to reverse the digits of the number
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
    // reading the digits after reversing
    while (1)
    {
        if (rev_num >= 10)
        {
            if (rev_num % 10 == 0)
                n1 = 0;
            n1 = rev_num % 10;
            rev_num = rev_num / 10;
        }
        else if (rev_num < 10)
        {
            n1 = rev_num;
            rev_num = 0;
        }

        if (n1 == 0)
            cout << " zero ";
        else if (n1 == 1)
            cout << " one ";
        else if (n1 == 2)
            cout << " two ";
        else if (n1 == 3)
            cout << " three ";
        else if (n1 == 4)
            cout << " four ";
        else if (n1 == 5)
            cout << " five ";
        else if (n1 == 6)
            cout << " six ";
        else if (n1 == 7)
            cout << " seven ";
        else if (n1 == 8)
            cout << " eight ";
        else if (n1 == 9)
            cout << " nine ";
        if (num == 0)
            if (rev_num == 0)
                break;
    }
}