// program to print frequency of each number
//   by-Abhinav Bajaj

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num, n, f1 = 0, f2 = 0, f3 = 0, f4 = 0, f5 = 0, f6 = 0, f7 = 0, f8 = 0, f9 = 0;
    cout << "Enter a number" << endl;
    cin >> num;
    while (1)
    {
        n = num % 10;
        num = num / 10;
        if (n == 1)
            f1 = f1 + 1;
        else if (n == 2)
            f2 = f2 + 1;
        else if (n == 3)
            f3 = f3 + 1;
        else if (n == 4)
            f4 = f4 + 1;
        else if (n == 5)
            f5 = f5 + 1;
        else if (n == 6)
            f6 = f6 + 1;
        else if (n == 7)
            f7 = f7 + 1;
        else if (n == 8)
            f8 = f8 + 1;
        else if (n == 9)
            f9 = f9 + 1;

        if (num == 0)
            break;
    }
    cout << "The frequency of 1 is " << f1 << endl;
    cout << "The frequency of 2 is " << f2 << endl;
    cout << "The frequency of 3 is " << f3 << endl;
    cout << "The frequency of 4 is " << f4 << endl;
    cout << "The frequency of 5 is " << f5 << endl;
    cout << "The frequency of 6 is " << f6 << endl;
    cout << "The frequency of 7 is " << f7 << endl;
    cout << "The frequency of 8 is " << f8 << endl;
    cout << "The frequency of 9 is " << f9 << endl;
}