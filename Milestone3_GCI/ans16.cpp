// program to take input of a number and reverse its digits
//   by-Abhinav Bajaj

#include <iostream>
using namespace std;
int main()
{
    int i = 1, n, num1, j = 0, num;
    cout << "Enter any number " << endl;
    cin >> num;
    num1 = num;
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
        num1 = num1 / 10;
        cout << n;
        if (num1 == 0)
            break;
    }
    cout << endl;
}